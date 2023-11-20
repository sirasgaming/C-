// cau3b 2012.
class Cos :public Function {
public:
	double value(double x) {
		return cos(x);
	}

	double Devire(double x) {
		return -sin(x);
	}
};