//#include<iostream>
//using namespace std;
//
////�����࣬����ʵ������������麯��������������ȥʵ�֣���������Ҫ��ʵ����ʱ������ʵ��ÿһ���麯��
//
////����
//class Shape{
//protected:
//	int width;
//	int height;
//
//public:
//	void setWidth(int w){
//		width = w;
//	}
//
//	void setHeight(int h){
//		height = h;
//	}
//
//	//���麯����=0���߱�����������û�����壬��������ʵ��
//	virtual int getArea() = 0;
//};
//
//
////����
//class Rectangle : public Shape{//���м̳У������̳У�˽�м̳У����ؼ̳�
//public:
//	int getArea(){
//		cout << "Rectangle class area : " << endl;
//		return width * height;
//	}
//};
//
////����
//class Triangle :public Shape{
//public:
//	int getArea(){
//		cout << "Triangle class area : " << endl;
//		return width * height / 2;
//	}
//};
//
////��̬��̬����󶨣��ڱ����ڼ䱻����������Ϊ�����еİ汾
//void main(){
//	int v = 0;
//	Rectangle rec;
//	rec.setWidth(5);
//	rec.setHeight(7);
//	v = rec.getArea();
//	cout << "Rectangle area is " << v << endl;
//	Triangle tri;
//	tri.setWidth(4);
//	tri.setHeight(6);
//	v = tri.getArea();
//	cout << "Triangle area is " << v << endl;
//
//	
//}