//#include<iostream>
//#include<ctime>
//#include<cstdlib>
//#include<iomanip>
//using namespace std;
//
//using std::setw;
//
//void main(){
//	//int i,j;
//	////1.��������
//	//srand((unsigned)time(NULL));
//	////2.���������
//	//for (i = 0; i < 5; i++){
//	//	j = rand();
//	//	cout << "�����:" << j << endl;
//	//}
//
//	//////����
//	////int arr[5] = { 1, 2, 3, 4, 5 };
//	////int length = sizeof(arr) / sizeof(int);
//	//////setw()����������ʽ�����
//	////cout << "Element" << setw(13) << "Value";
//	////for (int i = 0; i < length; i++)
//	////{
//	////	cout << i <<setw(13)<< arr[i]<<endl;
//	////}
//
//	////ָ��
//	//int var = 20;
//	//int *p;
//	//p = &var;
//
//	//cout << "var=" << var << endl;//20
//	//cout << "p=" << p << endl;//0x__
//	//cout << "*p=" << *p << endl;//29
//
//	////���ñ���(&)����һ������������һ���Ѿ����ڱ���������һ������
//	////����򵥵ı���
//	//int i;
//	//double d;
//
//	////�������ñ���
//	//int& r = i;//r��ʼ��Ϊi����������
//	//double& s = d;
//
//	////��ȡ���ں�ʱ��
//	//time_t now = time(0);//��ȡϵͳ�ĵ�ǰ����ʱ��
//	////����һ����ǰʱ����ַ���ָ��
//	//char* date = ctime(&now);
//	//cout << "��ǰ��ϵͳʱ��Ϊ:" << date<<endl;
//	////����һ��ָ��time��ָ�룬timeΪtm�ṹ������Э������ʱ��
//	//tm* gmtm = gmtime(&now);
//	//date = asctime(gmtm);
//	//cout << "��ǰ��Э������ʱΪ:" << date << endl;
//	
//	//time_t now = time(0);
//	//tm* ltm = localtime(&now);
//	//cout << ltm->tm_year << ltm->tm_mon << ltm->tm_mday << endl;
//	//cout << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << endl;
//
//	//I/O��
//	//��׼���������cin,cout
//	char name[50];
//	cout << "��������������:";
//	//>>����ȡ������������л�ȡ�����ֵ���ٴ洢��ָ���ı�����
//	cin >> name;
//	cout << "�����������Ϊ:"<<name<<endl;
//	//��׼���������cerr���ǻ���ģ���ÿ�������뵽cerr�����������
//	char errMessage[] = "Unable to read...";
//	cerr << "Error Message:" << errMessage << endl;
//	//��׼��־�����clog��������ģ�������������ˢ�»�����
//	clog << "Error Message:" << errMessage << endl;
//	//ʹ��ָ��ýṹ��ָ����ʽṹ�ĳ�Ա��Ҫʹ��->�����
//
//}