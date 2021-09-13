#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;

int atk = 100;

void test1()
{
	int atk = 10;
	cout << "攻击力为" << atk << endl;
	cout << "全局攻击力为" << ::atk << endl;
}

int main()
{
	cout << "helloword" << endl;

	test1();

	system("pause");
	return EXIT_SUCCESS;
}
