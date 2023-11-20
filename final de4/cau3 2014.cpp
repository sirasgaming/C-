﻿// cau3 2014.
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Contract {
protected:
	string fullName;
	string idNumber;
	string address;
public:
	Contract(string name, string id, string addr): fullName(name), idNumber(id), address(addr){}

	virtual ~Contract() {}

	string getFullName() const {
		return fullName;
	}
	string getIdNumber() const {
		return idNumber;
	}
	string getAddress() const {
		return address;
	}

	virtual double calculateTotalBill() const = 0;
	virtual void displayContractInfo() const = 0;

};

class BasicContract :public Contract {
private:
	int callTime; // thoi gian goi.
	double callRate; // tien goi(1000 đồng/phút).
	int dataUsage; // Lưu lượng truy cập (MB)
	double dataRate; //tien internet(200 đồng/MB).
public:
	BasicContract(string name, string id, string addr, int time, double rate, int usage, double data_rate):Contract(name,id,addr), callTime(time), callRate(rate), dataUsage(usage), dataRate(data_rate){}
	
	int getCallTime() const {
		return callTime;
	}
	double getCallRate() const {
		return callRate;
	}
	int getDataUsage() const {
		return dataUsage;
	}
	double getDataRate() const {
		return dataRate;
	}

	double calculateTotalBill() const override {
		double callCost = callTime * callRate;
		double dataCost = dataUsage * dataRate;
		return callCost + dataCost + (callCost + dataCost) * 0.1;
	}
	
	void displayContractInfo() const override {
		cout << "Basic Contract Information:\n";
		cout << "Customer Name:" << getFullName() << "\n";
		cout << "Customer ID:" << getIdNumber() << "\n";
		cout << "Customer Address:" << getAddress() << "\n";
	}
};

class DataFreeContract :public BasicContract {
private:
	int dataFreeLimit;
public:
	DataFreeContract(string name, string id, string addr, int time, double rate, int usage, double data_rate, int limit):BasicContract(name, id, addr, time, rate, usage, data_rate),dataFreeLimit(limit){}
	
	double calculateTotalBill() const override {
		double totalBill = BasicContract::calculateTotalBill();
		return (getDataUsage() > dataFreeLimit) ? totalBill + (getDataUsage() - dataFreeLimit) * getDataRate() : totalBill;
	}
};

class DataFixContract :public BasicContract {
private:
	double fixedCost;
public:
	DataFixContract(string name, string id, string addr, int time, double rate, int usage, double data_rate, double cost) :BasicContract(name, id, addr, time, rate, usage, data_rate), fixedCost(cost){}

	double calculateTotalBill() const override {
		double totalBill = BasicContract::calculateTotalBill();
		return totalBill - (totalBill * 0.1) + fixedCost;
	}
};

class Company {
private:
	vector<Contract*>contracts;
public:
	~Company() {
		for (Contract* contract : contracts) {
			delete contract;
		}
	}

	void addContract(Contract* contract) {
		contracts.push_back(contract);
	}

	void calculateBill() const {
		for (const Contract* contract : contracts) {
			contract->displayContractInfo();
			cout << "Total Bill:" << fixed << setprecision(0) << contract->calculateTotalBill() << "VND\n";
			cout << "-------------------------------------------------\n";
		}
	}
};

int main() {
	Company company;
	
	//tao thong tin
	BasicContract* contract1 = new BasicContract("Nguyen Dang Lam", "123456789", "PTIT", 200, 1000, 800, 200);
	DataFreeContract* contract2 = new DataFreeContract("Nguyen Nhat Tan", "987654321", "PTIT", 100, 1000, 500, 200, 800);
	DataFixContract* contract3 = new DataFixContract("Ho Chi Minh", "543216789", "PTIT", 50, 1000, 140, 150, 200000);

	// Add vao company
	company.addContract(contract1);
	company.addContract(contract2);
	company.addContract(contract3);

	// xuat Bill
	company.calculateBill();

	return 0;
}