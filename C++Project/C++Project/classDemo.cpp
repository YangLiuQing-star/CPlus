//#include<iostream>
//using namespace std;
//
////û��ʹ�����η�������Ĭ��Ϊprivate
//class Box{
//	public:
//		double length;//��
//		double breadth;//��
//		double height;//��
//};
//
////����
//class Shape{
//protected:
//	int width;
//	int height;
//
//public:
//	void setWidth(int w){
//		width = w;
//	}
//
//	void setHeight(int h){
//		height = h;
//	}
//};
//
////����
//class PaintCost{
//public:
//	int getCost(int area){
//		return area * 70;
//	}
//};
//
////����
//class Rectangle : public Shape,PaintCost{//���м̳У������̳У�˽�м̳У����ؼ̳�
//public:
//	int getArea(){
//		return width * height;
//	}
//};
//
//void main(){
//	//Box box;
//	//double v = 0.0;
//
//	////��ʼ��
//	//box.length = 5;
//	//box.breadth = 6;
//	//box.height = 7;
//
//	////�������
//	//v = box.length*box.breadth*box.height;
//	//cout << "Box1�����Ϊ:" << v << endl;
//
//
//	Rectangle r;
//	PaintCost cost;
//	r.setWidth(5);
//	r.setHeight(6);
//	int v = r.getArea();
//	cout << "Total Area is " << v << endl;
//	cout << "Total paint cost:$" << cost.getCost(v) << endl;
//}