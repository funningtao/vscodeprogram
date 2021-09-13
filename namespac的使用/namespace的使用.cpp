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

//无名命名空间相当于static int sss = 10;    static int bbb = 100;
//只能在当前文件夹下面使用
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
	cout << "a作用域下b作用域的aaa==  " << a::b::aaa << endl;

	system("pause");
	return EXIT_SUCCESS;
}
