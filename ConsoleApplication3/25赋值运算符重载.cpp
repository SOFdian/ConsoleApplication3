//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	Person(int age);
//	~Person() {
//		if (m_age != NULL) {
//			delete m_age;
//			m_age = NULL;  
//		}
//	}
//private:
//	int* m_age;
//};
//Person::Person(int age) {
//	m_age = new int(age);//使用m_age维护堆区的age
//}
//void test1() {
//	Person p1(12);
//	Person p2(15);
//	p2 = p1;
//}
//int main() {
//	test1();
//}