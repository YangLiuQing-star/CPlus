//#include<iostream>
//using namespace std;
//
//
//class Adder{
//public:
//	//构造函数
//	Adder(int i = 0){
//		total = i;
//	}
//
//	//对外提供的接口
//	void addNum(int num){
//		total = total + num;
//	}
//
//	//对外提供的接口
//	int getTotal(){
//		return total;
//	}
//
////对外隐藏的属性
//private:
//	int total;
//};
//
//
//void main(){
//	Adder adder;
//
//	adder.addNum(10);
//	adder.addNum(20);
//	adder.addNum(30);
//
//
//	int result = adder.getTotal();
//	cout << "result = " << result << endl;
//}