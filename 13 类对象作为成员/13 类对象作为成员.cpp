#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>
#include <string>
using namespace std;

class game
{
public:
	game(string name) :m_gamename(name)
	{
		cout << "game�вι��캯������" << endl;
	}
	~game()
	{
		cout << "game��������" << endl;
	}
	string m_gamename;

private:

};

class phone
{
public:
	phone(string name) :m_phonename(name)
	{
		cout << "phone�вι��캯��" << endl;
	}
	~phone()
	{
		cout << "phone��������" << endl;
	}
	string m_phonename;

private:

};

class person
{
public:
	person(string person, string phone, string game) :m_name(person), m_phone(phone), m_game(game)
	{
		cout << "person�вι��캯��" << endl;
	}
	~person()
	{
		cout << "person��������" << endl;
	}

	void playgame()
	{
		cout << m_name << "��" << m_phone.m_phonename << "��" << m_game.m_gamename << endl;
	}
	string m_name;
	phone m_phone;
	game m_game;
private:

};



void test1()
{
	person p1("����", "��Ϊ", "�����ͻ");
	p1.playgame();
}



int main()
{
	cout << "helloword" << endl;

	test1();

	system("pause");
	return EXIT_SUCCESS;
}
