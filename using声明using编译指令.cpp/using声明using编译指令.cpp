#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;


namespace WZRY
{
	int atk = 10000;
}

void test1()
{
	int atk = 100;

	using namespace WZRY;
	cout << "m_atk =     " << WZRY::atk << endl;
}

int main()
{
	cout << "helloword" << endl;

	test1();


	system("pause");
	return EXIT_SUCCESS;
}
