//#include<iostream>
//using namespace std;
//
////�����쳣�ı�׼��
//#include<exception>
//
////�Զ����쳣
//
//struct MyException:public exception{
//	//�̳�exception�࣬����const char * what() const throw()�������Զ����쳣
//	const char * what() const throw(){//����what()�����������쳣������ԭ��
//		return "My define C++ Exception";
//	}
//};
//
//void main(){
//	try{
//		//�׳��쳣
//		throw MyException();
//	}
//	catch(MyException e){//�����쳣
//		cout << "MyException caught " << endl;
//		cout<<e.what()<<endl;
//	}
//	catch(exception e){
//		//�����Ĵ���
//		cout<<e.what()<<endl;
//	}
//}