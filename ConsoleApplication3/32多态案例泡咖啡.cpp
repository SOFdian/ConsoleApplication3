//#include<iostream>
//using namespace std;
//
//class Drink {
//public:
//	virtual void boil() = 0;
//	virtual void put() = 0;
//	void doIt() {
//		boil();
//		put();
//	}
//};
//class Tea : public Drink {
//	void boil() {
//		cout << "boil tea" << endl;
//	}
//	void put() {
//		cout << "put tea" << endl;
//	}
//};
//class Coffee : public Drink {
//	void boil() {
//		cout << "boil coffee" << endl;
//	}
//	void put() {
//		cout << "put coffee" << endl;
//	}
//};
//void test(Drink* d) {
//	d->doIt();
//}
//int main() {
//	test(new Tea);
//}