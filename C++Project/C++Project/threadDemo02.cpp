//#include<iostream>
//
//#include<thread>//引入与线程相关的标准库
//using namespace std;
//
//#include<windows.h>
////不阻塞主线程
//
////线程的运行函数
//void thread01(){
//	for (int i = 0; i < 5; i++){
//		cout << "Thread 01 is working!" << endl;
//		//线程睡眠100ms
//		Sleep(100);
//	}
//}
//
//void thread02(){
//	for (int i = 0; i < 5; i++){
//		cout << "Thread 02 is working!" << endl;
//		//线程睡眠100ms
//		Sleep(200);
//	}
//}
//
//void main(){
//
//	thread task01(thread01);
//	thread task02(thread02);
//	//不阻塞主线程，main线程和两个子线程并行执行
//	task01.detach();
//	task02.detach();
//
//	for (int i = 0; i < 5; i++){
//		cout << "Main thread is working!" << endl;
//		Sleep(200);
//	}
//	system("pause");
//
//}