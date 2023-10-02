


// 唯一编译宏命令
#pragma once


// C语言头文件
#include<cstdlib>  // 其他函数
#include<cmath>  // 数学函数
#include<ctime>  // 时间函数 
#include<cctype>  // 字符类型函数
#include<cstring>  // 字符串函数

// C++头文件
#include<algorithm>  // 算法
#include<string> // 字符串类

// 使用字符串命名空间
using std::string;
using std::stoi;
using std::stod;
using std::to_string;

//通用函数
class uisefun
{
public:

	// 值交换
	template<typename T>
	void uiseswap(T& a, T& b);

	// 静态数组大小
	template<typename T>
	int arsize(const T& arry);

	// 静态数组最大值
	template <typename T>
	double armax(const T& arry);

	// 动态数组最大值
	template <typename T>
	double armax(const T& arry, int size);


	// 静态数组最小值
	template <typename T>
	double armin(const T& arry);

	// 动态数组最小值
	template <typename T>
	double armin(const T& arry, int size);


	// 静态数组求和
	template <typename T>
	double arsum(const T& arry);

	// 动态数组求和
	template <typename T>
	double arsum(const T& arry, int size);


	// 静态数组平均值
	template <typename T>
	double ararea(const T& arry);

	// 动态数组平均值
	template <typename T>
	double ararea(const T& arry, int size);


	// 静态数组冒泡排序
	template <typename T>
	void arbs(T& arry, bool m);

	// 动态数组冒泡排序
	template <typename T>
	void arbs(T& arry, bool m, int size);

	// 静态数组选择排序
	template <typename T>
	void arss(T& arry, bool m);

	// 动态数组选择排序
	template <typename T>
	void arss(T& arry, bool m, int size);

};













// 数学计算
class  exmath
{
public:

	// 中点坐标
	double midcord(double x, double y);

	// 两点距离
	double tpdi(double x, double y, double x2, double y2);

	// 斜率
	double slope(double A, double B);

	// 纵截距
	double Linpt(double C, double B);

	// 平行线距离
	double dofpn(double A, double B, double C1, double C2);

	// 点到直线距离
	double difpton(double X, double Y, double A, double B, double C);

	// 弦长
	double chength(double r, double d);

	// 长方形面积
	double rearea(double c, double k);

	// 长方形周长
	double regle(double c, double k);

	// 阶乘
	long double fac(double N);

	// 最大公约数
	int hcf(int m, int n);

	// 最小公倍数
	int lcd(int m, int n);

	// 素数
	bool prnum(int k);

	// 随机数范围 [m,n]
	long long exrad(long long m, long long n);

	// 数字位数
	 int dignum(long long k);

	// 数位分离
	long long digsep(long long k, int m);

	// 概率函数 单位整数
	bool probab(int k);

	// 十进制转换任意进制（>=2进制）
	string Decimal_Conversion(long double number,long long Base);

};

// 日期
class exdate
{

public:

	// 闰年
	bool epyear(int year);

	// 判断日期
	bool judate(int year, int month, int day);

	// 月份天数
	int monday(int year, int month);


};


// 字符串
class exstr
{
	public:
		// 寻找字符
		int strfindchar(string &t,char ch,int k);

};


