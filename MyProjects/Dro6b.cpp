#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

class Dro6b
{
private:
	int chis, znam, celoe;
public:
	Dro6b(int ch = 0, int zn = 0,int cel=0)
	{
		chis = ch, znam = zn,celoe=cel;
	}

	void zap(int ch, int zn,int cel)
	{
		chis = ch, znam = zn,celoe=cel;
	}

	void plus(int chv, int znv)
	{
		int o6znam = 0;
		int znamcop = 0;
		if (znam > znv)
		{
			znamcop = znam;
		}
		else
			znamcop = znv;
		
		int step1=0, step2=0;
		int reschis = 0, resznam = 0;
		for (int i = 0; i < 100; i++)
		{
			if (znam > znv)
			{
				
				if (znam%znv == 0)
				{
					o6znam = znam;
					break;
				}
				else

					znam = znam + znamcop;
			}
				
			
			else
				if(znv>znam)

			{
				
				if (znv%znam == 0)
				{
					o6znam = znv;
					break;
				}

				else

					znv = znv + znamcop;
			}

		}
		step1 = o6znam / znamcop;
		step2 = o6znam / znv;

		chis = chis*step1;
		chv = chv*step2;
	
		znam = o6znam;
		chis = chis+chv;

		
	}

	void minus(int chv, int znv)
	{
		
		int o6znam = 0;
		int znamcop = 0;
		if (znam > znv)
		{
			znamcop = znam;
		}
		else
			znamcop = znv;

		int step1=0, step2=0;
		
		for (int i = 0; i < 100; i++)
		{
			if (znam > znv)
			{

				if (znam%znv == 0)
				{
					o6znam = znam;
					break;
				}
				else

					znam = znam + znamcop;
			}


			else
				if (znv>znam)

				{

					if (znv%znam == 0)
					{
						o6znam = znv;
						break;
					}

					else

						znv = znv + znamcop;
				}

		}
		step1 = o6znam / znamcop;
		step2 = o6znam / znv;

		chis = chis*step1;
		chv = chv*step2;

		znam = o6znam;
		chis = chis - chv;

		
	}
		
	void mult(int chv, int znv)
	{
		

		chis = chis*chv;
		znam = znam*znv;

		
	}
	
	void div(int chv, int znv)
	{
		

		chis = chis*znv;
		znam = znam*chv;

		
	}

	void get_dro6b()
	{
		if (znam < chis)
		{
			celoe = chis / znam;
			chis = chis%znam;
		}

		int reschisX = chis;					//Сокращение дроби
		for (int i = 0; i < reschisX; reschisX--)
		{
			if (chis%reschisX == 0 && znam%reschisX == 0)
			{
				chis = chis / reschisX;
				znam = znam / reschisX;
			}

		}

		if (celoe>0)
			printf_s("   %d\n%d --\n   %d\n", chis, celoe, znam);
		else
			printf_s("%d\n--\n%d\n", chis, znam);

		
	}

	Dro6b operator++()
	{
		return celoe++;
		
	}
};

void main()
{
	Dro6b e(5, 7);
	
	e++;
	e.get_dro6b();
	
}
