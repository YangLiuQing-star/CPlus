//#include<iostream>
//using namespace std;
//
//
////ָ�����ָ�룬��Ҫʹ�ó�Ա��������������ʳ�Ա
//class Box{
//public:
//	//���캯��
//	Box(double a = 2.0, double b = 2.0, double h = 2.0){
//		cout << "���캯��������..." << endl;
//		this->a = a;
//		this->b = b;
//		this->h = h;
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
//
////������
//void main(){
//	Box box1(3.3, 1.2, 1.5);
//	Box box2(8.5, 6.0, 2.0);
//
//	//����һ��ָ��Box���ָ��
//	Box *bptr;
//	bptr = &box1;
//	cout << "Vbox1 = " << bptr->Volume() << endl;
//
//	bptr = &box2;
//	cout << "Vbox2 = " << bptr->Volume() << endl;
//}