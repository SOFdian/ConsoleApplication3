//#include<iostream>
//using namespace std;
//
//class MyInt {
//	friend ostream& operator<<(ostream &cout, MyInt mi);
//public:
//	MyInt() {
//		mint = 15;
//	}
//	MyInt& operator++() {
//		mint++;
//		return *this;
//	}
//	MyInt operator++(int) {//���ﲻ�������ã���Ϊmi�Ǿֲ��Ļ����ٵ�
//		MyInt mi;
//		mi = *this;
//		this->mint++;
//		return mi;
//	}
//private:
//	int mint;
//};
//
//ostream& operator<<(ostream &cout, MyInt mi) {
//	cout << mi.mint;
//	return cout;
//}
//
//int main() {
//	MyInt mi;
//	cout << (mi++)++ << endl;
//	cout << ++(++mi) << endl;
//	cout << mi << endl;
//}