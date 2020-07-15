//#include<iostream>
//using namespace std;
//
//
////静态成员，可以在类的内部进行声明，在创建第一个对象时，所有的静态数据都会初始化为零
////但是类的外部必须使用范围解析运算符::来重新声明静态变量从而对它进行初始化
//class Box{
//public:
//	//声明静态变量
//	static int objectCount;
//
//	//构造函数
//	Box(double a = 2.0, double b = 2.0, double h = 2.0){
//		cout << "构造函数被调用..." << endl;
//		this->a = a;
//		this->b = b;
//		this->h = h;
//		objectCount++;
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
//int Box::objectCount = 0;
//
//
////主函数
//void main(){
//	Box box1(3.3, 1.2, 1.5);
//	Box box2(8.5, 6.0, 2.0);
//
//	//通过类名访问静态变量
//	cout << "Total objects: "<<Box::objectCount << endl;
//}