// 值交换
template<typename T>
void uisefun::uiseswap(T& a, T& b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

// 静态数组大小
template<typename T>
int uisefun::arsize(const T& arry)
{
	return sizeof(arry) / sizeof(arry[0]);
}

// 静态数组最大值
template <typename T>
double uisefun::armax(const T& arry)
{
	double max = arry[0];
	int i;
	int size = arsize(arry);
	for (i = 1; i <= size - 1; i++)
	{
		if (arry[i] > max)
		{
			max = arry[i];
		}
	}
	return max;
}

// 动态数组最大值
template <typename T>
double uisefun::armax(const T& arry, int size)
{
	double max = arry[0];
	int i;
	for (i = 1; i <= size - 1; i++)
	{
		if (arry[i] > max)
		{
			max = arry[i];
		}
	}
	return max;
}


// 静态数组最小值
template <typename T>
double uisefun::armin(const T& arry)
{
	double min = arry[0];
	int i;
	int size = arsize(arry);
	for (i = 1; i <= size - 1; i++)
	{
		if (arry[i] < min)
		{
			min = arry[i];
		}
	}
	return min;
}

// 动态数组最小值
template <typename T>
double uisefun::armin(const T& arry, int size)
{
	double min = arry[0];
	int i;
	for (i = 1; i <= size - 1; i++)
	{
		if (arry[i] < min)
		{
			min = arry[i];
		}
	}
	return min;
}


// 静态数组求和
template <typename T>
double uisefun::arsum(const T& arry)
{
	int i;
	int size = arsize(arry);
	double sum = 0;
	for (i = 0; i <= size - 1; i++)
	{
		sum += arry[i];
	}
	return sum;
}

// 动态数组求和
template <typename T>
double uisefun::arsum(const T& arry, int size)
{
	int i;
	double sum = 0;
	for (i = 0; i <= size - 1; i++)
	{
		sum += arry[i];
	}
	return sum;
}


// 静态数组平均值
template <typename T>
double uisefun::ararea(const T& arry)
{
	return  arsum(arry) / arsize(arry);
}

// 动态数组平均值
template <typename T>
double uisefun::ararea(const T& arry, int size)
{
	return  arsum(arry, size) / size;
}


// 静态数组冒泡排序
template <typename T>
void uisefun::arbs(T& arry, bool m)
{
	int size = arsize(arry);
	int i, j;
	if (m == false)
	{
		for (i = 0; i <= size - 2; i++)
		{
			for (j = 0; j <= size - i - 2; j++)
			{
				if (arry[j] > arry[j + 1])   uiseswap(arry[j], arry[j + 1]);  //升序

			}
		}
	}
	if (m == true)
	{
		for (i = 0; i <= size - 2; i++)
		{
			for (j = 0; j <= size - i - 2; j++)
			{
				if (arry[j] < arry[j + 1])   uiseswap(arry[j], arry[j + 1]);  //降序

			}
		}
	}
}

// 动态数组冒泡排序
template <typename T>
void uisefun::arbs(T& arry, bool m, int size)
{
	int i, j;
	if (m == false)
	{
		for (i = 0; i <= size - 2; i++)
		{
			for (j = 0; j <= size - i - 2; j++)
			{
				if (arry[j] > arry[j + 1])   uiseswap(arry[j], arry[j + 1]);  //升序

			}
		}
	}
	if (m ==true )
	{
		for (i = 0; i <= size - 2; i++)
		{
			for (j = 0; j <= size - i - 2; j++)
			{
				if (arry[j] < arry[j + 1])   uiseswap(arry[j], arry[j + 1]);  //降序

			}
		}
	}
}

// 静态数组选择排序
template <typename T>
void uisefun::arss(T& arry, bool m)
{
	int size = arsize(arry);
	int i, j, k;
	if (m == false)
	{
		for (i = 0; i <= size - 2; i++)
		{
			k = i;
			for (j = i + 1; j <= size - 1; j++)
			{
				if (arry[j] < arry[k])   k = j;  //升序
			}
			if (k != i)  uiseswap(arry[k], arry[i]);
		}
	}
	if (m == true)
	{
		for (i = 0; i <= size - 2; i++)
		{
			k = i;
			for (j = i + 1; j <= size - 1; j++)
			{
				if (arry[j] > arry[k])   k = j;  //降序
			}
			if (k != i)  uiseswap(arry[k], arry[i]);
		}
	}
}

// 动态数组选择排序
template <typename T>
void uisefun::arss(T& arry, bool m, int size)
{
	int i, j, k;
	if (m == false)
	{
		for (i = 0; i <= size - 2; i++)
		{
			k = i;
			for (j = i + 1; j <= size - 1; j++)
			{
				if (arry[j] < arry[k])   k = j;  //升序
			}
			if (k != i)  uiseswap(arry[k], arry[i]);
		}
	}
	if (m == true)
	{
		for (i = 0; i <= size - 2; i++)
		{
			k = i;
			for (j = i + 1; j <= size - 1; j++)
			{
				if (arry[j] > arry[k])   k = j;  //降序
			}
			if (k != i)  uiseswap(arry[k], arry[i]);
		}
	}
}

