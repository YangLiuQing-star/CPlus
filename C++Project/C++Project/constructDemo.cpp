//#include<iostream>
//using namespace std;
//
//class Line{
//public:
//	void setLength(double len);
//	double getLength();
//	//���캯���Ķ���
//	Line();
//	Line(double len);
//
//	//������������������ÿ��ɾ���������Ķ���ʱִ�У���������������ǰ���ͷ��ڴ棩�ͷ���Դ
//	//��������������ǰ����һ��~���������κη���ֵ�Ͳ���
//	~Line();
//
//	//���忽�����캯��
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
////��Ա�����͹��캯���Ķ���
//
////�޲εĹ��캯��
//Line::Line(){
//	cout << "Object is being created " << endl;
//}
//
////�������Ĺ��캯��
//Line::Line(double len){
//	cout << "�����вεĹ��캯��" << endl;
//	//Ϊָ������ڴ�
//	ptr = new double;
//	*ptr = len;
//}
//
//
//
//Line::~Line(){
//	cout << "Object is being deleted ���ڴ����ͷ�..." << endl;
//	delete ptr;
//}
//
//Line::Line(const Line &obj){
//	cout << "���ÿ������캯����Ϊָ��ptr�����ڴ�" << endl;
//	ptr = new double;
//	*ptr = *obj.ptr;//����ֵ
//}
//
//void display(Line obj){
//	cout << "Line ��С : " << obj.getLength() << endl;
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
//	//ʹ�ó�ʼ���б�����ʼ���ֶ�
//private:
//	int x;
//	int y;
//
//public:
//	Point(int x, int y);
//	int mul();
//};
//
////ʹ�ó�ʼ���б�����ʼ���ֶ�
//Point::Point(int a, int b) :x(a), y(b){//�ȼ��� x = a  , y = b
//	cout << "Object is being created,length = <" << a << "," << b << ">";
//}
//int Point::mul(){
//	return x * y;
//}
//
//
////�����������
//void main(){
//	//Line line;
//
//	////���ó���
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
//	//ʹ�����е�ͬ���͵Ķ�������ʼ���´����Ķ���
//	Line line2 = line;//����Ҳ�����˿������캯��
//	cout<< "-------------------------" << endl;
//	display(line2);
//}