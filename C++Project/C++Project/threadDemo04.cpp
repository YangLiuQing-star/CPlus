#include<iostream>

#include<thread>//引入与线程相关的标准库
using namespace std;

#include<windows.h>
//多线程同步

int totalNum = 100;

//线程的运行函数
void thread01(){
	while (totalNum > 0){
		cout << totalNum << endl;
		totalNum--;
		Sleep(100);
	}
}

void thread02(){
	while (totalNum > 0){
		cout << totalNum << endl;
		totalNum--;
		Sleep(100);
	}
}

void main(){
	//带参数子线程
	thread task01(thread01);
	thread task02(thread02);
	//不阻塞主线程，main线程和两个子线程并行执行，分离线程
	task01.detach();
	task02.detach();
	system("pause");
}