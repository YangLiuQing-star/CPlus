//#include<iostream>
//#include<windows.h>
//using namespace std;
//
////引入信号处理库
//#include<csignal>
//
////c++信号处理，信号是由操作系统传递给进程的中断，会提前终止一个程序
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
//	//注册信号和信号处理程序
//	//第一个参数是一个整数，代表信号的编号
//	//第二个参数是一个指向信号处理函数的指针
//	signal(SIGINT, signalHandler);
//
//	while (1){//使用ctrl+c来中断程序，然后自动会调用signalHandler函数
//		cout << "Going to sleep......" << endl;
//		Sleep(100);
//	}
//}