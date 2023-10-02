

// 函数头文件
#include"funs.h"


//数学计算

double exmath::midcord(double x, double y)
{
	double z;
	z = (x + y) / 2;  // 中点坐标公式
	return z;
}

double  exmath::tpdi(double x, double y, double x2, double y2)
{
	double jl;
	jl = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));  //  两点距离公式
	return jl;
}

double exmath::slope(double A, double B)
{
	double k;
	k = -A / B;
	return k;

}

double exmath::Linpt(double C, double B)
{

	double b;
	b = -C / B;
	return b;

}

double exmath::dofpn(double A, double B, double C1, double C2)
{
	double d;
	d = ((fabs(C1 - C2)) / (sqrt(pow(A, 2) + pow(B, 2))));
	return d;
}

double exmath::difpton(double X, double Y, double A, double B, double C)
{
	double d;
	d = ((fabs(A * X + B * Y + C)) / (sqrt(pow(A, 2) + pow(B, 2))));
	return d;
}

double exmath::chength(double r, double d)
{
	double R;
	R = (2 * sqrt(pow(r, 2) - pow(d, 2)));
	return R;
}

double exmath::rearea(double c, double k)
{
	double mj;
	mj = c * k;
	return mj;
}

double exmath::regle(double c, double k)
{
	double zc;
	zc = 2 * c + 2 * k;
	return zc;
}

long double exmath::fac(double N)
{
	long double s = 1;
	int i;
	for (i = 1; i <= N; i++)
	{
		s = s * i;
	}
	return s;
}

int exmath::hcf(int m, int n)
{
	uisefun uf;
	int r;
	if (m < n)
	{
		uf.uiseswap(m, n);
	}
	while (m % n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	return n;
}

int exmath::lcd(int m, int n)
{
	uisefun uf;
	int r, k = m * n;
	if (m < n)
	{
		uf.uiseswap(m, n);
	}
	while (m % n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	return k / n;
}

bool exmath::prnum(int k)
{
	int i;
	int v=sqrt(k);
	if (k <= 1)
		return 0;
	for (i = 2; i <= v; i++)
		if (k % i == 0)
			return 0;
	return 1;
}

long long exmath::exrad(long long m, long long n)
{
	int k;
	k = rand() % (n - m + 1) + m;
	return k;
}

int exmath::dignum(long long k)
{
	int c = 0;
	while (k)
	{
		k /= 10;
		c++;
	}
	return c;
}

long long exmath::digsep(long long k, int m)
{
	int n;
	n = (int)(k / pow(10, m - 1));
	n %= 10;
	return n;
}

bool exmath::probab(int k)
{
	int p=exrad(1,100);
		if (k >=p)
		{
			return 1;
		}
	return 0;
}

string exmath::Decimal_Conversion(long double number, long long Base)
{
	string Results="";
	int i;
	long double intermediate_Results=0;
	while((int)(number))
	{
		intermediate_Results = (int)(number) % Base;
		Results += (intermediate_Results+48>=58? intermediate_Results + 55 : intermediate_Results + 48);
		number /= Base;
	}
	for (i = 0; i < Results.size() / 2; i++)
	{
		Results[i] = Results[i] + Results[Results.size()-1-i];
		Results[Results.size() - 1 - i] = Results[i] - Results[Results.size() - 1 - i];
		Results[i] = Results[i] - Results[Results.size() - 1 - i];
	}
	return Results;
}

//日期

bool exdate::epyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool exdate::judate(int year, int month, int day)
{
	if (year <= 0)
	{
		return 0;
	}

	switch (month)
	{
	case 2:
	{
		if (epyear(year) == true)
		{
			if (day > 29)
			{
				return 0;
			}
		}
		else
		{
			if (day > 28)
			{
				return 0;
			}
		}
		break;
	}
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		if (day > 31)
		{
			return 0;
		}
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		if (day > 30)
		{
			return 0;
		}
		break;
	}
	default:
	{
		return 0;
	}

	}

	return 1;
}

int exdate::monday(int year, int month)
{
	switch (month)
	{

	case 2:
	{
		if (epyear(year) == true)
		{
			return 29;
		}
		if (epyear(year) == false)
		{
			return 28;
		}
		break;
	}
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		return 31;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		return 30;
		break;
	}
	}
	return 0;
}

int exstr::strfindchar(string& t, char ch, int k)
{
	if (k < 0) return 0;
	int i, h = 0;
	for(i=0;i<=t.size()-1;i++)
	{
		if (t[i] == ch) h++;
		if (h == k) return i;
	}
	if(h<=k) return 0;
	return 0;
}

