//#include<iostream>
//using namespace std;
////Windowsϵͳ������#include<windows.h> ������Sleep()�������Ժ���Ϊ��λ
//#include<windows.h>
//
////Linuxϵͳ������#include<unistd.h> ������sleep()����������Ϊ��λ
//
////�����źŴ����
//#include<csignal>
//
////c++�źŴ���
//
//void signalHandler(int signum){
//	cout << "Interrup signal (" << signum << ")received.\n";
//
//	//�����ر�
//	//��ֹ����
//
//	exit(signum);
//}
//
//void main(){
//	int i = 0;
//
//	//ע���źź��źŴ������
//	//��һ��������һ�������������źŵı��
//	//�ڶ���������һ��ָ���źŴ�������ָ��
//	signal(SIGINT, signalHandler);
//
//	while (++i){//ʹ��ctrl+c���жϳ���Ȼ���Զ������signalHandler����
//		cout << "Going to sleep......" << endl;
//		if (i == 3){
//			//raise()���������������źţ��ú�������һ�������ź���Ϊ����
//			raise(1);
//		}
//		//ִ�й���һ��ʱ�䣬Ҳ���ǵȴ�һ����ʱ���ڼ���ִ��
//		Sleep(100);
//	}
//}