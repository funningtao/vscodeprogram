#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>
#include <string>

using namespace std;

class Printer
{
private:
	Printer() {};
	Printer(const Printer& p);
public:
	static Printer* getIntance()
	{
		return printer;
	}
	void printtext(string text)
	{
		cout << text << endl;
	}
private:
	static Printer* printer;
};

Printer* Printer::printer = new Printer;

void test()
{
	Printer* printer = Printer::getIntance();
	printer->printtext("Êä³ö");
}

int main()
{
	cout << "helloword" << endl;
	test();
	system("pause");
	return EXIT_SUCCESS;
}
