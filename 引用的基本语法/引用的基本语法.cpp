#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;


//���ñ����ʼ�� int &a;
//���ó�ʼ���Ժ󲻿����޸�
void test1()
{
	int a = 10;
	int& b = a;
	b = 20;
	cout << "a= " << a << "b= " << b << endl;//���˱���a=20,b=20

}

//�����������
void test2()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	//���������
	int(&parr)[10] = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << parr[i] << " ";
	}
	cout << endl;
}

int main()
{
	cout << "helloword" << endl;
	test1();
	test2();

	system("pause");
	return EXIT_SUCCESS;
}
