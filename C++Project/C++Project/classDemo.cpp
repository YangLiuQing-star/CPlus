//#include<iostream>
//using namespace std;
//
////没有使用修饰符，此类默认为private
//class Box{
//	public:
//		double length;//长
//		double breadth;//宽
//		double height;//高
//};
//
////基类
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
////基类
//class PaintCost{
//public:
//	int getCost(int area){
//		return area * 70;
//	}
//};
//
////子类
//class Rectangle : public Shape,PaintCost{//公有继承，保护继承，私有继承，多重继承
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
//	////初始化
//	//box.length = 5;
//	//box.breadth = 6;
//	//box.height = 7;
//
//	////计算体积
//	//v = box.length*box.breadth*box.height;
//	//cout << "Box1的体积为:" << v << endl;
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