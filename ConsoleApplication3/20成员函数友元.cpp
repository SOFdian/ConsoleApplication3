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
//	sittingroom = "客厅";
//	bedroom = "卧室";
//}
//void GoodGay::visit1() {
//	cout << building->sittingroom << endl;
//	cout << building->bedroom << endl;
//}
//
////这里面类的放置顺序非常烦人；
////现在是错误演示
//
//
//int main() {
//	GoodGay g1;
//	g1.visit1();
//}