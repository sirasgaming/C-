// cau3 c va d 2013.
// vì hai câu này gộp lại được nên em gộp lại.
class linearList : public absList {
	absList* subLst;
public:
	linearList(int pId) : absList(pId) {
		subLst = NULL;
	}
	virtual ~linearList() {
		if (subLst != NULL)
			delete subLst;
	}
	virtual absList* addFirst(int pId) {
		linearList* Lst = new linearList(pId);
		Lst->subLst = this;
		return Lst;
	}
	virtual absList* getSubItem() {
		return subLst;
	}
	virtual void showAll(ostream& outDev) {
		// in gia tri hien tai cua doi tuong
		outDev << dataId << " ";

		// neu ton tai doi tuong con, goi de quy de in gia tri cua doi tuong con
		if (subLst != NULL) {
			subLst->showAll(outDev);
		}
	}

	virtual int countAll() {
		int count = 1;
		if (subLst != NULL) { // kiem tra su ton tai cua subLst neu khong co thi dung de quy phuong thuc countAll tren subLst de dem so luong phan tu trong subLst roi cong vao count.
			count += subLst->countAll();
		}
		return count;
	}
}; //// Kết thúc linearList



