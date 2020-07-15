//#include<iostream>
//using namespace std;
//
////基类
//class Shape{
//protected:
//	int width;
//	int height;
//
//public:
//	Shape(int a = 0,int b = 0){
//		width = a;
//		height = b;
//	}
//
//	void setWidth(int w){
//		width = w;
//	}
//
//	void setHeight(int h){
//		height = h;
//	}
//
//	//声明该函数是虚函数，动态绑定，根据传入的类型来选择调用的函数
//	//virtual int area(){
//	//	cout << "Parent class area : " << endl;
//	//	return 0;
//	//}
//
//	//纯虚函数，=0告诉编译器，函数没有主体，留给子类实现
//	virtual int area() = 0;
//};
//
//
////子类
//class Rectangle : public Shape{//公有继承，保护继承，私有继承，多重继承
//public:
//	Rectangle(int a = 0,int b = 0):Shape(a,b) {}
//	int area(){
//		cout << "Rectangle class area : " << endl;
//		return width * height;
//	}
//};
//
////子类
//class Triangle :public Shape{
//public:
//	Triangle(int a = 0, int b = 0) :Shape(a, b) {}
//	int area(){
//		cout << "Triangle class area : " << endl;
//		return width * height/2;
//	}
//};
//
////静态多态，早绑定，在编译期间被编译器设置为基类中的版本
//void main(){
//	Shape *shape;
//	Rectangle rec(10,7);
//	Triangle tri(10,5);
//
//	//存储矩形的地址
//	shape = &rec;
//	shape->area();
//
//	//存储三角形的地址
//	shape = &tri;
//	//调用三角形求面积的函数
//	shape->area();
//}