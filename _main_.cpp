

// 程序头文件
#include"progam.h"

// 项目说明
/*************************************************

本程序最早编于2022年11月5日 5个子程序

开发环境  Windows10 + VS2022

开发动机：想把学习C/C++过程中重要的程序写上，此项目最重要的是函数，而不是程序


**************************************************/

int main()
{
	Main_part_of_program Subject; //程序
	Subject.call();
	return 0;

}  /* 程序结束 */


// 最早的程序源代码 
/*

#include<stdio.h>  // 本程序最早编于11月5日
#include<math.h>   //   程序最新更新时间：11月26日

main()            // 最新版本：2022-11-26
{
	double a, a1, A, A1;
	double b, b1, b2, b3, B, B1;
	double c, c1, C, C1, C2;
	double d, D, delt;
	double E;           //  定义变量
	double F, f;
	double G;
	double H;
	double x, x0, x1, x2;
	double y, y0, y1, y2;
	double k, k1;
	double p1, p2, px, py;
	double q;
	int z;
	printf("输入1计算两点中点和距离\n输入2判断四种直线位置关系\n输入3计算两平行线距离\n输入4计算一元二次方程\n输入5计算点到直线的距离");
	printf("\n输入6键入长宽打印四边形");
	printf("");
	printf("\n其他则出错");
	printf("\n输入一个数：");
	scanf("%d", &z);
	switch (z)
	{
	case 1:
		//  求两点中点和距离程序
		printf("(x1,y1)输入第一个点的坐标：");
		scanf("%lf %lf", &x1, &y1);
		printf("\n(x2,y2)输入第二个点的坐标：");
		scanf("%lf %lf", &x2, &y2);
		px = (x1 + x2) / 2;
		py = (y1 + y2) / 2;
		q = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		printf("两点中点为(%lf,%lf)\n两点距离为%lf", px, py, q);
		break;
	case 2:
		// 判断直线位置关系程序
		printf("(ax+by+c=0)\n输入第一个a,b,c:");
		scanf("%lf %lf %lf", &a, &b, &c);
		k = -a / b;
		b2 = -c / b;
		printf("(ax+by+c=0)\n输入第二个a,b,c:");
		scanf("%lf %lf %lf", &a1, &b1, &c1);
		k1 = -a1 / b1;
		b3 = -c1 / b1;
		if (k != k1)
		{
			if (k != k1&&k*k1 != -1)
				printf("相交");
			if (k != k1&&k*k1 == -1)
				printf("垂直");
		}
		if (k == k1)
		{
			if (k == k1&&b2 == b3)
				printf("重合");
			if (k == k1&&b2 != b3)
				printf("平行");
		}
		break;
	case 3:
		// 计算两平行线距离
		printf("(AX+BY+C=0)\n输入A,B,C:");
		scanf("%lf %lf %lf", &A, &B, &C1);
		printf("(AX+BY+C=0)\n输入第二个A,B,C:");
		scanf("%lf %lf %lf", &A1, &B1, &C2);
		if (A != A1 || B != B1)
			printf("不是平行线");
		if (A == A1&&B == B1)
			d = (fabs(C1 - C2)) / (sqrt(pow(A, 2) + pow(B, 2)));
		printf("两平行线距离为%lf", d);
		break;
	case 4:
		//  解一元二次方程程序
		printf("(ax*x+bx+c=0)\n输入a,b,c:");
		scanf("%lf %lf %lf", &a, &b, &c);
		delt = b*b - 4 * a*c;
		p1 = -b + sqrt(delt);
		p2 = -b - sqrt(delt);
		if (delt<0)
		{
			printf("方程无解");
		}
		if (delt == 0)
		{
			x1 = p1 / (2 * a);
			printf("方程有一个解为%lf", x1);
		}
		if (delt>0)
		{
			x1 = p1 / (2 * a);
			x2 = p2 / (2 * a);
			printf("\n两根分别为\nx1=%lf\nx2=%lf", x1, x2);
		}
		break;
	case 5:
		// 求点到直线距离程序
		printf("(x,y)\n输入点的坐标:");
		scanf("%lf %lf", &x0, &y0);
		printf("(Ax+By+C=0)\n输入A,B,C:");
		scanf("%lf %lf %lf", &A, &B, &C);
		d = (fabs(A*x0 + B*y0 + C)) / (sqrt(pow(A, 2) + pow(B, 2)));
		printf("点到直线距离为%lf", d);
		break;
	case 6:
		// 输入长和宽，打印四边形程序
		printf("输入长和宽：");
		scanf("%lf %lf", &c, &k);
		for (a = 1; a <= c; a++)
		{
			printf("*");
		}
		for (b = 1; b <= k - 2; b++)
		{
			printf("\n*");
			for (d = 1; d <= c - 2; d++)
			{
				printf(" ");
			}
			printf("*\n");
		}
		for (f = 1; f <= c; f++)
		{
			printf("*");
		}
		printf("\n面积为%lf,周长为%lf", c*k, 2 * c + 2 * k);
		break;
	default:
		printf("出错"); break;
	}
}


*/

