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
////����ģ��
//template <typename T> 
//inline T const& max(T const& a, T const& b){
//	return (a > b) ? a : b;
//}
//
////��ģ��
//template <class T>
//class Stack{
//private:
//	vector<T> elems;//Ԫ��
//
//public:
//	void push(T const&);//��ջ
//	void pop();//��ջ
//	T top() const;//����ջ��Ԫ��
//	bool empty() const{//���Ϊ�գ��򷵻���
//		return elems.empty();
//	}
//};
//
//template <class T>
//void Stack<T>::push(T const& elem){
//	//׷�Ӵ���Ԫ�صĸ���
//	elems.push_back(elem);
//}
//
//template <class T>
//void Stack<T>::pop(){
//	if (elems.empty()){
//		throw out_of_range("Stack<>::pop():empty stack");
//	}
//	//ɾ�����һ��Ԫ��
//	elems.pop_back();
//}
//
//
//template <class T>
//T Stack<T>::top() const{
//	if (elems.empty()){
//		throw out_of_range("Stack<>::top():empty stack");
//	}
//	//�������һ��Ԫ�صĸ���
//	return elems.back();
//}
//void main(){
//	//string s1 = "Hello";
//	//string s2 = "World";
//	////���ԣ������ַ�����������������
//	//cout << "max(30,20):" << max(30, 20) << endl;
//	//cout << "max(hello,world):" << max(s1, s2) << endl;
//	//cout << "max(1,5,1.2):" << max(1.5, 2.0) << endl;
//
//	try{
//		Stack<int> intStack;//int���͵�ջ
//		Stack<string> stringStack;//string���͵�ջ
//
//		//����int���͵�ջ
//		intStack.push(7);
//		cout << intStack.top() << endl;
//
//		//����string���͵�ջ
//		stringStack.push("hello");
//		cout << stringStack.top() << endl;
//		stringStack.pop();
//		stringStack.pop();
//	}
//	catch(exception const& ex){
//		cerr << "Exception: " << ex.what() << endl;
//	}
//}