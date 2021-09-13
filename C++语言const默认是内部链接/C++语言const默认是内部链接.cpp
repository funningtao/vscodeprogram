#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>

using namespace std;

int main()
{
	cout << "helloword" << endl;
	extern const int a;
	cout << "const a =    " << a << endl;

	system("pause");
	return EXIT_SUCCESS;
}
