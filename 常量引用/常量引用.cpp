#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;


//修饰形参，不想要被改变
void test1(const int &a)
{
	cout << a << endl;

}

void test2()
{
	int b = 10;
	test1(b);
}

int main()
{
	cout << "helloword" << endl;

	test2();

	system("pause");
	return EXIT_SUCCESS;
}
