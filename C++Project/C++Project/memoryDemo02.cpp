//#include<iostream>
//using namespace std;
//
////����Ķ�̬�ڴ����
//
//void main(){
//	//һά����
//	char* cptr = NULL;//��ʼ��ΪNULL��ָ��
//	cptr = new char[20];//��̬�ķ����ڴ�
//
//	delete cptr;//�ͷ��ڴ�
//
//	//��ά����
//	//int** arr = new int*[m];
//	//delete[] arr
//
//	int **ptr;
//	int i, j;//p[4][8]
//
//	//Ϊ4��8�е���������ڴ�ռ�
//	ptr = new int*[4];
//	for (i = 0; i < 4;i++){
//		ptr[i] = new int[8];
//	}
//
//	//��ӡ����
//	for (int i = 0; i < 4; i++){
//		for (int j = 0; j < 8; j++){
//			ptr[i][j] = j * i;
//			cout << ptr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//	//��ʼ�ͷ�������ڴ�
//	for (i = 0; i < 4;i++){
//		delete[] ptr[i];
//	}
//	delete[] ptr;
//}