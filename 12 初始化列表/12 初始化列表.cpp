#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;

class person
{
public:
	//person() {}
	//person(int a,int b,int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}
	//初始化参数列表
	person(int a,int b, int c) :m_a(a), m_b(b), m_c(c){}
	person() :m_a(40), m_b(50), m_c(60) {}
	int m_a;
	int m_b;
	int m_c;
};

void test1()
{
	person p1(10, 20, 30);
	cout << "a= " << p1.m_a << "b= " << p1.m_b << "c= " << p1.m_c << endl;

	person p2;
	cout << "a= " << p2.m_a << "b= " << p2.m_b << "c= " << p2.m_c << endl;
}


int main()
{
	cout << "helloword" << endl;

	test1();

	system("pause");
	return EXIT_SUCCESS;
}
