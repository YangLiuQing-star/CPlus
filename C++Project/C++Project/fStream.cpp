//#include<iostream>
////引入标准库
//#include<fstream>
//using namespace std;
//
//void main(){
//
//	char data[100];
//
//	//以写模式打开文件
//	ofstream os;
//	os.open("temp.dat",ios::out);
//
//	cout << "Writing to the file" << endl;
//	cout << "Enter your name: ";
//
//	//从控制台读取用户的输入
//	cin.getline(data, 100);
//
//	//向文件中写入用户输入的数据
//	os<<data<<endl;
//
//	cout << "Enter your age: ";
//	//用户的输入保存在data中
//	cin >> data;
//	//用来过滤掉输入的第一个字符，即上一次输入的回车符
//	cin.ignore();
//
//	//再次往文件中写入数据
//	os << data << endl;
//
//	//关闭打开的文件
//	os.close();
//
//	cout << "---------------------------------------------" << endl;
//
//	//以读模式打开文件
//	ifstream is;
//	is.open("temp.dat", ios::in);
//
//	cout << "Reading from the file" << endl;
//
//	//读取文件的内容，保存在data中
//	is >> data;
//
//	//在控制台输入读取到data中的数据
//	cout << data << endl;
//
//	//再次读取文件的内容，在控制台输出
//	is >> data;
//	cout << data << endl;
//
//	//关闭打开的文件
//	is.close();
//}