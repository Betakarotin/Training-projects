#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

class Dro6b
{
private:
	int chis, znam;
public:
	Dro6b(int ch = 0, int zn = 0)
	{
		chis = ch, znam = zn;
	}

	void zap(int ch, int zn)
	{
		chis = ch, znam = zn;
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
		int reschis=0, resznam=0, resceloe=0;
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
	
		resznam = o6znam;
		reschis = chis+chv;

		if (resznam < reschis)
		{
			resceloe = reschis / resznam;
			reschis = reschis%resznam;
		}

		int reschisX = reschis;					//Сокращение дроби
		for (int i = 0; i < reschisX; reschisX--)
		{
			if (reschis%reschisX == 0 && resznam%reschisX == 0)
			{
				reschis = reschis / reschisX;
				resznam = resznam / reschisX;
			}

		}

		if(resceloe>0)
			printf_s("   %d\n%d --\n   %d\n",reschis,resceloe , resznam);
		else
			printf_s("%d\n--\n%d\n", reschis, resznam);
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
		int reschis=0, resznam=0, resceloe=0;
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

		resznam = o6znam;
		reschis = chis - chv;

		if (resznam < reschis)
		{
			resceloe = reschis / resznam;
			reschis = reschis%resznam;
		}

		int reschisX = reschis;					//Сокращение дроби
		for (int i = 0; i < reschisX; reschisX--)
		{
			if (reschis%reschisX == 0 && resznam%reschisX == 0)
			{
				reschis = reschis / reschisX;
				resznam = resznam / reschisX;
			}

		}

		if (resceloe>0)
			printf_s("   %d\n%d --\n   %d\n", reschis, resceloe, resznam);
		else
			printf_s("%d\n--\n%d\n", reschis, resznam);
	}
		
	void mult(int chv, int znv)
	{
		int reschis = 0, resznam = 0, resceloe = 0;

		reschis = chis*chv;
		resznam = znam*znv;

		if (resznam < reschis)
		{
			resceloe = reschis / resznam;
			reschis = reschis%resznam;
		}

		

		int reschisX = reschis;					//Сокращение дроби
		for (int i = 0; i < reschisX; reschisX--)
		{
			if (reschis%reschisX == 0 && resznam%reschisX == 0)
			{
				reschis = reschis / reschisX;
				resznam = resznam / reschisX;
			}
			
		}
		if (resceloe>0)
			printf_s("   %d\n%d --\n   %d\n", reschis, resceloe, resznam);
		else
			printf_s("%d\n--\n%d\n", reschis, resznam);
	}
	
	void div(int chv, int znv)
	{
		int reschis = 0, resznam = 0, resceloe = 0;

		reschis = chis*znv;
		resznam = znam*chv;

		if (resznam < reschis)
		{
			resceloe = reschis / resznam;
			reschis = reschis%resznam;
		}



		int reschisX = reschis;					//Сокращение дроби
		for (int i = 0; i < reschisX; reschisX--)
		{
			if (reschis%reschisX == 0 && resznam%reschisX == 0)
			{
				reschis = reschis / reschisX;
				resznam = resznam / reschisX;
			}

		}
		if (resceloe>0)
			printf_s("   %d\n%d --\n   %d\n", reschis, resceloe, resznam);
		else
			printf_s("%d\n--\n%d\n", reschis, resznam);
	}
};

void main()
{
	Dro6b e(2, 3);
	
	e.div(4, 9);
}