//#include<iostream>
//using namespace std;
//void hnt(int n, int a,int b,int c);
//
//
//int main() {
//	hnt(9,1,3,2);
//	//�����ˣ���13�ô�a�Ƶ�b���Լ�һ��
//}
//
//void hnt(int n,int a,int b,int c) {
//
//		if (n == 1) {
//			cout << a<<b << endl;   //13
//		}
//		else {
//			hnt(n - 1, a,c,b);    //12
//			hnt(1, a,b,c);   //13
//			hnt(n - 1, c,b,a); //23
//		}
//
//}