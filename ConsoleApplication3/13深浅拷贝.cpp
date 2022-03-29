//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	int m_age;
//	int* m_height;
//	Person() {
//		cout << "default function" << endl;
//	}
//	Person(int age,int height) {
//		m_age = age;
//		m_height = new int(height);
//		cout << "youcan function" << endl;
//	}
//	Person(const Person& p) {
//		cout << "copy function" << endl;
//		m_age = p.m_age;
//		//m_height = new int(*p.m_height);
//		m_height = p.m_height;
//	}
//	~Person() {
//		//if (m_height != NULL) {
//		//	delete m_height;
//		//	m_height = NULL;
//		//}
//		delete m_height;
//		cout << "default xigou" << endl;
//	}
//};
//void test1() {
//	Person p1(18, 180);
//	cout << *p1.m_height;
//	Person p2(p1);
//	cout << *p2.m_height;
//
//
//}
//int main() {
//	test1();
//}