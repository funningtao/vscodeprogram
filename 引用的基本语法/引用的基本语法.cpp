#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;


//引用必须初始化 int &a;
//引用初始化以后不可以修改
void test1()
{
	int a = 10;
	int& b = a;
	b = 20;
	cout << "a= " << a << "b= " << b << endl;//起了别名a=20,b=20

}

//对数组的引用
void test2()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	//数组起别名
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
