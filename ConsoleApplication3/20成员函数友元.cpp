//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Building;
//class GoodGay;
//
//
//
//class Building {
//	friend  void GoodGay::visit1();
//public:
//	Building();
//	string sittingroom;
//private:
//	string bedroom;
//};
//class GoodGay {
//public:
//	GoodGay();
//	void visit1();
//	Building* building;
//};
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//Building::Building() {
//	sittingroom = "����";
//	bedroom = "����";
//}
//void GoodGay::visit1() {
//	cout << building->sittingroom << endl;
//	cout << building->bedroom << endl;
//}
//
////��������ķ���˳��ǳ����ˣ�
////�����Ǵ�����ʾ
//
//
//int main() {
//	GoodGay g1;
//	g1.visit1();
//}