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
//	////1.设置种子
//	//srand((unsigned)time(NULL));
//	////2.产生随机数
//	//for (i = 0; i < 5; i++){
//	//	j = rand();
//	//	cout << "随机数:" << j << endl;
//	//}
//
//	//////数组
//	////int arr[5] = { 1, 2, 3, 4, 5 };
//	////int length = sizeof(arr) / sizeof(int);
//	//////setw()函数用来格式化输出
//	////cout << "Element" << setw(13) << "Value";
//	////for (int i = 0; i < length; i++)
//	////{
//	////	cout << i <<setw(13)<< arr[i]<<endl;
//	////}
//
//	////指针
//	//int var = 20;
//	//int *p;
//	//p = &var;
//
//	//cout << "var=" << var << endl;//20
//	//cout << "p=" << p << endl;//0x__
//	//cout << "*p=" << *p << endl;//29
//
//	////引用变量(&)就是一个别名，它是一个已经存在变量的另外一个名字
//	////定义简单的变量
//	//int i;
//	//double d;
//
//	////定义引用变量
//	//int& r = i;//r初始化为i的整型引用
//	//double& s = d;
//
//	////获取日期和时间
//	//time_t now = time(0);//获取系统的当前日历时间
//	////返回一个当前时间的字符串指针
//	//char* date = ctime(&now);
//	//cout << "当前的系统时间为:" << date<<endl;
//	////返回一个指向time的指针，time为tm结构，用于协调世界时间
//	//tm* gmtm = gmtime(&now);
//	//date = asctime(gmtm);
//	//cout << "当前的协调世界时为:" << date << endl;
//	
//	//time_t now = time(0);
//	//tm* ltm = localtime(&now);
//	//cout << ltm->tm_year << ltm->tm_mon << ltm->tm_mday << endl;
//	//cout << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << endl;
//
//	//I/O流
//	//标准输入输出流cin,cout
//	char name[50];
//	cout << "请输入您的姓名:";
//	//>>流提取运算符，从流中获取输入的值，再存储到指定的变量中
//	cin >> name;
//	cout << "您输入的姓名为:"<<name<<endl;
//	//标准错误输出流cerr，非缓冲的，且每个流插入到cerr都会立即输出
//	char errMessage[] = "Unable to read...";
//	cerr << "Error Message:" << errMessage << endl;
//	//标准日志输出流clog，带缓冲的，缓冲区满或者刷新缓冲区
//	clog << "Error Message:" << errMessage << endl;
//	//使用指向该结构的指针访问结构的成员需要使用->运算符
//
//}