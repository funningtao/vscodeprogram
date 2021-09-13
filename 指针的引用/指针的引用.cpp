#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;

struct person
{
	int age;
};

void mallacMemmorypp(person **p2)//**P具体对象 *p对象的指针 p指针的指针
{
	*p2 = (person*)malloc(sizeof(person));
	(*p2)->age = 90;
}

void test2()
{
	person* p = NULL;
	mallacMemmorypp(&p);
	cout << "p2:age =    " << p->age << endl;
}


//利用指针引用开辟空间 
void mallacMemmory(person * &p1)
{
	p1 = (person*)malloc(sizeof(person));
	p1->age = 100;
}

void test1()
{
	person* p = NULL;
	mallacMemmory(p);
	cout << "p1:age =    " << p->age << endl;

}


int main()
{
	cout << "helloword" << endl;

	test1();
	test2();

	system("pause");
	return EXIT_SUCCESS;
}