// cau3d 2012.
// Mã nguồn lớp sin được sửa như sau:

class Sin:public Function {
private:
	static Sin* instance;
public:
	Sin() {

	}
	static Sin* getInstance() {
		if (instance == NULL) { // co the su dung Nullptr
			instance = new Sin();
		}
		return instance;
	}
	double Value(double x) {
		return sin(x);
	}
	double Derive(double x) {
		return cos(x);
	}
};

// ta pahi khoi tao con tro instance la mot con tro rong:
Sin* Sin:instance == NULL;

int main() {
	double x = 3.14/6; // PI/6.
	Sin* s = Sin::getInstance();
	double y = DeriveProduct(s, s, x);
	printf("sin(x) = %f; sin'(x) = %f\n", s->Value(x), s->Derive(x));
	printf("y = %f\n", y);
}