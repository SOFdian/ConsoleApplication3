//#include<iostream>
//using namespace std;
//
//class Base {
//public:
//	int a=4;
//	void func() {
//		cout << "1" << endl;
//	}
//};
//class Son : public Base {
//public:
//	int a = 5;
//	void func() {
//		cout << "2" << endl;
//	}
//};
//
//int main() {
//	Son s1;
//	cout << s1.a << endl;
//	cout << s1.Base::a << endl;
//	s1.func();
//	s1.Base::func();
// //直接调用时总是默认调用子类的同名成员
//}