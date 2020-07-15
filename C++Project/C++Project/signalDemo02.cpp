//#include<iostream>
//using namespace std;
////Windows系统下引入#include<windows.h> 来调用Sleep()函数，以毫秒为单位
//#include<windows.h>
//
////Linux系统下引入#include<unistd.h> 来调用sleep()函数，以秒为单位
//
////引入信号处理库
//#include<csignal>
//
////c++信号处理
//
//void signalHandler(int signum){
//	cout << "Interrup signal (" << signum << ")received.\n";
//
//	//清理并关闭
//	//终止程序
//
//	exit(signum);
//}
//
//void main(){
//	int i = 0;
//
//	//注册信号和信号处理程序
//	//第一个参数是一个整数，代表信号的编号
//	//第二个参数是一个指向信号处理函数的指针
//	signal(SIGINT, signalHandler);
//
//	while (++i){//使用ctrl+c来中断程序，然后自动会调用signalHandler函数
//		cout << "Going to sleep......" << endl;
//		if (i == 3){
//			//raise()函数，用于生成信号，该函数带有一个整数信号作为参数
//			raise(1);
//		}
//		//执行挂起一段时间，也就是等待一定的时间在继续执行
//		Sleep(100);
//	}
//}