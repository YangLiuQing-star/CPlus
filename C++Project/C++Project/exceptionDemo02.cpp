//#include<iostream>
//using namespace std;
//
////引入异常的标准库
//#include<exception>
//
////自定义异常
//
//struct MyException:public exception{
//	//继承exception类，重载const char * what() const throw()方法来自定义异常
//	const char * what() const throw(){//重载what()方法，返回异常产生的原因
//		return "My define C++ Exception";
//	}
//};
//
//void main(){
//	try{
//		//抛出异常
//		throw MyException();
//	}
//	catch(MyException e){//捕获异常
//		cout << "MyException caught " << endl;
//		cout<<e.what()<<endl;
//	}
//	catch(exception e){
//		//其他的错误
//		cout<<e.what()<<endl;
//	}
//}