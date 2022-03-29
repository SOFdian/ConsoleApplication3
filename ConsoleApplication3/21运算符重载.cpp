//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	int a, b;
//	Person() {};
//	Person(int a, int b) {
//		this->a = a;
//		this->b = b;
//	}
//	Person operator+(Person &p) {//如果不用引用相当于copy一个对象，耗费时间空间
//		Person temp;
//		temp.a = this->a + p.a;
//		temp.b = this->b + p.b;
//		return temp;
//	}
//};
////Person operator+(Person& p1, Person& p2) {
////	Person temp;
////	temp.a = p1.a + p2.a;
////	temp.b = p1.b + p2.b;
////	return temp;
////}
//int main() {
//	Person p1(1,5);
//	Person p2(4,6);
//	Person p3(2,4);
//	p3 = p1 + p2;
//	p3 = p1.operator+(p2);//成员函数运算符相当于
//
//	cout << p3.a << p3.b << endl;
//}