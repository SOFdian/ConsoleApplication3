//#include<iostream>
//#include<string>
//using namespace std;
//
//class Animal {
//public:
//	virtual void speak() = 0;
//	Animal() {
//		cout << "animal�������" << endl;
//	}
//	//~Animal() {
//	//	cout << "animal��������" << endl;
//	//}
//	virtual ~Animal() = 0;
//};
//class Cat :public Animal {
//public:
//	string *m_name;
//	Cat(string name) {
//		cout << "cat�����ѵ���" << endl;
//		m_name = new string(name);
//	}
//	~Cat() {
//		if (m_name != NULL) {
//			cout << "cat�����ѵ���" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//	void speak() {
//		cout << "cat is speaking " << endl;
//	}
//};
//Animal::~Animal() {
//	cout << "animal��������" << endl;
//	//delete a1ʱ�����ˣ����Բ���ֱ��=0����Ҫ����ҲҪʵ��
//}
//void test1() {
//	Animal* a1 = new Cat("TOM");
//	a1->speak();
//	delete a1;
//	//��������δ�黯��animal����������������ʱû�е���cat����������
//}
//int main() {
//	test1();
//}