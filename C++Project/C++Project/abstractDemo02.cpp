//#include<iostream>
//using namespace std;
//
////抽象类，不能实例化，定义的虚函数，留给派生类去实现，其子类需要被实例化时，必须实现每一个虚函数
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
//
//	//纯虚函数，=0告诉编译器，函数没有主体，留给子类实现
//	virtual int getArea() = 0;
//};
//
//
////子类
//class Rectangle : public Shape{//公有继承，保护继承，私有继承，多重继承
//public:
//	int getArea(){
//		cout << "Rectangle class area : " << endl;
//		return width * height;
//	}
//};
//
////子类
//class Triangle :public Shape{
//public:
//	int getArea(){
//		cout << "Triangle class area : " << endl;
//		return width * height / 2;
//	}
//};
//
////静态多态，早绑定，在编译期间被编译器设置为基类中的版本
//void main(){
//	int v = 0;
//	Rectangle rec;
//	rec.setWidth(5);
//	rec.setHeight(7);
//	v = rec.getArea();
//	cout << "Rectangle area is " << v << endl;
//	Triangle tri;
//	tri.setWidth(4);
//	tri.setHeight(6);
//	v = tri.getArea();
//	cout << "Triangle area is " << v << endl;
//
//	
//}