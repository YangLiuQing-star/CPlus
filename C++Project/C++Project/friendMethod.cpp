//#include<iostream>
//using namespace std;
//
////友元函数
////如果claasTwo 的所有成员函数作为类ClassOne的友元，需要在classOne的定义中放置如下声明
////friend class ClassTwo;
//
//class Box{
//private:
//	double width;
//
//public:
//	friend void printWidth(Box box);
//	void setWidth(double w);
//};
//
////成员函数的定义
//void Box::setWidth(double w){
//	width = w;
//}
//
////不是任何类的成员函数
//void printWidth(Box box){
//	//因为printWidth是类Box的友元函数，它可以直接访问该类的任何成员
//	cout << "Width of box : " << box.width << endl;
//}
//
////主方法
//void main(){
//	Box box;
//	box.setWidth(10.5);
//	printWidth(box);
//}