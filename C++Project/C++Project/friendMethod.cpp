//#include<iostream>
//using namespace std;
//
////��Ԫ����
////���claasTwo �����г�Ա������Ϊ��ClassOne����Ԫ����Ҫ��classOne�Ķ����з�����������
////friend class ClassTwo;
//
//class Box{
//private:
//	double width;
//
//public:
//	friend void printWidth(Box box);
//	void setWidth(double w);
//};
//
////��Ա�����Ķ���
//void Box::setWidth(double w){
//	width = w;
//}
//
////�����κ���ĳ�Ա����
//void printWidth(Box box){
//	//��ΪprintWidth����Box����Ԫ������������ֱ�ӷ��ʸ�����κγ�Ա
//	cout << "Width of box : " << box.width << endl;
//}
//
////������
//void main(){
//	Box box;
//	box.setWidth(10.5);
//	printWidth(box);
//}