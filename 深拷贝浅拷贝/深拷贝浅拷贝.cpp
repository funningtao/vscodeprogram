#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;


class MyClass
{
public:
	MyClass()
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	MyClass(const char* name,int a)
	{
		cout << "���ι��캯��" << endl;
		m_name = (char*)malloc(sizeof(name) + 1);
		strcpy(m_name, name);
		age = a;
	}
	MyClass(const MyClass& a)
	{

		age = a.age;
		m_name = (char*)malloc(sizeof(a.m_name) + 1);
		strcpy(m_name, a.m_name);
		cout << "�������캯��" << endl;
	}
	~MyClass()
	{
		cout << "��������" << endl;
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
	MyClass c3("Сǿ",10);
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
