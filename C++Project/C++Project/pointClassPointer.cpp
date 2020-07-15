//#include<iostream>
//using namespace std;
//
//
////指向类的指针，需要使用成员访问运算符来访问成员
//class Box{
//public:
//	//构造函数
//	Box(double a = 2.0, double b = 2.0, double h = 2.0){
//		cout << "构造函数被调用..." << endl;
//		this->a = a;
//		this->b = b;
//		this->h = h;
//	}
//
//	//计算面积
//	double Volume(){
//		return a * b * h;
//	}
//
//private:
//	double a;
//	double b;
//	double h;
//};
//
//
////主函数
//void main(){
//	Box box1(3.3, 1.2, 1.5);
//	Box box2(8.5, 6.0, 2.0);
//
//	//定义一个指向Box类的指针
//	Box *bptr;
//	bptr = &box1;
//	cout << "Vbox1 = " << bptr->Volume() << endl;
//
//	bptr = &box2;
//	cout << "Vbox2 = " << bptr->Volume() << endl;
//}