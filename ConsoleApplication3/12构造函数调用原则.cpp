//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	int m_age;
//	//Person() {
//	//	cout << "无参构造" << endl;
//	//}
//	//有了有参构造就不在提供默认无参构造
//	//Person(int age) {
//	//	m_age = age;
//	//	cout<<"有参构造" << endl;
//	//}
//	Person(const Person& p) {
//		cout << "copy" << endl;
//	}//有了拷贝就不再提供默认有参和无参构造
//	~Person() {
//		cout << "析构" << endl;
//	}
//};
//void test01() {
//	Person p1;
//	p1.m_age = 18;
//	Person p2(p1);
//}
//
//int main() {
//	test01();
//}