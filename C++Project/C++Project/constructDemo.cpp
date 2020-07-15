//#include<iostream>
//using namespace std;
//
//class Line{
//public:
//	void setLength(double len);
//	double getLength();
//	//构造函数的定义
//	Line();
//	Line(double len);
//
//	//析构函数的声明，在每次删除所创建的对象时执行，常用于跳出程序前（释放内存）释放资源
//	//析构函数在类名前加了一个~，不能有任何返回值和参数
//	~Line();
//
//	//定义拷贝构造函数
//	Line(const Line &obj);
//
//private:
//	double length;
//	double *ptr;
//};
//
//
//
//
////成员函数和构造函数的定义
//
////无参的构造函数
//Line::Line(){
//	cout << "Object is being created " << endl;
//}
//
////带参数的构造函数
//Line::Line(double len){
//	cout << "调用有参的构造函数" << endl;
//	//为指针分配内存
//	ptr = new double;
//	*ptr = len;
//}
//
//
//
//Line::~Line(){
//	cout << "Object is being deleted ，内存已释放..." << endl;
//	delete ptr;
//}
//
//Line::Line(const Line &obj){
//	cout << "调用拷贝构造函数并为指针ptr分配内存" << endl;
//	ptr = new double;
//	*ptr = *obj.ptr;//拷贝值
//}
//
//void display(Line obj){
//	cout << "Line 大小 : " << obj.getLength() << endl;
//}
//
//void Line::setLength(double len){
//	length = len;
//}
//
//
//double Line::getLength(){
//	return *ptr;
//}
//
//class Point{
//	//使用初始化列表来初始化字段
//private:
//	int x;
//	int y;
//
//public:
//	Point(int x, int y);
//	int mul();
//};
//
////使用初始化列表来初始化字段
//Point::Point(int a, int b) :x(a), y(b){//等价于 x = a  , y = b
//	cout << "Object is being created,length = <" << a << "," << b << ">";
//}
//int Point::mul(){
//	return x * y;
//}
//
//
////程序的主函数
//void main(){
//	//Line line;
//
//	////设置长度
//	//line.setLength(9.5);
//
//	//double result = line.getLength();
//	//cout << "Length of line is " << result << endl;
//
//	//Line line(10.5);
//	//cout << "Length of line is " << line.getLength() << endl;
//
//	Line line(10.5);
//	display(line);
//
//	//使用已有的同类型的对象来初始化新创建的对象
//	Line line2 = line;//这里也调用了拷贝构造函数
//	cout<< "-------------------------" << endl;
//	display(line2);
//}