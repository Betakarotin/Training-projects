#include<iostream>
using namespace std;

class String
{
private:
	char *stroka;
	char simvol;
public:
	String(int sz = 80)
	{
		stroka = new char[sz];
	}

	String(char *stro)
	{
		int sz = strlen(stro);
		stroka = new char[sz + 1];
		strcpy_s(stroka, sz + 1, stro);
	}
	String(String &obj)
	{

	}

	void set_string()
	{
		scanf_s("%s", stroka);
	}

	void get_string()
	{
		printf_s("%s\n", stroka);
	}

	void get_sim()
	{
		cout << (int)simvol << endl;
		//printf_s("%c", simvol);
	}

	~String()
	{
		/*delete[] stroka;*/
	}
	char *add_sim(char *str, char sim)
	{

		int res = strlen(str) + 1;
		char *stro = new char[res + 1];
		strcpy_s(stro, res + 1, str);
		stro[res - 1] = sim;
		stro[res] = 0;

		return stro;
	}

	String operator*(String &str)
	{
		String res;
		//res.stroka = stroka*str;
		int res1, res2;

		char *resstr = new char[2];
		resstr[0] = 0;
		res1 = strlen(stroka);
		res2 = strlen(str.stroka);
		for (int q = 0; q < res2; q++)
		{
			for (int i = 0; i < res1; i++)
			{
				if (stroka[i] == str.stroka[q])
				{
					resstr = add_sim(resstr, stroka[i]);

				}

			}
		}
		resstr = add_sim(resstr, 0);
		return resstr;
	}





	char operator[](int i)
	{
		//String tmp;
		//tmp.simvol = stroka[i];
		simvol = stroka[i];
		return simvol;
	}

	int operator()(char sim)
	{
		int sz = strlen(stroka);
		for (int i = 0; i < sz; i++)
			if (stroka[i] == sim)
				return i;
		return -1;
	}
};

	void main()
	{
		/*String A("sdqcg");
		String B("rgfas34");
		String C;
		C = A*B;
		C.get_string();*/
		String In("Privet");
		String Q;
		/*char temp;
		temp = In[1];
		cout << temp;*/
		int temp1;
		temp1 = In('v');
		cout << temp1;



		/*Q.get_string();
		Q.get_sim();*/
	}
