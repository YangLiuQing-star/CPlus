//#include<iostream>
//#include<vector>
//#include<string>
//#include<cstdlib>
//#include<string>
//#include<stdexcept>
//
//
//using namespace std;
//
////函数模板
//template <typename T> 
//inline T const& max(T const& a, T const& b){
//	return (a > b) ? a : b;
//}
//
////类模板
//template <class T>
//class Stack{
//private:
//	vector<T> elems;//元素
//
//public:
//	void push(T const&);//入栈
//	void pop();//出栈
//	T top() const;//返回栈顶元素
//	bool empty() const{//如果为空，则返回真
//		return elems.empty();
//	}
//};
//
//template <class T>
//void Stack<T>::push(T const& elem){
//	//追加传入元素的副本
//	elems.push_back(elem);
//}
//
//template <class T>
//void Stack<T>::pop(){
//	if (elems.empty()){
//		throw out_of_range("Stack<>::pop():empty stack");
//	}
//	//删除最后一个元素
//	elems.pop_back();
//}
//
//
//template <class T>
//T Stack<T>::top() const{
//	if (elems.empty()){
//		throw out_of_range("Stack<>::top():empty stack");
//	}
//	//返回最后一个元素的副本
//	return elems.back();
//}
//void main(){
//	//string s1 = "Hello";
//	//string s2 = "World";
//	////测试，传入字符串，整数，浮点数
//	//cout << "max(30,20):" << max(30, 20) << endl;
//	//cout << "max(hello,world):" << max(s1, s2) << endl;
//	//cout << "max(1,5,1.2):" << max(1.5, 2.0) << endl;
//
//	try{
//		Stack<int> intStack;//int类型的栈
//		Stack<string> stringStack;//string类型的栈
//
//		//操作int类型的栈
//		intStack.push(7);
//		cout << intStack.top() << endl;
//
//		//操作string类型的栈
//		stringStack.push("hello");
//		cout << stringStack.top() << endl;
//		stringStack.pop();
//		stringStack.pop();
//	}
//	catch(exception const& ex){
//		cerr << "Exception: " << ex.what() << endl;
//	}
//}