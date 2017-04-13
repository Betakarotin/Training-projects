#include<iostream>
using namespace std;

class String
{
private:
	char *stroka;
public:
	String(int sz = 80)
	{
		stroka = new char[sz];
	}

	String(char *stro)
	{
		int sz=strlen(stro);
		stroka = new char[sz];
		strcpy_s(stroka, sz, stro);
	}
	String(String &obj)
	{

	}

	void set_string(char *str)
	{
		scanf_s("%s",stroka);
	}

	void get_string(char *str)
	{
		printf_s("%s", stroka);
	}

	~String()
	{
		delete[]stroka;
	}
};
