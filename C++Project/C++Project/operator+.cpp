//#include<iostream>
//using namespace std;
//
////没有使用修饰符，此类默认为private
//class Box{
//private:
//	double length;//长
//	double breadth;//宽
//	double height;//高
//public:
//	void setLength(double l){
//		length = l;
//	}
//
//	void setBreadth(double b){
//		breadth = b;
//	}
//
//	void setHeight(double h){
//		height = h;
//	}
//
//	double getArea(){
//		return length * breadth * height;
//	}
//
//	//运算符重载，可重载的运算符为+,-,*,/,%,==,!=,>=,>,<=,<
//	Box operator+(const Box& b){
//		Box box;
//		box.length = this->length + b.length;
//		box.breadth = this->breadth + b.breadth;
//		box.height = this->height + b.height;
//		return box;
//	}
//};
//
//
//void main(){
//
//	Box box1;
//	Box box2;
//
//	box1.setLength(1);
//	box1.setBreadth(2);
//	box1.setHeight(3);
//
//	cout << "box1 Area is "<< box1.getArea()<<endl;
//	
//
//	box2.setLength(2);
//	box2.setBreadth(3);
//	box2.setHeight(4);
//	cout << "box2 Area is " << box2.getArea() << endl;
//	
//	Box box = box1 + box2;
//	cout << "box Area is " << box.getArea() << endl;
//}