#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

#include "lol.h"
#include "wzry.h"


using namespace std;

namespace a
{
	namespace b
	{
		int aaa = 100;
	}
}

//���������ռ��൱��static int sss = 10;    static int bbb = 100;
//ֻ���ڵ�ǰ�ļ�������ʹ��
namespace
{
	int sss = 10;
	int bbb = 100;
}

void test1()
{
	LOL::goatk();
	WZRY::goatk();

}

int main()
{
	cout << "helloword" << endl;
	test1();
	cout << "a��������b�������aaa==  " << a::b::aaa << endl;

	system("pause");
	return EXIT_SUCCESS;
}
