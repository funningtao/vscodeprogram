#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>
#include <string>
using namespace std;


//const�����ڴ�  ȡ��ַ�������ʱ�ڴ�
//extern������Ҳ���const�����ڴ�
void test1()
{
	const int a = 10;//��������ڴ�	
	int* p = (int *)&a;//�������ʱ�ڴ�
}

//��ͨ������ʼ�� ������ڴ�
void test2()
{
	int a = 10;
	const int b = a;//������ڴ�

	int* p = (int *)&b;
	*p = 1000;
	cout << "�޸ĺ��b =    " << b << endl;
}

struct person
{
	int age;
	string name;
};

void test3()
{
	//д��const�����ǿ���ͨ��ָ���ƹ�const��⣬�����޸�
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
