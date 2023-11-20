// cau1c 2015.
//lớp đối tượng Singleton chỉ được phép tạo một thể hiện duy nhất.
class Singleton {
public:
	static Singleton& getInstance() {
		static Singleton instance;
		return instance;
	}
private:
	Singleton() {} // Ham mac dinh la private de khong cho phep tao the hien tu ben ngoai.
	Singleton(const Singleton& other) = delete; // vo hieu hoa toan tu tu sao chep.
	Singleton& operator = (const Singleton& other) = delete; // vo hieu hoa toan tu gan.

	// cac thanh vien va phuong thuc kahc cua lop Singleton
};