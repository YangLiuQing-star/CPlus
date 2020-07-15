//#include<iostream>
////using namespace std;，范围仅限当前文件
////命名空间还可以嵌套，外层的命名空间可以访问内层的命名空间中的元素
//
////using指令
//namespace first_space{
//	void func(){
//		std::cout << "Inside first_space" << std::endl;
//	}
//}
//
//namespace second_space{
//	void func(){
//		std::cout << "Inside second_space" << std::endl;
//	}
//}
//
////引入first_space命名空间，可以直接调用命名空间中的方法
//using namespace first_space;
//void main(){
//	//调用不同命名空间的同名函数
//	//first_space::func();
//
//	//second_space::func();
//
//	//直接调用，不需要命名空间的名字
//	func();
//
//	
//}