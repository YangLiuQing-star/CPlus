//#include<iostream>
//
//#include<thread>//�������߳���صı�׼��
//using namespace std;
//
//#include<windows.h>
////���������߳�
//
////�̵߳����к���
//void thread01(int num){
//	for (int i = 0; i < num; i++){
//		cout << "Thread 01 is working!" << endl;
//		//�߳�˯��100ms
//		Sleep(100);
//	}
//}
//
//void thread02(int num){
//	for (int i = 0; i < num; i++){
//		cout << "Thread 02 is working!" << endl;
//		//�߳�˯��100ms
//		Sleep(200);
//	}
//}
//
//void main(){
//	//���������߳�
//	thread task01(thread01,5);
//	thread task02(thread02,5);
//	//���������̣߳�main�̺߳��������̲߳���ִ��
//	task01.detach();
//	task02.detach();
//
//	for (int i = 0; i < 5; i++){
//		cout << "Main thread is working!" << endl;
//		Sleep(200);
//	}
//
//}