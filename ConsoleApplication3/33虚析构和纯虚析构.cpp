//#include<iostream>
//#include<string>
//using namespace std;
//
//class Animal {
//public:
//	virtual void speak() = 0;
//	Animal() {
//		cout << "animal构造调用" << endl;
//	}
//	//~Animal() {
//	//	cout << "animal析构调用" << endl;
//	//}
//	virtual ~Animal() = 0;
//};
//class Cat :public Animal {
//public:
//	string *m_name;
//	Cat(string name) {
//		cout << "cat构造已调用" << endl;
//		m_name = new string(name);
//	}
//	~Cat() {
//		if (m_name != NULL) {
//			cout << "cat析构已调用" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//	void speak() {
//		cout << "cat is speaking " << endl;
//	}
//};
//Animal::~Animal() {
//	cout << "animal纯虚析构" << endl;
//	//delete a1时调用了，所以不能直接=0，需要声明也要实现
//}
//void test1() {
//	Animal* a1 = new Cat("TOM");
//	a1->speak();
//	delete a1;
//	//析构函数未虚化，animal调用自身析构函数时没有调用cat的析构函数
//}
//int main() {
//	test1();
//}