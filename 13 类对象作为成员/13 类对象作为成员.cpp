#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>
#include <string>
using namespace std;

class game
{
public:
	game(string name) :m_gamename(name)
	{
		cout << "game有参构造函数函数" << endl;
	}
	~game()
	{
		cout << "game析构函数" << endl;
	}
	string m_gamename;

private:

};

class phone
{
public:
	phone(string name) :m_phonename(name)
	{
		cout << "phone有参构造函数" << endl;
	}
	~phone()
	{
		cout << "phone析构函数" << endl;
	}
	string m_phonename;

private:

};

class person
{
public:
	person(string person, string phone, string game) :m_name(person), m_phone(phone), m_game(game)
	{
		cout << "person有参构造函数" << endl;
	}
	~person()
	{
		cout << "person析构函数" << endl;
	}

	void playgame()
	{
		cout << m_name << "用" << m_phone.m_phonename << "玩" << m_game.m_gamename << endl;
	}
	string m_name;
	phone m_phone;
	game m_game;
private:

};



void test1()
{
	person p1("张三", "华为", "部落冲突");
	p1.playgame();
}



int main()
{
	cout << "helloword" << endl;

	test1();

	system("pause");
	return EXIT_SUCCESS;
}
