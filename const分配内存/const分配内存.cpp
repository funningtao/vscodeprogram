#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>
#include <string>
using namespace std;


//const分配内存  取地址会分配临时内存
//extern编译器也会给const分配内存
void test1()
{
	const int a = 10;//不会分配内存	
	int* p = (int *)&a;//会分配临时内存
}

//普通变量初始化 会分配内存
void test2()
{
	int a = 10;
	const int b = a;//会分配内存

	int* p = (int *)&b;
	*p = 1000;
	cout << "修改后的b =    " << b << endl;
}

struct person
{
	int age;
	string name;
};

void test3()
{
	//写了const，但是可以通过指针绕过const检测，进行修改
	const person p1;
	person* p = (person*)&p1;
	p->name = "funningtao";
	(*p).age = 18;

	cout << "name:    " << p1.name << "age:    " << p1.age << endl;
}
	


int main()
{
	cout << "helloword" << endl;


	test2();
	test3();
	system("pause");
	return EXIT_SUCCESS;
}
