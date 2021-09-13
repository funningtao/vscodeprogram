#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;

void test1(int a,int b){}

void test2(int *a,int *b){}

void test3(int &a,int &b){}

void test()
{
	int bbb = 1;
	int ccc = 2;
	test1(bbb, ccc);//值传递，数据不改变
	test2(&bbb, &ccc);
	test3(bbb, ccc);
}




int main()
{
	cout << "helloword" << endl;
	system("pause");
	return EXIT_SUCCESS;
}
