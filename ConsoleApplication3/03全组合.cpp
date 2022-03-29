//#include<iostream>
//using namespace std;
//int comm(int a, int b);
//
//int main() {
//	int a = 18, b = 5;
//	cout << comm(a, b);
//}
//
//int comm(int a, int b) {
//	int sum = 0;
//	if (b >= 0&&a>=b) {
//		sum = comm(a - 1, b) + comm(a - 1, b - 1);
//		if (a == b || b == 0) {
//			return 1;
//		}
//		else {
//			return sum;
//		}
//	}
//}