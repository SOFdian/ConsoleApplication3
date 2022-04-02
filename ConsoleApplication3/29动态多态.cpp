//#include<iostream>
//using namespace std;
//
//class Animal {
//public:
//	 virtual void speak() {
//		cout << "animal" << endl;
//	}
//};
//
//class Cat : public Animal {
//public:
//	void speak() {
//		cout << "cat" << endl;
//	}
//};
//class Dog :public  Animal {
//public:	
//	void speak() {
//		cout << "dog" << endl;
//	}
//};
////有继承关系
////子类重写父类的虚函数
////指针或引用方式传入
//void test(Animal &animal) {
//	animal.speak();
//}
//int main() {
//	Cat c1;
//	test(c1);
//	Dog d1;
//	d1.speak();
//}