//#include<iostream>
//#include<windows.h>
//using namespace std;
//
////�����źŴ����
//#include<csignal>
//
////c++�źŴ����ź����ɲ���ϵͳ���ݸ����̵��жϣ�����ǰ��ֹһ������
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
//	//ע���źź��źŴ������
//	//��һ��������һ�������������źŵı��
//	//�ڶ���������һ��ָ���źŴ�������ָ��
//	signal(SIGINT, signalHandler);
//
//	while (1){//ʹ��ctrl+c���жϳ���Ȼ���Զ������signalHandler����
//		cout << "Going to sleep......" << endl;
//		Sleep(100);
//	}
//}