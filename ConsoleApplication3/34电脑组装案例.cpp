//#include<iostream>
//using namespace std;
//
//class CPU {
//public:
//	virtual void calculate() = 0;
//	virtual ~CPU() = 0;
//};
//class GPU {
//public:
//	virtual void display() = 0;
//};
//
//class InterCpu :public CPU {
//public:
//	void calculate() {
//		cout << "Inter CPU" << endl;
//	}
//	~InterCpu() {
//		cout << "InterCpu is deleted" << endl;
//	}
//};
//class InterGpu :public GPU {
//public:
//	void display() {
//		cout << "Inter GPU" << endl;
//	}
//};
//class AMDCpu :public CPU {
//public:
//	void calculate() {
//		cout << "AMD cpu" << endl;
//	}
//};
//class AMDGpu :public GPU {
//public:
//	void display() {
//		cout << "AMD gpu" << endl;
//	}
//};
//
//class Computer {
//public:
//	Computer(CPU *c1,GPU *g1) {
//		cpu = c1;
//		gpu = g1;
//	}
//	~Computer() {
//		delete cpu;
//		delete gpu;
//		cout << "computer is delete" << endl;
//	}
//	void work() {
//		cpu->calculate();
//		gpu->display();
//	}
//private:
//	CPU* cpu;
//	GPU* gpu;
//};
//CPU::~CPU() {
//	//必须要有实现，因为调用子类的析构时会走父类的纯虚析构（为了delete父类中可能new的内容）
//}
//void test1() {
//	CPU *i5 = new InterCpu;
//	GPU *rtx = new AMDGpu;
//	Computer* c1 = new Computer(i5, rtx);
//	c1->work();
//	delete c1;
//	cout << &i5 << endl;
//}
//int main() {
//	test1();
//}