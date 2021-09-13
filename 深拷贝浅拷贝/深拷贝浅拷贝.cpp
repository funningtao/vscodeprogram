#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;


class MyClass
{
public:
	MyClass()
	{
		cout << "默认构造函数" << endl;
	}
	MyClass(const char* name,int a)
	{
		cout << "带参构造函数" << endl;
		m_name = (char*)malloc(sizeof(name) + 1);
		strcpy(m_name, name);
		age = a;
	}
	MyClass(const MyClass& a)
	{

		age = a.age;
		m_name = (char*)malloc(sizeof(a.m_name) + 1);
		strcpy(m_name, a.m_name);
		cout << "拷贝构造函数" << endl;
	}
	~MyClass()
	{
		cout << "析构函数" << endl;
		if (m_name != NULL)
		{
			free(m_name);
			m_name = NULL;
		}
	}
private:
	char* m_name;
	int age;
};

//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//}
void test1()
{
	//MyClass c1;
	MyClass c3("小强",10);
	MyClass c4(c3);
	//cout << "name = " << "c4.getname()" << endl;
}

void test2()
{
	MyClass c1;
	MyClass c2(c1);
}

int main()
{
	cout << "helloword" << endl;

	test1();
	//test2();

	system("pause");
	return EXIT_SUCCESS;
}
