//#include<iostream>
////�����׼��
//#include<fstream>
//using namespace std;
//
//void main(){
//
//	char data[100];
//
//	//��дģʽ���ļ�
//	ofstream os;
//	os.open("temp.dat",ios::out);
//
//	cout << "Writing to the file" << endl;
//	cout << "Enter your name: ";
//
//	//�ӿ���̨��ȡ�û�������
//	cin.getline(data, 100);
//
//	//���ļ���д���û����������
//	os<<data<<endl;
//
//	cout << "Enter your age: ";
//	//�û������뱣����data��
//	cin >> data;
//	//�������˵�����ĵ�һ���ַ�������һ������Ļس���
//	cin.ignore();
//
//	//�ٴ����ļ���д������
//	os << data << endl;
//
//	//�رմ򿪵��ļ�
//	os.close();
//
//	cout << "---------------------------------------------" << endl;
//
//	//�Զ�ģʽ���ļ�
//	ifstream is;
//	is.open("temp.dat", ios::in);
//
//	cout << "Reading from the file" << endl;
//
//	//��ȡ�ļ������ݣ�������data��
//	is >> data;
//
//	//�ڿ���̨�����ȡ��data�е�����
//	cout << data << endl;
//
//	//�ٴζ�ȡ�ļ������ݣ��ڿ���̨���
//	is >> data;
//	cout << data << endl;
//
//	//�رմ򿪵��ļ�
//	is.close();
//}