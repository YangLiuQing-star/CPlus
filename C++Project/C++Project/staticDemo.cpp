//#include<iostream>
//using namespace std;
//
//
////��̬��Ա������������ڲ������������ڴ�����һ������ʱ�����еľ�̬���ݶ����ʼ��Ϊ��
////��������ⲿ����ʹ�÷�Χ���������::������������̬�����Ӷ��������г�ʼ��
//class Box{
//public:
//	//������̬����
//	static int objectCount;
//
//	//���캯��
//	Box(double a = 2.0, double b = 2.0, double h = 2.0){
//		cout << "���캯��������..." << endl;
//		this->a = a;
//		this->b = b;
//		this->h = h;
//		objectCount++;
//	}
//
//	//�������
//	double Volume(){
//		return a * b * h;
//	}
//
//private:
//	double a;
//	double b;
//	double h;
//};
//
//int Box::objectCount = 0;
//
//
////������
//void main(){
//	Box box1(3.3, 1.2, 1.5);
//	Box box2(8.5, 6.0, 2.0);
//
//	//ͨ���������ʾ�̬����
//	cout << "Total objects: "<<Box::objectCount << endl;
//}