//#include<iostream>
//using namespace std;
//
//class MyInt {
//	friend ostream& operator<<(ostream &cout, MyInt mi);
//public:
//	MyInt();
//	MyInt &operator--() {
//		a--;
//		return *this;
//	}
//	MyInt operator--(int) {
//		MyInt a = *this;
//		this->a--;
//		return a;
//	}
//private:
//	int a;
//};
//MyInt::MyInt() {
//	a = 15;
//}
//ostream& operator<<(ostream &cout, MyInt mi) {
//	cout << mi.a ;
//	return cout;
//}
//int main() {
//	MyInt m1;
//	MyInt m2;
//	cout << --(m1--) << endl;
//	cout << m1 << endl;
//	int a = 3;
//	cout <<--(a--) << endl;
//}