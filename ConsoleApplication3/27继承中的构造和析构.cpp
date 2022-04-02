//#include<iostream>
//using namespace std;
//
//class Dad {
//public:
//	int a;
//	Dad() {
//		cout << "dad1" << endl;
//	}
//	~Dad() {
//		cout << "dad2" << endl;
//	}
//	Dad(int a, int b, int c);
//protected:
//	int b;
//private:
//	int c;
//};
//
//class Son : public Dad {
//public:
//	Son() {
//		cout << "son1" << endl;
//	}
//	~Son() {
//		cout << "son2" << endl;
//	}
//};
//Dad::Dad(int a, int b, int c) {
//	this->a = a;
//	this->b = b;
//	this->c = c;
//}
//int main() {
//	
//	Son s1;
//	/*
//	构造先父后子
//	析构先子后父
//
//	父构造
//	子构造
//	子析构
//	父析构
//
//	*/
//}