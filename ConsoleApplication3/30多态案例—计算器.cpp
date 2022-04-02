//#include<iostream>
//using namespace std;
//
//class AbstractCalculator {
//public:
//	int a, b;
//	virtual int getResult() {
//		cout << "jj" << endl;
//		return 0;
//	};
//};
//class AddCalculator : public AbstractCalculator {
//public:
//	int getResult() {//与父类的返回值，函数名和函数参数必须完全一致
//		cout << "kjsfdl" << endl;
//		return a+b;
//	}
//};
//class SubCalculator : public AbstractCalculator {
//public:
//	int getResult() {
//		return a - b;
//	}
//};
//int main() {
//	AbstractCalculator* a = new AddCalculator;
//	a->a = 5;
//	a->b = 7;
//	cout << a->getResult() << endl;
//}