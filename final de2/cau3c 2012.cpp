// cau3c 2012.
// ma nguon co cong thuc dao ham thuong:

double DeriveQuotient(Function* f, Function g, double x) {
	if (f!= NULL && g!= NULL) {
		double tu = f->Derive(x) * g->Value(x) - f->Value(x) * g->Derive(x);
		double mau = pow(g->Value(x),2) // can bac 2
		if (mau != 0) {
			return tu / mau;
		}
	}
	return 0;
}

// ma nguon cho dao ham hop

double DeriveCompostive(Function* f, Function* g, double x) {
	if (f != NULL && g != NULL) {
		return f->Derive(g->Value(x)) * g->Derive(x);
	}
	return 0;
}