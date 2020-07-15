//#include<iostream>
//using namespace std;
//
////内联函数，在编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方
////对内联函数进行任何的修改，都需要重新编译函数的所有客户端，，编译器重新更换一次所有的代码
////否则会继续使用旧的函数，以空间代价换时间的节省
////在类中定义的函数都是内联函数
//
//inline int max(int x,int y){
//	cout << "我是内联函数" << endl;
//	return x > y ? x : y;
//}
//
//void main(){
//	cout << "max(20,10):" << max(20, 10) << endl;
//	cout << "max(10,30):" << max(10, 30) << endl;
//	cout << "max(40,30):" << max(40, 30) << endl;
//}