//#include<iostream>
//using namespace std;
//
////����
//class Shape{
//protected:
//	int width;
//	int height;
//
//public:
//	Shape(int a = 0,int b = 0){
//		width = a;
//		height = b;
//	}
//
//	void setWidth(int w){
//		width = w;
//	}
//
//	void setHeight(int h){
//		height = h;
//	}
//
//	//�����ú������麯������̬�󶨣����ݴ����������ѡ����õĺ���
//	//virtual int area(){
//	//	cout << "Parent class area : " << endl;
//	//	return 0;
//	//}
//
//	//���麯����=0���߱�����������û�����壬��������ʵ��
//	virtual int area() = 0;
//};
//
//
////����
//class Rectangle : public Shape{//���м̳У������̳У�˽�м̳У����ؼ̳�
//public:
//	Rectangle(int a = 0,int b = 0):Shape(a,b) {}
//	int area(){
//		cout << "Rectangle class area : " << endl;
//		return width * height;
//	}
//};
//
////����
//class Triangle :public Shape{
//public:
//	Triangle(int a = 0, int b = 0) :Shape(a, b) {}
//	int area(){
//		cout << "Triangle class area : " << endl;
//		return width * height/2;
//	}
//};
//
////��̬��̬����󶨣��ڱ����ڼ䱻����������Ϊ�����еİ汾
//void main(){
//	Shape *shape;
//	Rectangle rec(10,7);
//	Triangle tri(10,5);
//
//	//�洢���εĵ�ַ
//	shape = &rec;
//	shape->area();
//
//	//�洢�����εĵ�ַ
//	shape = &tri;
//	//����������������ĺ���
//	shape->area();
//}