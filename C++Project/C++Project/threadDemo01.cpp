//#include<iostream>
//
//#include<thread>//�������߳���صı�׼��
//using namespace std;
//
//#include<windows.h>
//
////�̵߳����к���
//void thread01(){
//	for (int i = 0; i < 5; i++){
//		cout << "Thread 01 is working!" << endl;
//		//�߳�˯��100ms
//		Sleep(100);
//	}
//}
//
//void thread02(){
//	for (int i = 0; i < 5; i++){
//		cout << "Thread 02 is working!" << endl;
//		//�߳�˯��100ms
//		Sleep(200);
//	}
//}
//
//void main(){
//
//	thread task01(thread01);
//	thread task02(thread02);
//	//join()����������ȴ��������߳�
//	task01.join();
//	task02.join();
//
//	for (int i = 0; i < 5; i++){
//		cout << "Main thread is working!" << endl;
//		Sleep(200);
//	}
//	system("pause");
//
//}