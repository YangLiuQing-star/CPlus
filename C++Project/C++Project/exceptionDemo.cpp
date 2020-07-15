//#include<iostream>
//using namespace std;
//
////异常
//
//double division(int a,int b){
//	if (b == 0){
//		//抛出const char*类型的异常
//		throw "除数不能为零!";
//	}
//	return a / b;
//}
//
//void main(){
//
//	int x = 10;
//	int y = 0;
//	try{
//		double res = division(x, y);
//	}
//	catch (const char* msg){//捕获char *类型的异常
//		//输出异常信息
//		cerr << msg << endl;
//	}
//	
//
//
//}