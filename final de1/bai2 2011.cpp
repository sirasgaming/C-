// bai2 2011.
#include <iostream>

using namespace std;

class MayXucTac {
private:
	long long congsuat, luonghoaChat, thoiGianHoatDong;
public:
	static const int DON_GIA_HOA_CHAT = 10000; // don gia hoa chat(dong/g).
	static const int DON_GIA_THUE = 80000; // don gia thue(dong/g).
	MayXucTac() {
		congsuat = 0;
		luonghoaChat = 0;
		thoiGianHoatDong = 0;
	}
	
	void nhap();
	long long tinhChiPhi();
	long long tinhLuongNuoc();
};

void MayXucTac::nhap() {
	cout << "Nhap cong suat cua may(m^3/h):";
	cin >> congsuat;
	cout << "Nhap luong hoa chat(g):";
	cin >> luonghoaChat;
	cout << "Nhap thoi gian hoat dong(h):";
	cin >> thoiGianHoatDong;
}

long long MayXucTac::tinhLuongNuoc() {
	float congsuatThucTe = 0;
	if (thoiGianHoatDong < 10) {
		congsuatThucTe = congsuat * (luonghoaChat / 100);
	}
	else {
		congsuatThucTe = congsuat * (luonghoaChat / 100) / (thoiGianHoatDong / 10);
	}
	return congsuatThucTe * thoiGianHoatDong;
}

long long MayXucTac::tinhChiPhi() {
	int chiphithue = DON_GIA_THUE * thoiGianHoatDong;
	int chiphihoaChat = DON_GIA_HOA_CHAT * luonghoaChat;
	return chiphithue + chiphihoaChat;
}

int main() {
	cout << "Don gia hoa chat: " << MayXucTac::DON_GIA_HOA_CHAT << endl;
	MayXucTac m;
	m.nhap(); // Nhập thông tin sử dụng của máy xúc tác này
	cout << "Chi phi su dung may: " << m.tinhChiPhi() << endl;
	cout << "Luong nuoc loc duoc: " << m.tinhLuongNuoc() << endl;
}