#define _CRT_SECURE_NO_WARNINGS  

#include "hade.h"


void test1()
{
	cout << "unsigned long int __uint64_t = " << sizeof(__uint64_t) << endl;
	cout << "unsigned long int m_uint64_t = " << sizeof(m_uint64_t) << endl;
	cout << "unsigned long int Li_uint64_t = " << sizeof(unsigned long int) << endl;

	cout << "unsigned long int LL__uint64_t = " << sizeof(LL__uint64_t) << endl;
}

void test2()
{
	int a;
	a = 0xff & ~(1 << 1);
	cout << a << endl;
}

int main()
{
	cout << "helloword" << endl;

	//test1();
	test2();


	system("pause");
	return EXIT_SUCCESS;
}
