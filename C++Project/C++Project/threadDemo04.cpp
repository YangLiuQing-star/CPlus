#include<iostream>

#include<thread>//�������߳���صı�׼��
using namespace std;

#include<windows.h>
//���߳�ͬ��

int totalNum = 100;

//�̵߳����к���
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
	//���������߳�
	thread task01(thread01);
	thread task02(thread02);
	//���������̣߳�main�̺߳��������̲߳���ִ�У������߳�
	task01.detach();
	task02.detach();
	system("pause");
}