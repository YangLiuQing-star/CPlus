//#include<iostream>
//using namespace std;
//
////数组的动态内存分配
//
//void main(){
//	//一维数组
//	char* cptr = NULL;//初始化为NULL的指针
//	cptr = new char[20];//动态的分配内存
//
//	delete cptr;//释放内存
//
//	//多维数组
//	//int** arr = new int*[m];
//	//delete[] arr
//
//	int **ptr;
//	int i, j;//p[4][8]
//
//	//为4行8列的数组分配内存空间
//	ptr = new int*[4];
//	for (i = 0; i < 4;i++){
//		ptr[i] = new int[8];
//	}
//
//	//打印数据
//	for (int i = 0; i < 4; i++){
//		for (int j = 0; j < 8; j++){
//			ptr[i][j] = j * i;
//			cout << ptr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//	//开始释放申请的内存
//	for (i = 0; i < 4;i++){
//		delete[] ptr[i];
//	}
//	delete[] ptr;
//}