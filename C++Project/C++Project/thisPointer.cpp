//#include<iostream>
//using namespace std;
//
//class Box{
//public:
//	//构造函数
//	Box(double a = 2.0,double b = 2.0,double h = 2.0){
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
//	//比较两个box的体积
//	int compare(Box box){
//		return this->Volume() > box.Volume();
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
//	Box box2(8.5,6.0,2.0);
//
//	if (box1.compare(box2)){
//		cout << "Box2 is small than Box1" << endl;
//	}
//	else{
//		cout << "Box2 is larger than Box1" << endl;
//	}
//	cout << "Vbox1 = " << box1.Volume()<<endl;
//}