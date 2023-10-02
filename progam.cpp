
// 程序头文件
#include"progam.h"



//登陆界面

void Main_part_of_program::call()
{
	int counter = 0;  //计数器
	char Selection;  //选择登陆注册
	Login_Information User;  //用户
	system("title 登陆界面");
started:
	cout << "\n\n\t\t\t登陆主界面";
	cout << "\n\n\n\t\t\t输入1登陆\n\n";
	cout << "\t\t\t输入2注册\n\n";
	cout << "\t\t\t输入一个数:  ";
	cin >> Selection;
	system("cls");
	switch (Selection)
	{
	case '1':
	{

		if (counter == 0)
		{
			cout << "你还没有注册，已自动跳转到注册界面\n\n";
			system("pause");
			system("cls");
			counter = 1;
			goto Registration;
		}
		cout << "\n\n\n\t\t\t（只能输英文或数字）\n输入用户名:  ";
		cin >> User.verification_User_name;
		cout << "\n\n\t\t\t（只能输英文或数字）\n输入密码:  ";
		cin >> User.verification_Password;
		if ((User.Password == User.verification_Password) && (User.User_name == User.verification_User_name))
		{
			cout << "\n\n登陆成功，开始使用软件\n\n";
			system("pause");
			system("cls");
			break;
		}
		else
		{
			cout << "\n\n用户名或密码错误，请重新输入，即将返回登陆主界面\n\n";
			system("pause");
			system("cls");
			goto started;
		}
	}
	case '2':
	{
	Registration:
		cout << "\n\n\n\t\t\t（只能输英文或数字）\n输入用户名:  ";
		cin >> User.User_name;
		cout << "\n\n\t\t\t（只能输英文或数字）\n输入密码:  ";
		cin >> User.Password;
		cout << "\n\n注册成功，记住输入密码和用户名，即将返回登陆主界面，登陆后即可开始使用该软件\n\n";
		counter = 1;
		system("pause");
		system("cls");
		goto started;
	}
	case '0':
	{
		cout << "恭喜你发现开发者彩蛋，可以直接使用\n\n";
		system("pause");
		system("cls");
		break;
	}
	default:
	{
		cout << "输入错误，请重新输入\n\n";
		system("pause");
		system("cls");
		goto started;
	}
	}

	system("color 0F");                                //   修改 背景为黑（0）字体颜色为白（F)
	system("title 学习程序合集");         // 修改左上角标题为 学习程序合集
	string z;
Program_start:
	Select_the_statement_1_level_program();
	system("cls");
	cout << "\n\n输入1重新执行整个程序";
	cout << "\n\n其他则程序结束";
	cout << "\n\n输入：";
	cin >> z;
	system("cls");      // 清屏
	if (z == "1")
	{
		goto Program_start;
	}

}

//程序主体部分

void Main_part_of_program::Function_Prompt()
{
	cout << "\n\n输入1进入第一个分支功能";
	cout << "\n\n输入2进入第二个分支功能";
	cout << "\n\n输入3进入第三个分支功能";
	cout << "\n\n输入一个数：";
}

void Main_part_of_program::Select_the_statement_1_level_program()
{
	char  z;
	Programs_1_through_10 Program_10;
	Programs_11_through_20 Program_20;
	Programs_21_through_30 Program_30;
	Function_Prompt();
	cin >> z;
	system("cls");
	switch (z)
	{
	case '0':
	{
		cout << "开发者测试彩蛋，测试结果：\n\n";
		cout << "\n\n";
		 uisefun uf;
		 exmath mf;
		 exdate df;
		 int intArry[] = { 5, 8, 2, 1, 9 };
		 double doubleArry[] = { 3.14, 2.71, 1.41, 1.73, 2.22, 3.33 };

		 int sumInt = uf.arsum(intArry);
		 double averageDouble = uf.ararea(doubleArry);

		 std::cout << "Sum of integers: " << sumInt << std::endl;
		 std::cout << "Average of doubles: " << averageDouble << std::endl;



		system("pause");
		system("cls");
		break;
	}
	case '1':
	{
		Program_10.Select_statement_2_level_1_to_10_programs();
		break;
	}
	case '2':
	{
		Program_20.Select_statement_2_level_11_to_20_programs();
		break;
	}
	case '3':
	{
		Program_30.Select_statement_2_level_21_to_30_programs();
		break;
	}

	default:
		cout << "\n\n出错";
		break;
	}
}



// 程序1到10


void Programs_1_through_10::Two_point_midpoint_and_distance_procedure()
{
	exmath function;
	double x1, y1, x2, y2;
	double x, y, d;
	cout << "\n\n(x1,y1)\n\n输入第一个点的坐标:  ";
	cin >> x1 >> y1;
	cout << "\n\n(x2,y2)\n\n输入第二个点的坐标:  ";
	cin >> x2 >> y2;
	x = function.midcord(x1, x2);
	y = function.midcord(y1, y2);
	d = function.tpdi(x1, y1, x2, y2);
	cout << "\n\n两点中点为(" << x << "," << y << ")\n\n两点距离为" << d << "\n" << endl;

}

void Programs_1_through_10::Determine_the_line_position_relationship_procedure()
{
	exmath function;
	double a, b, c, a1, b1, c1;
	double b2, b3, k, k1;
	/* 判断直线位置关系程序 */
	cout << "\n\n(ax+by+c=0)\n\n输入第一个a,b,c:  ";
	cin >> a >> b >> c;
	k = function.slope(a, b);    /* 第一条直线的斜率 */
	b2 = function.Linpt(c, b);   /* 第一条直线的纵截距 */
	cout << "\n\n(ax+by+c=0)\n\n输入第二个a,b,c:  ";
	cin >> a1 >> b1 >> c1;
	k1 = function.slope(a1, b1);   /* 第二条直线的斜率 */
	b3 = function.Linpt(c1, b1);   /* 第二条直线的纵截距 */
	if (k != k1)     /* 斜率不相等情况 */
	{
		if (k != k1 && k * k1 != -1)
		{
			cout << "\n\n相交";
		}
		if (k != k1 && k * k1 == -1)
		{
			cout << "\n\n垂直";
		}
	}
	if (k == k1)  /* 斜率相等情况 */
	{
		if (k == k1 && b2 == b3)   /* 斜率纵截距相等 */
		{
			cout << "\n\n重合";
		}
		if (k == k1 && b2 != b3)  /* 斜率相等纵截距不相等 */
		{
			cout << "\n\n平行";
		}
	}
	cout << "\n\n";
}

void Programs_1_through_10::Procedure_for_calculating_the_distance_between_two_parallel_lines()
{
	exmath function;
	double k, k1, d;
	double A, B, A1, B1, C1, C2;
	/* 计算两平行线距离程序 */
	cout << "\n\n(AX+BY+C=0)\n\n输入第一个A,B,C:  ";
	cin >> A >> B >> C1;
	cout << "\n\n(AX+BY+C=0)\n\n输入第二个A,B,C:  ";
	cin >> A1 >> B1 >> C2;
	k = function.slope(A, B);   /* 第一条平行线斜率 */
	k1 = function.slope(A1, B1);   /* 第二条平行线斜率 */
	if (k != k1)  /* 斜率必须相同 */
	{
		cout << "\n\n不是平行线";
	}
	if (k == k1)
	{
		d = function.dofpn(A, B, C1, C2);
		cout << "\n\n两平行线距离为" << d;
	}
	cout << "\n\n";

}

void Programs_1_through_10::Program_for_solving_quadratic_equations_of_one_variable()
{
	double a, b, c, delt;
	double x1, x2, p1, p2;
	/* 解一元二次方程程序 */
	cout << "\n\n(ax*x+bx+c=0)\n\n输入a,b,c:  ";
	cin >> a >> b >> c;
	delt = b * b - 4 * a * c;  /* 一元二次方程delt判定式 */
	p1 = -b + sqrt(delt);  /* 第一个解上部分 */
	p2 = -b - sqrt(delt);  /* 第二个解上部分 */
	if (delt < 0)
	{
		cout << "\n\n方程无解";
	}
	if (delt == 0)
	{
		x1 = p1 / (2 * a);
		cout << "\n\n方程有一个解为" << x1;
	}
	if (delt > 0)
	{
		x1 = p1 / (2 * a);  /* 第一个解 */
		x2 = p2 / (2 * a);  /* 第二个解 */
		cout << "\n\n两根分别为\n\nx1=" << x1 << " \n\nx2=" << x2;
	}
	cout << "\n\n";

}

void Programs_1_through_10::The_procedure_for_finding_the_distance_from_a_point_to_a_line()
{
	exmath function;
	double x, y;
	double A, B, C;
	double d;
	/* 求点到直线距离程序 */
	cout << "\n\n(x,y)\n\n输入点的坐标:  ";
	cin >> x >> y;
	cout << "\n\n(Ax+By+C=0)\n\n输入A,B,C:  ";
	cin >> A >> B >> C;
	d = function.difpton(x, y, A, B, C);
	cout << "\n\n点到直线距离为" << d;
	cout << "\n\n";
}

void Programs_1_through_10::Determine_the_line_and_circle_position_relationship_procedure()
{
	exmath function;
	double A, B, C, D, E, F;
	double  H, r, d;
	double x1, y1, R;
	/* 判断直线与圆位置关系程序 */
	cout << "\n\n(A*x+B*y+C=0)\n\n输入A,B,C:  ";
	cin >> A >> B >> C;
	cout << "\n\n(x*x+y*y+D*x+E*y+F=0)\n\n输入D,E,F:  ";
	cin >> D >> E >> F;
	x1 = (-0.5) * D;  /* 圆心横坐标 */
	y1 = (-0.5) * E;  /* 圆心纵坐标 */
	H = pow(D, 2) + pow(E, 2) - 4 * F;  /* 半径公式上半部分 */
	r = sqrt(H) / 2;  /* 半径 */
	d = function.difpton(x1, y1, A, B, C);
	if (H < 0)   /* 判断圆的方程是否有意义 */
	{
		cout << "\n\n圆的方程无意义";
	}
	if (H == 0)   /* 判断圆的方程是否表示一个点 */
	{
		cout << "\n\n圆的方程表示一个点(" << x1 << "," << y1 << ")";
	}
	if (H > 0)   /* 圆的方程满足，则继续 */
	{
		if (d > r)    /* 相离情况 */
		{
			cout << "\n\n直线与圆相离\n\n圆心距离直线" << d;
		}
		if (d == r)   /* 相切情况 */
		{
			cout << "\n\n直线与圆相切\n\n距离为" << d;
		}
		if (d < r)    /* 相交情况 */
		{
			R = function.chength(r, d);
			cout << "\n\n直线与圆相交\n\n弦长为" << R;
		}
	} /* if(H>0)结束 */
	cout << "\n\n";

}

void Programs_1_through_10::Enter_long_and_wide_print_quadrilateral_programs()
{
	exmath function;
	double c, k;
	double a, b, d, f;
	/* 输入长和宽，打印四边形程序 */
	cout << "\n\n输入长和宽:  ";
	cin >> c >> k;
	for (a = 1; a <= c; a++)   /* 控制上半长 */
	{
		cout << "*";
	}
	for (b = 1; b <= k - 2; b++)  /* 控制宽 */
	{
		cout << "\n";
		cout << "*";
		for (d = 1; d <= c - 2; d++)
		{
			cout << " ";
		}  /* 控制内部显示 */
		cout << "*";
		if (b == k - 2)
		{
			cout << "\n";
		}
	}
	for (f = 1; f <= c; f++)  /* 控制下半长 */
	{
		cout << "*";
	}
	cout << "\n\n面积为" << function.rearea(c, k) << "\n\n周长为" << function.regle(c, k);
	cout << "\n\n";

}

void Programs_1_through_10::Print_care_program()
{
	double A, B, D, E, F, G;
	double  x, y;
	double i, j;
	int c, k;
	int pdz, pdk, pd;
	bool tj1, tj2;
	// 打印爱心程序
	A = 4;
	B = 4;
	D = 11;
	E = 11;
	G = 1;
	F = 14;
Caring_program_input:
	cout << "\n\n长必须是14倍数\n\n宽必须是10的倍数\n\n必须是正数";
	cout << "\n\n长宽比必须是14：10";
	cout << "\n\n最好不要输入太大的数，不然图形意想不到";
	cout << "\n\n输入长和宽:  ";
	/* 显示提示语 */
	cin >> c >> k;
	pdz = c / 14;
	pdk = k / 10;
	pd = pdz - pdk;
	tj1 = (pd != 0);  // 成立了长宽比就不合格
	tj2 = (c % 14 != 0 || k % 10 != 0);    // 成立了长和宽就不是14和10的倍数  
	while (tj1 + tj2 == 1 || tj1 + tj2 == 2 || c < 0 || k < 0)
	{
		system("cls");
		cout << "\n\n长必须是14倍数\n\n宽必须是10的倍数!\n\n必须是正数";
		cout << "\n\n长宽比必须是14：10!\n";
		system("pause");
		system("cls");
		goto  Caring_program_input;
	}
	x = c / 14;
	y = k / 10;
	A *= x;
	B *= x;
	D *= x;
	E *= x;
	G *= x;
	F *= x;
	for (i = 1; i <= c; i++) /* 打印第一行 */
	{
		if (i == 4 * x || i == 11 * x)
		{
			cout << "*";
		}
		else  /* 控制空格 */
		{
			cout << " ";
		}
	}

	for (i = 1; i <= 3 * y; i++)  /* 打印3*y行 */
	{
		cout << "\n";
		A--;
		D--;
		E++;
		B++;
		for (j = 1; j <= c; j++)  /* 控制3*y行打印内容 */
		{
			if (j == A || j == B)   /* 控制非空格前部分 */
			{
				cout << "*";
			}
			else if (j == D || j == E)  /* 控制非空格后部分 */
			{
				cout << "*";
			}
			else  /* 控制空格 */
			{
				cout << " ";
			}
		}  /* 内循环结束 */

	}  /* 外循环结束 */

	for (i = 1; i <= 6 * y; i++)  /* 打印6*y行 */
	{
		cout << "\n";
		G++;
		F--;
		for (j = 1; j <= c; j++)  /* 控制6*y行打印内容 */
		{
			if (j == G || j == F)   /* 控制非空格部分 */
			{
				cout << "*";
			}
			else/* 控制空格 */
			{
				cout << " ";
			}
		} /* 内循环结束 */

	} /* 外循环结束 */
	cout << "\n\n";

}

void Programs_1_through_10::Understand_the_Ascll_code_specific_range_character_property_program()
{
	int a, i;
	int b;
	char c;
	// 了解Ascll码特定范围字符属性程序
	cout << "\n\n(0-127)\n\n输入范围起值:  ";
	cin >> a;
	cout << "\n\n(0-127)\n\n输入范围结束值:  ";
	cin >> i;
	b = a;  // ASCII编号
	c = (char)(a);  // ASCII字符
	for (b; b <= i; b++, c++)   // for循环嵌套if用以实现判断特定范围字符属性
	{
		if (isalnum(b))
		{
			cout << "\nASCII编号" << b << "\t" << c << "是字母或数字\n";
		}
		if (isalpha(b))
		{
			cout << "\nASCII编号" << b << "\t" << c << "是字母\n";
		}
		if (iscntrl(b))
		{
			cout << "\nASCII编号" << b << "\t" << c << "是控制字符\n";
		}
		if (isdigit(b))
		{
			cout << "\nASCII编号" << b << "\t" << c << "是数字\n";
		}
		if (isgraph(b))
		{
			cout << "\nASCII编号" << b << "\t" << c << "是可打印字符\n";
		}
		if (islower(b))
		{
			cout << "\nASCII编号" << b << "\t" << c << "是小写字母\n";
		}
		if (ispunct(b))
		{
			cout << "\nASCII编号" << b << "\t" << c << "是标点字符\n";
		}
		if (isupper(b))
		{
			cout << "\nASCII编号" << b << "\t" << c << "是大写字母\n";
		}
		if (isspace(b))
		{
			cout << "\nASCII编号" << b << "\t" << c << "是空格,制表符，跳格符，换行符中的一种";
		}
	}  //for结束
	cout << "\n\n";

}

void Programs_1_through_10::The_Fibonacci_program()
{
	int z;
	long double F[1000] = { 0, 1, 1 };
	int n;
	long double j;
	int i;
	// 两个斐波那契数列程序
	cout << "\n\n输入1输出指定位数斐波那契数列";
	cout << "\n\n输入2输出不大于输入数的斐波那契数列";
	cout << "\n\n其他则出错";
	cout << "\n\n输入一个数:  ";
	cin >> z;
	system("cls");
	switch (z)
	{
	case 1:
	{  // 输出指定位数斐波那契数列
	Fibonacci_program_input:
		cout << "\n\n(输入数必须小于等于999)\n\n输入一个数:  ";
		cin >> i;
		while (i > 999)
		{
			system("cls");
			cout << "\n\n输入数必须小于等于999！\n";
			system("pause");
			system("cls");
			goto Fibonacci_program_input;
		}
		cout << "\n1";
		for (n = 2; n <= i; n++)
		{
			F[n] = F[n - 1] + F[n - 2];
			cout << "\n" << F[n];
		}
		break;
	}

	case 2:
	{   // 输出不大于输入数的斐波那契数列
		cout << "\n\n(输入数必须小于等于999位斐波那契数)\n\n输入一个数:  ";
		cin >> j;
		cout << "\n1";
		for (n = 2; n <= 999; n++)
		{
			F[n] = F[n - 1] + F[n - 2];
			if (j >= F[n])
			{
				cout << "\n" << F[n];
			}
		}
		break;
	}
	default:
		cout << "\n\n出错";
		break;
	}
	cout << "\n\n";

}



// 程序1到10结构

void Programs_1_through_10::Procedures_1_to_10_Prompt_words()
{
	cout << "\n\n输入1计算两点中点和距离";
	cout << "\n\n输入2判断四种直线位置关系";
	cout << "\n\n输入3计算两平行线距离";
	cout << "\n\n输入4计算一元二次方程";
	cout << "\n\n输入5计算点到直线的距离";
	cout << "\n\n输入6判断直线与圆位置关系";
	cout << "\n\n输入7键入长宽打印四边形";
	cout << "\n\n输入8键入特定长和宽打印爱心";
	cout << "\n\n输入9了解Ascll码特定范围字符属性";
	cout << "\n\n输入10选择执行斐波那契数列程序";
	cout << "\n\n输入一个数:  ";
}

void Programs_1_through_10::Select_statement_2_level_1_to_10_programs()
{
	char z;
	int Number_of_programs; //程序数
	int Start_over;         //开始
	int Program_group = 1;    //程序组数
Programs_1_to_10_begin:
	Procedures_1_to_10_Prompt_words();
	cin >> z;
	system("cls");
Programs_1_to_10_are_selected:
	switch (z)  /* switch 用于实现功能选择 */
	{

	case '1':
	{
		Two_point_midpoint_and_distance_procedure();
		Number_of_programs = 1;
		break;
	}

	case '2':
	{
		Determine_the_line_position_relationship_procedure();
		Number_of_programs = 2;
		break;
	}

	case '3':
	{
		Procedure_for_calculating_the_distance_between_two_parallel_lines();
		Number_of_programs = 3;
		break;
	}

	case '4':
	{
		Program_for_solving_quadratic_equations_of_one_variable();
		Number_of_programs = 4;
		break;
	}

	case '5':
	{
		The_procedure_for_finding_the_distance_from_a_point_to_a_line();
		Number_of_programs = 5;
		break;
	}

	case '6':
	{
		Determine_the_line_and_circle_position_relationship_procedure();
		Number_of_programs = 6;
		break;
	}

	case '7':
	{
		Enter_long_and_wide_print_quadrilateral_programs();
		Number_of_programs = 7;
		break;
	}

	case '8':
	{
		Print_care_program();
		Number_of_programs = 8;
		break;
	}

	case '9':
	{
		Understand_the_Ascll_code_specific_range_character_property_program();
		Number_of_programs = 9;
		break;
	}

	case '10':
	{
		The_Fibonacci_program();
		Number_of_programs = 10;
		break;
	}

	default:
		cout << "\n\n出错";
		Number_of_programs = 0;
		break;
	}
	cout << "\n\n";
	system("pause");
	system("cls");
	if (Number_of_programs == 0)
	{
		cout << "输入1重新选择第" << Program_group << "号程序组中" << "要运行的程序\n" << endl;
		cout << "输入一个数：";
		cin >> Start_over;
		if (Start_over == 1)
		{
			system("cls");
			goto Programs_1_to_10_begin;
		}
	}
	else
	{
		cout << "输入1重新运行第" << Number_of_programs << "号程序\n" << endl;
		cout << "输入一个数：";
		cin >> Start_over;
		if (Start_over == 1)
		{
			system("cls");
			goto Programs_1_to_10_are_selected;
		}
	}
}




// 程序11到20


void Programs_11_through_20::School_Information_Management_System()
{
	exstr sf;
	
	
	int i;   // 循环
	char z;  // 主界面选择

	int hao;          // 学生系统编号
	int z1, z2, z3;   // 学生选择

	int hao2;    // 老师系统编号
	int k1, k2, k3;  // 老师选择

	int hao3;    // 班级系统编号
	int h1, h2, h3;   // 班级选择

	int u1;  // 学校选择


	ofstream ofile;   // 存入文件
	ifstream ifile;     // 读取文件
	string f1, f2;      // 路径
	string caching;  //	读取文件缓存
	int x1, x2;  // 读取文件字符串下标
	int j;   // 读取文件循环变量
	
	int t1, t2;
	string SpaceCode,SCHC="";  //空间码   输入缓存
	
	int stu, tea, cla; // 学生，老师，班级大小
	
	char z0;
schoolSR:
	cout << "\n\n\t\t输入1通过文件里的空间码一键定义大小（需已执行保存文件功能）"
		<< "\n\n\t\t输入2手动输入大小"
		<<"\n\n\t\t输入一个数：";
	cin >> z0;
	system("cls");
	switch (z0)
	{
	case '1':
	{
		cout << "\n\n\t\t输入空间码：";
		cin >> SpaceCode;
		t1 = sf.strfindchar(SpaceCode, 'k', 1)+1;
		t2 = sf.strfindchar(SpaceCode, 'k', 2)-1;
		for (j = t1; j <= t2; j++) SCHC+=SpaceCode[j];
		stu = stoi(SCHC);
	
		SCHC.clear();
		SCHC = "";

		t1 = sf.strfindchar(SpaceCode, 'k', 2) + 1;
		t2 = sf.strfindchar(SpaceCode, 'k', 3) - 1;
		for (j = t1; j <= t2; j++) SCHC += SpaceCode[j];
		tea = stoi(SCHC);
		
		SCHC.clear();
		SCHC = "";

		t1 = sf.strfindchar(SpaceCode, 'k', 3) + 1;
		t2 = sf.strfindchar(SpaceCode, 'k', 4) - 1;
		for (j = t1; j <= t2; j++) SCHC += SpaceCode[j];
		cla = stoi(SCHC);
		
		SCHC.clear();
		SCHC = "";
		cout << "\n\n\t\t学生人数："<<stu
			<< "\n\n\t\t老师人数："<<tea
			<< "\n\n\t\t班级数量："<<cla<<"\n\n";
		system("pause");
		system("cls");
		break;
	}

	case '2':
	{
		cout << "\n\n\t\t输入要存储多少名学生：";
		cin >> stu;
		cout << "\n\n\t\t输入要存储多少名老师：";
		cin >> tea;
		cout << "\n\n\t\t输入要存储多少个班级：";
		cin >> cla;
		system("pause");
		system("cls");
		break;
	}
	
	default:
	{
		cout << "\n\n输入错误，重新输入\n\n";
		system("pause");
		system("cls");
		goto schoolSR;
	}
	}
    School_str School_Information;  // 只存储学校
	Student_str* stus = new Student_str[stu];    // 学生
	Teacher_str* teas = new Teacher_str[tea];   // 老师
	Class_str* clas = new Class_str[cla];    // 班级

School_information_management_system_main_interface:
	cout << "\n\n\t\t      学校信息管理系统主界面" << endl;
	cout << "\n\t\t\t输入1管理学生信息" << endl;
	cout << "\n\t\t\t输入2管理老师信息" << endl;
	cout << "\n\t\t\t输入3管理班级信息" << endl;   // 显示界面
	cout << "\n\t\t\t输入4管理学校信息" << endl;
	cout << "\n\t\t\t输入5查看使用帮助" << endl;
	cout << "\n\t\t\t输入6将数据存入文本文件中（文件存在将会被清空并重新写入数据，文件不存在，则会创建一个新文件）" << endl;
	cout << "\n\t\t\t输入7读取文本文件内容存入信息管理系统（文本文件必须存在且可读）" << endl;
	cout << "\n\t\t\t输入其他退出" << endl;
	cout << "\n\n\t\t输入一个数:  ";
	cin >> z;
	system("cls");
	switch (z)
	{
	case '1':
	{
		// 学生信息管理系统
	Student_information_management_system_main_interface:
		cout << "\n\n\t\t      学生信息管理系统主界面" << endl;
		cout << "\n\t\t\t输入1输入学生信息" << endl;
		cout << "\n\t\t\t输入2查看全部学生信息或查询指定学生信息" << endl;
		cout << "\n\t\t\t输入3删除全部学生信息或指定学生信息" << endl;
		cout << "\n\t\t\t输入4返回主界面" << endl;
		cout << "\n\t\t\t输入其他返回学生信息管理主界面" << endl;
		cout << "\n\n\t\t输入一个数:  ";
		cin >> z1;
		system("cls");
		switch (z1)
		{

		case 1:
		{
		School_information_management_system_student_input:
			cout << "输入学生的系统编号:  ";
			cin >> hao;
			hao--;
			while (hao > stu || hao < 0)
			{
				system("cls");
				cout << "\n\n编号必须为1到"<<stu<<"\n";   // 输入限制
				system("pause");
				system("cls");
				goto School_information_management_system_student_input;
			}
			cout << "\n\n输入学生学号:  ";
			cin >> stus[hao].ID;
			cout << "\n\n输入学生姓名:  ";
			cin >> stus[hao].name;
			cout << "\n\n输入学生性别:  ";
			cin >> stus[hao].Gender;
			cout << "\n\n输入学生年龄:  ";
			cin >> stus[hao].age;
			cout << "\n\n输入学生班级:  ";
			cin >> stus[hao].Class_S;
			cout << "\n\n输入学生学习能力评级:  ";
			cin >> stus[hao].Learning_ability_rating;
			system("pause");
			system("cls");
			goto Student_information_management_system_main_interface;
		}

		case 2:
		{
			cout << "\n\t\t\t输入1查看全部学生信息" << endl;
			cout << "\n\t\t\t输入2查询指定学生信息" << endl;
			cout << "\n\t\t\t输入其他返回学生信息管理主界面" << endl;
			cout << "\n\n\t\t输入一个数:  ";
			cin >> z2;
			system("cls");
			switch (z2)
			{

			case 1:
			{
				cout
					<< "|" << right << setw(20) << "系统编号" << "|"
					<< right << setw(20) << "学生学号" << "|"
					<< right << setw(20) << "学生姓名" << "|"
					<< right << setw(20) << "学生性别" << "|"
					<< right << setw(20) << "学生年龄" << "|"
					<< right << setw(20) << "学生班级" << "|"
					<< right << setw(20) << "学生学习能力评级" << "|\n";
				for (i = 0; i <= stu-1; i++)  // 循环显示所有学生
				{
					cout
						<< "|" << right << setw(20) << i + 1 << "|"
						<< right << setw(20) << stus[i].ID << "|"
						<< right << setw(20) << stus[i].name << "|"
						<< right << setw(20) << stus[i].Gender << "|"
						<< right << setw(20) << stus[i].age << "|"
						<< right << setw(20) << stus[i].Class_S << "|"
						<< right << setw(20) << stus[i].Learning_ability_rating << "|" << endl;
				}
				system("pause");
				system("cls");
				break;
			}

			case 2:
			{
			School_information_management_system_students_to_view:
				cout << "输入学生的系统编号:  ";
				cin >> hao;
				hao--;
				while (hao >=stu || hao < 0)
				{
					system("cls");
					cout << "\n\n编号必须为1到"<<stu<<"\n";
					system("pause");
					system("cls");
					goto School_information_management_system_students_to_view; // 输入错误重新输入
				}
				cout << "该学生信息为\n\n";
				cout 
					<< "|" << right << setw(20) << "系统编号" << "|"
					<< right << setw(20) <<"学生学号" << "|"
					<< right << setw(20) <<"学生姓名" << "|"
					<< right << setw(20) <<"学生性别" << "|"
					<< right << setw(20) <<"学生年龄" << "|"
					<< right << setw(20) <<"学生班级" << "|"
					<< right << setw(20) <<"学生学习能力评级"<<"|\n";
				cout 
					<< "|" << right << setw(20) << hao+1 << "|" 
					<< right << setw(20)<< stus[hao].ID << "|"
					<< right << setw(20) << stus[hao].name << "|"
					<< right << setw(20) << stus[hao].Gender << "|"
					<< right << setw(20) << stus[hao].age << "|"
					<< right << setw(20) << stus[hao].Class_S << "|"
					<< right << setw(20) << stus[hao].Learning_ability_rating << "|" << endl;
				system("pause");
				system("cls");
				break;
			}

			default:

				break;
			}
			goto Student_information_management_system_main_interface;
		}

		case 3:
		{
			cout << "\n\t\t\t输入1删除全部学生信息" << endl;
			cout << "\n\t\t\t输入2删除指定学生信息" << endl;
			cout << "\n\t\t\t输入其他返回学生信息管理主界面" << endl;
			cout << "\n\n\t\t输入一个数:  ";
			cin >> z3;
			system("cls");
			switch (z3)
			{

			case 1:
			{
				for (i = 0; i <= stu-1; i++)
				{
					stus[i].ID = "";
					stus[i].name = "";      // 赋值空格以表删除
					stus[i].Gender = "";
					stus[i].age = "";
					stus[i].Class_S = "";
					stus[i].Learning_ability_rating = "";
				}
				cout << "删除完成\n";
				system("pause");
				system("cls");
				break;
			}

			case 2:
			{
			School_information_management_system_students_delete:
				cout << "输入学生的系统编号:  ";
				cin >> hao;
				hao--;
				while (hao >=stu || hao < 0)
				{
					system("cls");
					cout << "\n\n编号必须为1到"<<stu<<"\n";
					system("pause");
					system("cls");
					goto School_information_management_system_students_delete;
				}

				stus[hao].ID = "";
				stus[hao].name = "";
				stus[hao].Gender = "";
				stus[hao].age = "";
				stus[hao].Class_S = "";
				stus[hao].Learning_ability_rating = "";
				cout << "删除完成\n";
				system("pause");
				system("cls");
				break;
			}

			default:

				break;
			}
			goto Student_information_management_system_main_interface;
		}

		case 4:
		{
			goto School_information_management_system_main_interface;
		}

		default:

			goto Student_information_management_system_main_interface;

		}
	}

	case '2':
	{
		// 老师信息管理系统
	Teacher_information_management_system_main_interface:
		cout << "\n\n\t\t      老师信息管理系统主界面" << endl;
		cout << "\n\t\t\t输入1输入老师信息" << endl;
		cout << "\n\t\t\t输入2查看全部老师信息或查询指定老师信息" << endl;
		cout << "\n\t\t\t输入3删除全部老师信息或指定老师信息" << endl;
		cout << "\n\t\t\t输入4返回主界面" << endl;
		cout << "\n\t\t\t输入其他返回老师信息管理主界面" << endl;
		cout << "\n\n\t\t输入一个数:  ";
		cin >> k1;
		system("cls");
		switch (k1)
		{

		case 1:
		{
		School_information_management_system_teacher_input:
			cout << "输入老师的系统编号:  ";
			cin >> hao2;
			hao2--;
			while (hao2 >=tea || hao2 < 0)
			{
				system("cls");
				cout << "\n\n编号必须为1到"<<tea<<"\n";
				system("pause");
				system("cls");
				goto School_information_management_system_teacher_input;
			}
			cout << "\n\n输入老师编号:  ";
			cin >> teas[hao2].ID;
			cout << "\n\n输入老师姓名:  ";
			cin >> teas[hao2].name;
			cout << "\n\n输入老师性别:  ";
			cin >> teas[hao2].Gender;
			cout << "\n\n输入老师年龄:  ";
			cin >> teas[hao2].age;
			cout << "\n\n输入老师班级:  ";
			cin >> teas[hao2].Class_t;
			cout << "\n\n输入老师教书等级评级:  ";
			cin >> teas[hao2].Teaching_grade_rating;
			system("pause");
			system("cls");
			goto Teacher_information_management_system_main_interface;
		}

		case 2:
		{
			cout << "\n\t\t\t输入1查看全部老师信息" << endl;
			cout << "\n\t\t\t输入2查询指定老师信息" << endl;
			cout << "\n\t\t\t输入其他返回老师信息管理主界面" << endl;
			cout << "\n\n\t\t输入一个数:  ";
			cin >> k2;
			system("cls");
			switch (k2)
			{

			case 1:
			{
				cout 
					<< "|" << right << setw(20) << "系统编号" << "|"
					<< right << setw(20) <<"老师编号" << "|"
					<< right << setw(20) <<"老师姓名" << "|"
					<< right << setw(20) <<"老师性别" << "|"
					<< right << setw(20) <<"老师年龄" << "|"
					<< right << setw(20) <<"老师班级" << "|"
					<< right << setw(20) <<"老师教书等级评级"<<"|\n";
				for (i = 0; i <= tea-1; i++)
				{
					cout
						<< "|" << right << setw(20) << i +1 << "|" 
						<< right << setw(20) << teas[i].ID << "|"
						<< right << setw(20) << teas[i].name << "|"
						<< right << setw(20)  << teas[i].Gender << "|"
						<< right << setw(20)  << teas[i].age << "|"
						<< right << setw(20) << teas[i].Class_t << "|"
						<< right << setw(20)  << teas[i].Teaching_grade_rating << "|" << endl;
				}
				system("pause");
				system("cls");
				break;
			}

			case 2:
			{
			School_information_management_system_teacher_view:
				cout << "输入老师的系统编号:  ";
				cin >> hao2;
				hao2--;
				while (hao2 >= tea || hao2 < 0)
				{
					system("cls");
					cout << "\n\n编号必须为1到"<<tea<<"\n";
					system("pause");
					system("cls");
					goto School_information_management_system_teacher_view;
				}
				cout << "该老师信息为\n\n";
				cout
					<< "|" << right << setw(20) << "系统编号" << "|"
					<< right << setw(20) << "老师编号" << "|"
					<< right << setw(20) << "老师姓名" << "|"
					<< right << setw(20) << "老师性别" << "|"
					<< right << setw(20) << "老师年龄" << "|"
					<< right << setw(20) << "老师班级" << "|"
					<< right << setw(20) << "老师教书等级评级" << "|\n";
				cout
					<< "|" << right << setw(20) << hao2 + 1 << "|"
					<< right << setw(20) << teas[hao2].ID << "|"
					<< right << setw(20) << teas[hao2].name << "|"
					<< right << setw(20) << teas[hao2].Gender << "|"
					<< right << setw(20) << teas[hao2].age << "|"
					<< right << setw(20) << teas[hao2].Class_t << "|"
					<< right << setw(20) << teas[hao2].Teaching_grade_rating << "|" << endl;
				system("pause");
				system("cls");
				break;
			}

			default:

				break;
			}
			goto Teacher_information_management_system_main_interface;
		}

		case 3:
		{
			cout << "\n\t\t\t输入1删除全部老师信息" << endl;
			cout << "\n\t\t\t输入2删除指定老师信息" << endl;
			cout << "\n\t\t\t输入其他返回老师信息管理主界面" << endl;
			cout << "\n\n\t\t输入一个数:  ";
			cin >> k3;
			system("cls");
			switch (k3)
			{

			case 1:
			{
				for (i = 0; i <= tea-1; i++)
				{
					teas[i].Class_t = "";
					teas[i].ID = "";
					teas[i].Teaching_grade_rating = "";
					teas[i].age = "";
					teas[i].Gender = "";
					teas[i].name = "";
				}
				cout << "删除完成\n";
				system("pause");
				system("cls");
				break;
			}

			case 2:
			{
			School_information_management_system_teacher_delete:
				cout << "输入老师的系统编号:  ";
				cin >> hao2;
				hao2--;
				while (hao2 >= tea || hao2 < 0)
				{
					system("cls");
					cout << "\n\n编号必须为1到"<<tea<<"\n";
					system("pause");
					system("cls");
					goto School_information_management_system_teacher_delete;
				}
				teas[hao2].Class_t = "";
				teas[hao2].ID = "";
				teas[hao2].Teaching_grade_rating = "";
				teas[hao2].Gender = "";
				teas[hao2].age = "";
				teas[hao2].name = "";
				cout << "删除完成\n";
				system("pause");
				system("cls");
				break;
			}

			default:

				break;
			}
			goto Teacher_information_management_system_main_interface;
		}

		case 4:
		{
			goto School_information_management_system_main_interface;
		}

		default:

			goto Teacher_information_management_system_main_interface;

		}


	}

	case '3':
	{
		// 班级信息管理系统
	Class_main_Interface:
		cout << "\n\n\t\t      班级信息管理系统主界面" << endl;
		cout << "\n\t\t\t输入1输入班级信息" << endl;
		cout << "\n\t\t\t输入2查看全部班级信息或查询指定班级信息" << endl;
		cout << "\n\t\t\t输入3删除全部班级信息或指定班级信息" << endl;
		cout << "\n\t\t\t输入4返回主界面" << endl;
		cout << "\n\t\t\t输入其他返回班级信息管理主界面" << endl;
		cout << "\n\n\t\t输入一个数:  ";
		cin >> h1;
		system("cls");
		switch (h1)
		{

		case 1:
		{
		Class_input:
			cout << "输入班级的系统编号:  ";
			cin >> hao3;
			hao3--;
			while(hao3 >= cla || hao3 < 0)
			{
				system("cls");
				cout << "\n\n编号必须为1到"<<cla<<"\n";
				system("pause");
				system("cls");
				goto Class_input;
			}
			cout << "\n\n输入班级名称:  ";
			cin >> clas[hao3].name;
			cout << "\n\n输入班级人数:  ";
			cin >> clas[hao3].Number_of_people;
			cout << "\n\n输入班级评分等级:  ";
			cin >> clas[hao3].Rating_level;
			system("pause");
			system("cls");
			goto Class_main_Interface;
		}

		case 2:
		{
			cout << "\n\t\t\t输入1查看全部班级信息" << endl;
			cout << "\n\t\t\t输入2查询指定班级信息" << endl;
			cout << "\n\t\t\t输入其他返回班级信息管理主界面" << endl;
			cout << "\n\n\t\t输入一个数:  ";
			cin >> h2;
			system("cls");
			switch (h2)
			{

			case 1:
			{
				cout 
					<< "|" << right << setw(20) << "系统编号"<<"|"
					<< right << setw(20) <<"班级名称" << "|"
					<< right << setw(20) <<"班级人数" << "|"
					<< right << setw(20) <<"班级评分等级"<<"|\n";
				for (i = 0; i <= cla-1; i++)
				{
					cout
						<< "|" << right << setw(20) 	<< i+1 << "|"
						<< right << setw(20) << clas[i].name << "|"
						<< right << setw(20) << clas[i].Number_of_people << "|"
						<< right << setw(20) << clas[i].Rating_level << "|" << endl;
				}
				system("pause");
				system("cls");
				break;
			}

			case 2:
			{
			Class_View:
				cout << "输入班级的系统编号:  ";
				cin >> hao3;
				hao3--;
				while (hao3 >= cla || hao3 < 0)
				{
					system("cls");
					cout << "\n\n编号必须为1到"<<cla<<"\n";
					system("pause");
					system("cls");
					goto Class_View;
				}

				cout << "该班级信息为\n\n";
				cout 
					<< "|" << right << setw(20) << "系统编号" << "|"
					<< right << setw(20) << "班级名称" << "|"
					<< right << setw(20) << "班级人数" << "|"
					<< right << setw(20) << "班级评分等级" << "|\n";

				cout 
					<< "|" << right << setw(20) << hao3 +1<< "|"
					<< right << setw(20) << clas[hao3].name << "|"
					<< right << setw(20) << clas[hao3].Number_of_people << "|"
					<< right << setw(20) << clas[hao3].Rating_level << "|" << endl;
				system("pause");
				system("cls");
				break;
			}

			default:

				break;
			}
			goto Class_main_Interface;
		}

		case 3:
		{
			cout << "\n\t\t\t输入1删除全部班级信息" << endl;
			cout << "\n\t\t\t输入2删除指定班级信息" << endl;
			cout << "\n\t\t\t输入其他返回班级信息管理主界面" << endl;
			cout << "\n\n\t\t输入一个数:  ";
			cin >> h3;
			system("cls");
			switch (h3)
			{

			case 1:
			{
				for (i = 0; i <= cla-1; i++)
				{
					clas[i].name = "";
					clas[i].Number_of_people = "";
					clas[i].Rating_level = "";
				}
				cout << "删除完成\n";
				system("pause");
				system("cls");
				break;
			}

			case 2:
			{
			Class_deletion:
				cout << "输入班级的系统编号:  ";
				cin >> hao3;
				hao3--;
				while (hao3 >= cla || hao3 <0)
				{
					system("cls");
					cout << "\n\n编号必须为1到"<<cla<<"\n";
					system("pause");
					system("cls");
					goto Class_deletion;
				}

				clas[hao3].name = "";
				clas[hao3].Number_of_people = "";
				clas[hao3].Rating_level = "";
				cout << "删除完成\n";
				system("pause");
				system("cls");
				break;
			}

			default:

				break;
			}
			goto Class_main_Interface;
		}

		case 4:
		{
			goto School_information_management_system_main_interface;
		}

		default:

			goto Class_main_Interface;

		}
	}

	case '4':
	{
		// 学校信息管理系统
	School_information_management_system_interface:
		cout << "\n\n\t\t      学校信息管理系统分界面" << endl;
		cout << "\n\t\t\t输入1输入学校信息" << endl;
		cout << "\n\t\t\t输入2查看学校信息" << endl;
		cout << "\n\t\t\t输入3删除学校信息" << endl;
		cout << "\n\t\t\t输入4返回主界面" << endl;
		cout << "\n\t\t\t输入其他返回学校信息管理分界面" << endl;
		cout << "\n\n\t\t输入一个数:  ";
		cin >> u1;
		system("cls");
		switch (u1)
		{

		case 1:
		{
			cout << "\n\n输入学校名称:  ";
			cin >> School_Information.name;
			cout << "\n\n输入学校位置:  ";
			cin >> School_Information.Location;
			cout << "\n\n输入学校校长:  ";
			cin >> School_Information.Principal;
			cout << "\n\n输入学校学历等级:  ";
			cin >> School_Information.Level_of_education;
			system("pause");
			system("cls");
			goto School_information_management_system_interface;
		}

		case 2:
		{
			cout <<"|"<< right<<setw(20)<<"学校名称" << "|"
				<< right << setw(20) <<"学校位置"<<"|"
				<< right << setw(20) <<"学校校长" << "|"
				<< right << setw(20) <<"学校学历等级" << "|\n";
			cout << "|" << right << setw(20) << School_Information.name << "|"
				<< right << setw(20) << School_Information.Location << "|"
				<< right << setw(20) << School_Information.Principal << "|"
				<< right << setw(20) << School_Information.Level_of_education << "|" << endl;
			system("pause");
			system("cls");
			goto School_information_management_system_interface;
		}

		case 3:
		{
			School_Information.name = "";
			School_Information.Location = "";
			School_Information.Principal = "";
			School_Information.Level_of_education = "";
			cout << "删除完成\n";
			system("pause");
			system("cls");
			goto School_information_management_system_interface;
		}

		case 4:
		{
			goto School_information_management_system_main_interface;
		}

		default:

			goto School_information_management_system_interface;
		}
	}

	case '5':
	{
		cout << "\n\t\t\t系统编号是为了方便查询" << endl;
		cout << "\n\t\t\t删除操作不可逆" << endl;
		cout << "\n\t\t\t不要在输入数字的地方输入文字" << endl;
		system("pause");
		system("cls");
		goto School_information_management_system_main_interface;
	}

	case '6':
	{
		cout << "\n\n\t\t输入文件路径：";   // D:\下载\桌面文件\测试.txt
		cin >> f1;
		ofile.open(f1);
		if (ofile.is_open())
		{
			ofile
				<< "|" << right << setw(20) << "系统编号" << "|"
				<< right << setw(20) << "学生学号" << "|"
				<< right << setw(20) << "学生姓名" << "|"
				<< right << setw(20) << "学生性别" << "|"
				<< right << setw(20) << "学生年龄" << "|"
				<< right << setw(20) << "学生班级" << "|"
				<< right << setw(20) << "学生学习能力评级" << "|\n";
			for (i = 0; i <= stu - 1; i++)  
			{
				ofile
					<< "|" << right << setw(20) << i + 1 << "|"
					<< right << setw(20) << stus[i].ID << "|"
					<< right << setw(20) << stus[i].name << "|"
					<< right << setw(20) << stus[i].Gender << "|"
					<< right << setw(20) << stus[i].age << "|"
					<< right << setw(20) << stus[i].Class_S << "|"
					<< right << setw(20) << stus[i].Learning_ability_rating << "|\n";
			}
			ofile << "\n\n";
			ofile
				<< "|" << right << setw(20) << "系统编号" << "|"
				<< right << setw(20) << "老师编号" << "|"
				<< right << setw(20) << "老师姓名" << "|"
				<< right << setw(20) << "老师性别" << "|"
				<< right << setw(20) << "老师年龄" << "|"
				<< right << setw(20) << "老师班级" << "|"
				<< right << setw(20) << "老师教书等级评级" << "|\n";
			for (i = 0; i <= tea - 1; i++)
			{
				ofile
					<< "|" << right << setw(20) << i + 1 << "|"
					<< right << setw(20) << teas[i].ID << "|"
					<< right << setw(20) << teas[i].name << "|"
					<< right << setw(20) << teas[i].Gender << "|"
					<< right << setw(20) << teas[i].age << "|"
					<< right << setw(20) << teas[i].Class_t << "|"
					<< right << setw(20) << teas[i].Teaching_grade_rating << "|\n" ;
			}
			ofile << "\n\n";
			ofile
				<< "|" << right << setw(20) << "系统编号" << "|"
				<< right << setw(20) << "班级名称" << "|"
				<< right << setw(20) << "班级人数" << "|"
				<< right << setw(20) << "班级评分等级" << "|\n";
			for (i = 0; i <= cla - 1; i++)
			{
				ofile
					<< "|" << right << setw(20) << i + 1 << "|"
					<< right << setw(20) << clas[i].name << "|"
					<< right << setw(20) << clas[i].Number_of_people << "|"
					<< right << setw(20) << clas[i].Rating_level << "|\n" ;
			}
			ofile << "\n\n";
			ofile << "|" << right << setw(20) << "学校名称" << "|"
				<< right << setw(20) << "学校位置" << "|"
				<< right << setw(20) << "学校校长" << "|"
				<< right << setw(20) << "学校学历等级" << "|\n";
			ofile << "|" << right << setw(20) << School_Information.name << "|"
				<< right << setw(20) << School_Information.Location << "|"
				<< right << setw(20) << School_Information.Principal << "|"
				<< right << setw(20) << School_Information.Level_of_education << "|\n";
			ofile 
			<< "\n\n"
			<< "该文件空间码为：\nk"<<stu<<"k"<<tea<<"k"<<cla<<"k"
			<<"\n空间码用于一键设定学生，老师，班级多少，在程序运行时输入即可"
		    <<"\n可直接在文件中存入数据然后程序读取，前提是不能增加行数且数据必须在两条|之间且|位置与标题对应";
		}
		else
		{
			cout << "\n\n\t\t文件无法打开\n\n";
		}
		cout << "\n\n\t\t文件已存入完成\n\n";
		ofile.close();
		system("pause");
		system("cls");
		goto School_information_management_system_main_interface;
	}

	case '7':
	{
		cout << "\n\n\t\t输入文件路径：";  // D:\下载\桌面文件\测试.txt
		cin >> f2;
		ifile.open(f2);
		if (ifile.is_open())
		{
			getline(ifile, caching);
			caching.clear();  // 清空字符串
			for (i = 0; i <= stu - 1; i++)
			{
				getline(ifile, caching);

				x1 = sf.strfindchar(caching, '|', 2) + 1;
				x2= sf.strfindchar(caching, '|', 3) -1;
				stus[i].ID.clear();
				stus[i].ID = "";
				for (j = x1; j <= x2; j++)
				{
					if(caching[j]!=' ') stus[i].ID += caching[j];
				}

				x1 = sf.strfindchar(caching, '|', 3) + 1;
				x2 = sf.strfindchar(caching, '|', 4) - 1;
				stus[i].name.clear();
				stus[i].name = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') stus[i].name += caching[j];
				}

				x1 = sf.strfindchar(caching, '|', 4) + 1;
				x2 = sf.strfindchar(caching, '|', 5) - 1;
				stus[i].Gender.clear();
				stus[i].Gender = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') stus[i].Gender += caching[j];
				}

				x1 = sf.strfindchar(caching, '|', 5) + 1;
				x2 = sf.strfindchar(caching, '|', 6) - 1;
				stus[i].age.clear();
				stus[i].age = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') stus[i].age += caching[j];
				}

				x1 = sf.strfindchar(caching, '|', 6) + 1;
				x2 = sf.strfindchar(caching, '|', 7) - 1;
				stus[i].Class_S.clear();
				stus[i].Class_S = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') stus[i].Class_S += caching[j];
				}

				x1 = sf.strfindchar(caching, '|', 7) + 1;
				x2 = sf.strfindchar(caching, '|', 8) - 1;
				stus[i].Learning_ability_rating.clear();
				stus[i].Learning_ability_rating = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') stus[i].Learning_ability_rating += caching[j];
				}

				caching.clear();  // 清空字符串

			}
			getline(ifile, caching);
			getline(ifile, caching);
			getline(ifile, caching);
			caching.clear();  // 清空字符串
			for (i = 0; i <= tea - 1; i++)
			{
				getline(ifile, caching);

				x1 = sf.strfindchar(caching, '|', 2) + 1;
				x2 = sf.strfindchar(caching, '|', 3) - 1;
				teas[i].ID.clear();
				teas[i].ID = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') teas[i].ID += caching[j];
				}

				x1 = sf.strfindchar(caching, '|', 3) + 1;
				x2 = sf.strfindchar(caching, '|', 4) - 1;
				teas[i].name.clear();
				teas[i].name = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') teas[i].name += caching[j];
				}
	
				x1 = sf.strfindchar(caching, '|', 4) + 1;
				x2 = sf.strfindchar(caching, '|', 5) - 1;
				teas[i].Gender.clear();
				teas[i].Gender = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') teas[i].Gender += caching[j];
				}
						
				x1 = sf.strfindchar(caching, '|', 5) + 1;
				x2 = sf.strfindchar(caching, '|', 6) - 1;
				teas[i].age.clear();
				teas[i].age = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') teas[i].age += caching[j];
				}
						
				x1 = sf.strfindchar(caching, '|', 6) + 1;
				x2 = sf.strfindchar(caching, '|', 7) - 1;
				teas[i].Class_t.clear();
				teas[i].Class_t = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') teas[i].Class_t += caching[j];
				}

				x1 = sf.strfindchar(caching, '|', 7) + 1;
				x2 = sf.strfindchar(caching, '|', 8) - 1;
				teas[i].Teaching_grade_rating.clear();
				teas[i].Teaching_grade_rating = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') teas[i].Teaching_grade_rating += caching[j];
				}

				caching.clear();  // 清空字符串
			}
			getline(ifile, caching);
			getline(ifile, caching);
			getline(ifile, caching);
			caching.clear();  // 清空字符串
			for (i = 0; i <= cla - 1; i++)
			{
				getline(ifile, caching);

				x1 = sf.strfindchar(caching, '|', 2) + 1;
				x2 = sf.strfindchar(caching, '|', 3) - 1;
				clas[i].name.clear();
				clas[i].name = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') clas[i].name += caching[j];
				}

				x1 = sf.strfindchar(caching, '|', 3) + 1;
				x2 = sf.strfindchar(caching, '|', 4) - 1;
				clas[i].Number_of_people.clear();
				clas[i].Number_of_people = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') clas[i].Number_of_people += caching[j];
				}

				x1 = sf.strfindchar(caching, '|', 4) + 1;
				x2 = sf.strfindchar(caching, '|', 5) - 1;
				clas[i].Rating_level.clear();
				clas[i].Rating_level = "";
				for (j = x1; j <= x2; j++)
				{
					if (caching[j] != ' ') 	clas[i].Rating_level += caching[j];
				}

				caching.clear();  // 清空字符串

			}
			getline(ifile, caching);
			getline(ifile, caching);
			getline(ifile, caching);
			caching.clear();  // 清空字符串
		
			getline(ifile, caching); 
			x1=sf.strfindchar(caching, '|', 1)+1;
			x2= sf.strfindchar(caching, '|', 2)-1;
			School_Information.name.clear();
			School_Information.name = "";
			for (j = x1; j <= x2; j++)
			{
				if (caching[j] != ' ') School_Information.name += caching[j];
			}
			x1 = sf.strfindchar(caching, '|', 2)+1;
			x2 = sf.strfindchar(caching, '|', 3)-1;
			School_Information.Location.clear();
			School_Information.Location = "";
			for (j = x1; j <= x2; j++)
			{
				if (caching[j] != ' ') School_Information.Location += caching[j];
			}

			x1 = sf.strfindchar(caching, '|', 3)+1;
			x2 = sf.strfindchar(caching, '|', 4)-1;
			School_Information.Principal.clear();
			School_Information.Principal = "";
			for (j = x1; j <= x2; j++)
			{
				if (caching[j] != ' ') School_Information.Principal += caching[j];
			}

			x1 = sf.strfindchar(caching, '|', 4)+1;
			x2 = sf.strfindchar(caching, '|', 5)-1;
			School_Information.Level_of_education.clear();
			School_Information.Level_of_education = "";
			for (j = x1; j <= x2; j++)
			{
				if (caching[j] != ' ') School_Information.Level_of_education += caching[j];
			}
				caching.clear();  // 清空字符串l 
		}
		else
		{
			cout << "\n\n\t\t文件无法打开\n\n";
		}
		cout << "\n\n\t\t文件数据已存入管理系统\n\n";
		ifile.close();
		system("pause");
		system("cls");
		goto School_information_management_system_main_interface;
	}

	default:
	{
		cout << "\n已退出\n";
	}

	}

    delete[] stus;
	delete[] teas;
	delete[] clas;

}

void Programs_11_through_20::Rock_paper_scissors_program()
{
	int Ai;
	int sr;
	exmath fun;
Rock_paper_scissors_program_begins:
	cout << "\n\n输入1出剪刀";
	cout << "\n\n输入2出石头";
	cout << "\n\n输入3出布";
	cout << "\n\n输入一个数:  ";
	cin >> sr;
	while (sr > 3 || sr < 1)
	{
		system("cls");
		cout << "\n\n只能输入1，2，3" << endl;
		system("pause");
		system("cls");
		goto Rock_paper_scissors_program_begins;
	}
	Ai = fun.exrad(1, 3);

	/*

	rand()%3+1就是随机 1到3  [m,n]m到n的随机数公式 rand()%(n-m+1)+m
	rand()%n就是随机0到n-1 rand()%n+1就是随机1到n

	*/
	cout << "\n\n";
	switch (sr)
	{
	case 1:
	{
		if (Ai == 1)
		{
			cout << "你平局，AI出剪刀";
		}

		if (Ai == 2)
		{
			cout << "你输了，AI出石头";
		}

		if (Ai == 3)
		{
			cout << "你赢了，AI出布";
		}
		break;
	}
	case 2:
	{
		if (Ai == 1)
		{
			cout << "你赢了，AI出剪刀";
		}

		if (Ai == 2)
		{
			cout << "你平局，AI出石头";
		}

		if (Ai == 3)
		{
			cout << "你输了，AI出布";
		}
		break;
	}
	case 3:
	{
		if (Ai == 1)
		{
			cout << "你输了，AI出剪刀";
		}

		if (Ai == 2)
		{
			cout << "你赢了，AI出石头";
		}

		if (Ai == 3)
		{
			cout << "你平局，AI出布";
		}
		break;
	}
	default:
		system("cls");
		cout << "\n\n出错";
		system("pause");
		break;
	}
}

void Programs_11_through_20::Question_guessing_program()
{
	int tmu;
	int i;
	int s;
	exmath fun;
The_guessing_program_begins:
	cout << "\n\n输入题目数量:  ";
	cin >> tmu;
	while (tmu <= 0)
	{
		system("cls");
		cout << "\n\n题目数量必须大于0" << endl;
		system("pause");
		system("cls");
		goto The_guessing_program_begins;
	}
	cout << "\n\n";
	for (i = 1; i <= tmu; i++)
	{
		s = fun.exrad(1, 4);

		if (s == 1)
		{
			cout << "第" << i << "道题选A";
		}

		if (s == 2)
		{
			cout << "第" << i << "道题选B";
		}

		if (s == 3)
		{
			cout << "第" << i << "道题选C";
		}

		if (s == 4)
		{
			cout << "第" << i << "道题选D";
		}
		cout << "\n\n";
	}

}

void Programs_11_through_20::Factorial_program()
{
	exmath function;
	long double  n;
	long double sum;
The_factorial_program_begins:
	cout << "\n\n输入阶乘数:  ";
	cin >> n;
	while (n < 0)
	{
		system("cls");
		cout << "\n\n阶乘数必须大于0" << endl;
		system("pause");
		system("cls");
		goto  The_factorial_program_begins;
	}
	sum = function.fac(n);
	cout << "\n\n";
	cout << n << "!=" << sum;

}

void Programs_11_through_20::Digit_separation()
{
	exmath fun;
	int i, g;
	long long m;
	cout << "\n\n\t\t输入一个数：";
	cin >> m;
	g = (int)(fun.dignum(m));
	cout << "\n\t\t输入的是" << g << "位数\n\n";
	for (i = 1; i <= g; i++)
	{
		cout << "\t\t从右往左第" << i << "位数是" << fun.digsep(m, i) << "\n\n";

	}
}

void Programs_11_through_20::gys_gbs_program()
{
	int a, b;
	exmath fun;
	cout << "\t\t输入两个数：";
	cin >> a >> b;
	cout << "\n\t\t最大公约数为" << fun.hcf(a, b);
	cout << "\n\n\t\t最小公倍数为" << fun.lcd(a, b);
}

void Programs_11_through_20::prnum_program()
{
	int d, z, i, count = 0;
	exmath fun;
	cout << "\t\t输入1判断输入数是否为素数\n\n";
	cout << "\t\t输入2输出小于等于输入数的素数\n\n";
	cout << "\t\t输入一个数：";
	cin >> z;
	system("cls");
	switch (z)
	{
	case 1:
	{
		cout << "\t\t输入一个数：";
		cin >> d;
		if (fun.prnum(d) == true)
		{
			cout << "\n\n\t\t" << d << "是素数\n\n";
		}
		else
		{
			cout << "\n\n\t\t" << d << "不是素数\n\n";
		}
		break;
	}
	case 2:
	{
		cout << "\t\t输入一个数：";
		cin >> d;
		cout << "\n\n";
		for (i = 2; i <= d; i++)
		{
			if (fun.prnum(i) == true)
			{
				cout << "\t\t" << i << "\n\n";
				count++;
			}
		}
		cout << "共有" << count << "个素数\n\n";
		break;
	}
	default:
	{
		cout << "\n输入错误\n\n";
	}
	}
}

void Programs_11_through_20::date_day()
{
	exdate fun;
	int yea, mon, da, daa = 0, i;
date_d:
	cout << "\n\n\t\t请输入年份，月份，天数：";
	cin >> yea >> mon >> da;
	if (fun.judate(yea, mon, da) == false)
	{
		system("cls");
		cout << "\n\n输入日期有误，请重新输入\n";
		system("pause");
		system("cls");
		goto date_d;
	}
	for (i = 1; i < mon; i++)
	{
		daa += fun.monday(yea, i);
	}
	cout << "\n\n\t\t" << yea << "年" << mon << "月" << da << "日是" << yea << "年的第" << daa + da << "天";
}

void Programs_11_through_20::cumuable()
{
	int x, y, i, j;
	cout << "\n\n\t\t请输入乘法表中最大相乘的两数：";
	cin >> x >> y;
	cout << "\n\n" << x << "x" << y << "乘法表：\n\n";
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << i << "x" << j << "=" << i * j << "   ";
		}
		cout << "\n";
	}

}

void Programs_11_through_20::variance()
{
	uisefun uf;
	int k, i;
	long double* kssy;
	long double hax, hin, hum , varce = 0, hver;
	cout << "\n\n\t\t输入要输入数据的个数：";
	cin >> k;
	kssy = new long double[k];
	cout << "\n\n\t\t输入数据：";
	k--;
	for (i = 0; i <= k; i++)
	{
		cin >> kssy[i];
	}
	k++;  // 加1恢复正常大小

	hax = uf.armax(kssy,k);
	hin = uf.armin(kssy, k);
	hum = uf.arsum(kssy, k);
	hver = uf.ararea(kssy, k);

	k--;  // 对应下面的n-1公式

	for (i = 0; i <= k; i++)
	{
		varce += pow(kssy[i] - hver, 2);
	}
	varce *= (1.0 / k);  //这里用的是n-1公式而不是n

	cout << "\n\n\t\t方差为" << varce;
	cout << "\n\n\t\t标准差为" << sqrt(varce);
	cout << "\n\n\t\t平均值为" << hver;
	cout << "\n\n\t\t最大值为" << hax;
	cout << "\n\n\t\t最小值为" << hin;
	cout << "\n\n\t\t极差为" <<hax-hin;
	delete[] kssy;
}

// 程序11到20结构

void Programs_11_through_20::Procedures_11_to_20_Prompt_words()
{
	cout << "\n\n输入1进入学校信息管理系统";
	cout << "\n\n输入2和AI玩石头剪刀布";
	cout << "\n\n输入3帮你猜题";
	cout << "\n\n输入4求输入数的阶乘";
	cout << "\n\n输入5对输入数进行数位分离";
	cout << "\n\n输入6计算两数最大公约数，最小公倍数";
	cout << "\n\n输入7判断是否为素数";
	cout << "\n\n输入8判断日期是一年的第几天";
	cout << "\n\n输入9输出自定义乘法表";
	cout << "\n\n输入10计算一组数据方差及常用数据";
	cout << "\n\n输入一个数:  ";
}

void Programs_11_through_20::Select_statement_2_level_11_to_20_programs()
{
	char z;
	int Number_of_programs;  //程序数
	int Start_over;          //开始
	int Program_group = 2;   //程序组数
Program_11_to_20_begins:
	Procedures_11_to_20_Prompt_words();
	cin >> z;
	system("cls");
Programs_11_to_20_are_selected:
	switch (z)
	{
	case '1':
	{
		School_Information_Management_System();
		Number_of_programs = 11;
		break;
	}
	case '2':
	{
		Rock_paper_scissors_program();
		Number_of_programs = 12;
		break;
	}
	case '3':
	{
		Question_guessing_program();
		Number_of_programs = 13;
		break;
	}
	case '4':
	{
		Factorial_program();
		Number_of_programs = 14;
		break;
	}
	case '5':
	{
		Digit_separation();
		Number_of_programs = 15;
		break;
	}
	case '6':
	{
		gys_gbs_program();
		Number_of_programs = 16;
		break;
	}
	case '7':
	{
		prnum_program();
		Number_of_programs = 17;
		break;
	}
	case '8':
	{
		date_day();
		Number_of_programs = 18;
		break;
	}
	case '9':
	{
		cumuable();
		Number_of_programs = 19;
		break;
	}
	case '10':
	{
		variance();
		Number_of_programs = 20;
		break;
	}
	default:
		cout << "\n\n出错";
		Number_of_programs = 0;
		break;
	}
	cout << "\n\n";
	system("pause");
	system("cls");
	if (Number_of_programs == 0)
	{
		cout << "输入1重新选择第" << Program_group << "号程序组中" << "要运行的程序\n" << endl;
		cout << "输入一个数：";
		cin >> Start_over;
		if (Start_over == 1)
		{
			system("cls");
			goto Program_11_to_20_begins;
		}
	}
	else
	{
		cout << "输入1重新运行第" << Number_of_programs << "号程序\n" << endl;
		cout << "输入一个数：";
		cin >> Start_over;
		if (Start_over == 1)
		{
			system("cls");
			goto Programs_11_to_20_are_selected;
		}
	}
}





// 程序21到30


void Programs_21_through_30::n_numb_Sorting()
{
	uisefun uf;
	int n,i,k;
	cout << "\n\n输入要输入的数字个数：";
	cin >> n;
	double* arry = new double[n];
	cout << "\n\n开始输入：";
	for (i = 0; i <= n - 1; i++)
		cin >> arry[i];
	cout << "\n\n输入0升序，输入其他降序：";
	cin >> k;
	uf.arss(arry, k,n);
	cout << "\n\n";
	for (i = 0; i <= n - 1; i++)
		cout << arry[i] << " \n\n";
	delete[] arry;
}

void Programs_21_through_30::decimal_to_arbitrary()
{
	exmath mf;
	long double su;
	long long zh;
	cout << "\n\n\t\t输入要转换的十进制数：";
	cin >> su;
jzzhsr:
	cout << "\n\n\t\t输入转换后的进制：";
	cin >> zh;
	if (zh <= 1)
	{
		system("cls");
		cout << "重新输入进制，不能小于1\n\n";
		system("pause");
		system("cls");
		cout << "\n\n\t\t转换数："<<su;
		goto jzzhsr;
	}
	cout<<"\n\n\t\t转换结果："<<mf.Decimal_Conversion(su, zh);
}

bool Programs_21_through_30::Combat_interface(Role& js1, Role& js2)
{
	exmath mf;
	int Round = 1;  // 回合
	long long Damage=0;    //  伤害
	cout <<"\n\n属性一览：\n\n";
	cout << "|" << right << setw(20) <<"属性" << "|" << right << setw(20) << js1.name << "|" << right << setw(20) << js2.name << "|" << "\n"
		<< "|" << right << setw(20) << "生命值：" << "|" << right << setw(20) <<js1.Life << "|" << right << setw(20)<<js2.Life << "|" << "\n"
		<< "|" << right << setw(20) << "攻击力：" << "|" << right << setw(20) << js1.Attack << "|" << right << setw(20) << js2.Attack << "|" << "\n"
		<< "|" << right << setw(20) << "（%）暴击率：" << "|" << right << setw(20) << js1.CriticalAttack << "|" << right << setw(20) << js2.CriticalAttack << "|" << "\n"
		<< "|" << right << setw(20) << "（%）闪避率：" << "|" << right << setw(20) << js1.Dodge  << "|" << right << setw(20) << js2.Dodge << "|" << "\n"
		<< "|" << right << setw(20) << "回合优先：" << "|" << right << setw(20) << js1.TurnFirst << "|" << right << setw(20) << js2.TurnFirst << "|" << "\n\n";
	system("pause");
	system("cls");
	cout << "\n\n战斗开始！\n\n";

tworzdjm:
	cout << "第" << Round << "回合：\n\n"
		<< "\n\n回合事件前属性一览：\n\n"
	 << "|" << right << setw(20) << "属性" << "|" << right << setw(20) << js1.name << "|" << right << setw(20) << js2.name << "|" << "\n"
		<< "|" << right << setw(20) << "生命值：" << "|" << right << setw(20) << js1.Life << "|" << right << setw(20) << js2.Life << "|" << "\n"
		<< "|" << right << setw(20) << "攻击力：" << "|" << right << setw(20) << js1.Attack << "|" << right << setw(20) << js2.Attack << "|" << "\n"
		<< "|" << right << setw(20) << "（%）暴击率：" << "|" << right << setw(20) << js1.CriticalAttack << "|" << right << setw(20) << js2.CriticalAttack << "|" << "\n"
		<< "|" << right << setw(20) << "（%）闪避率：" << "|" << right << setw(20) << js1.Dodge << "|" << right << setw(20) << js2.Dodge << "|"  << "\n\n";
	cout << "回合事件：\n\n";
	if (js1.TurnFirst==true)   // 角色1回合
	{
		if (mf.probab(js2.Dodge))
		{
			cout<<js1.name<<"攻击被"<<js2.name << "闪避了";
		}
		else
		{
			if (mf.probab(js1.CriticalAttack))
			{
				cout << js1.name << "打出了暴击！\n\n";
				Damage = js1.Attack * 2;
			}
			else
			{
				Damage = js1.Attack;
			}
			js2.Life -= Damage;
			cout << js1.name << "对" << js2.name<< "造成了" << Damage << "点伤害";
		}
		js1.TurnFirst = false;
		js2.TurnFirst = true;
		Round++;
	}
	else     // 角色2回合
	{
		if (mf.probab(js1.Dodge))
		{
			cout << js2.name << "攻击被"<< js1.name << "闪避了" ;
		}
		else
		{
			if (mf.probab(js2.CriticalAttack))
			{
				cout << js2.name << "打出了暴击！\n\n";
				Damage = js2.Attack * 2;
			}
			else
			{
				Damage = js2.Attack;
			}
			js1.Life -= Damage;
			cout << js2.name << "对" << js1.name << "造成了" << Damage << "点伤害";
		}
		js1.TurnFirst =  true;
		js2.TurnFirst =false;
		Round++;
	}
	cout<< "\n\n回合事件后属性一览：\n\n"
		<< "|" << right << setw(20) << "属性" << "|" << right << setw(20) << js1.name << "|" << right << setw(20) << js2.name << "|" << "\n"
		<< "|" << right << setw(20) << "生命值：" << "|" << right << setw(20) << js1.Life << "|" << right << setw(20) << js2.Life << "|" << "\n"
		<< "|" << right << setw(20) << "攻击力：" << "|" << right << setw(20) << js1.Attack << "|" << right << setw(20) << js2.Attack << "|" << "\n"
		<< "|" << right << setw(20) << "（%）暴击率：" << "|" << right << setw(20) << js1.CriticalAttack << "|" << right << setw(20) << js2.CriticalAttack << "|" << "\n"
		<< "|" << right << setw(20) << "（%）闪避率：" << "|" << right << setw(20) << js1.Dodge << "|" << right << setw(20) << js2.Dodge << "|"<< "\n\n";
	system("pause");
	system("cls");
	if (js2.Life <= 0)
	{
		system("cls");
		cout << js1.name << "打败了" << js2.name << "\n\n";
		system("pause");
		system("cls");
		return true;
	}
	if (js1.Life <= 0)
	{
		system("cls");
		cout << js2.name << "打败了" << js1.name << "\n\n";
		system("pause");
		system("cls");
		return false;
	}
	goto tworzdjm;	

	return true;   // 默认返回值
}

void Programs_21_through_30::Two_characters_battle_game()
{
	exmath mf0;
	Role t1, t2;
	char sr;
	long long Scope;   // 范围
	bool Victory;  // 猜测胜利
	bool Selection;   // 选择
	long double GoldCoin = 0;  // 金币数 
	long double GetGold = 0;  //  获得或减少金币
	cout << "\n\n\t\t输入角色1姓名：";
	cin >> t1.name;
	cout << "\n\n\t\t输入角色2姓名：";
	cin >> t2.name;
	system("pause");
	system("cls");
tworolrdzks:
	cout 
		<< "\n\n\t\t" << t1.name << "大战" << t2.name
		<< "\n\n\t\t输入0退出游戏"
		<< "\n\n\t\t输入1进入自定义属性战斗"
		<< "\n\n\t\t输入2进入随机属性战斗（可得金币）"
		<< "\n\n\t\t输入3查看金币数"
		<<"\n\n\t\t输入一个数：";
	cin >> sr;
	system("cls");
	switch (sr)
	{
	case '0':
	{
		break;
	}
	case '1': 
	{
		cout << "\n\n属性最大值为999999\n\n";
		cout << "\n\n输入" << t1.name <<"生命值：";
		cin >> t1.Life;
		cout << "\n\n输入" << t2.name << "生命值：";
		cin >> t2.Life;

		cout << "\n\n输入" << t1.name << "攻击力：";
		cin >> t1.Attack;
		cout << "\n\n输入" << t2.name << "攻击力：";
		cin >> t2.Attack;

		cout << "\n\n输入" << t1.name << "暴击率：";
		cin >> t1.CriticalAttack;
		cout << "\n\n输入" << t2.name << "暴击率：";
		cin >> t2.CriticalAttack;

		cout << "\n\n输入" << t1.name << "闪避率：";
		cin >> t1.Dodge;
		cout << "\n\n输入" << t2.name << "闪避率：";
		cin >> t2.Dodge;

		cout << "\n\n输入" << t1.name << "回合优先（非0先手，0后手）：";
		cin >> t1.TurnFirst;

		t2.TurnFirst =!t1.TurnFirst;

		// 最大值限制
		if (t1.Life >= 999999) t1.Life = 999999;
		if (t1.Attack >= 999999) t1.Attack = 999999;
		if (t1.CriticalAttack >= 90) t1.CriticalAttack = 90;
		if (t1.Dodge >= 85) t1.Dodge = 85;

		if (t2.Life >= 999999) t2.Life = 999999;
		if (t2.Attack >= 999999) t2.Attack = 999999;
		if (t2.CriticalAttack >= 90) t2.CriticalAttack = 90;
		if (t2.Dodge >= 85) t2.Dodge = 85;


		Combat_interface(t1, t2);

		goto tworolrdzks;
	}
	case '2':
	{
		cout << "\n\n属性最大值为999999\n\n";
		cout << "\n\n输入属性最大值：";
		cin>>Scope;

		// 值限制
		if (Scope >999999) Scope = 999999;

		t1.Life = mf0.exrad(1, Scope);
		t2.Life= mf0.exrad(1, Scope);
		t1.Attack= mf0.exrad(1, Scope);
		t2.Attack= mf0.exrad(1, Scope);
		t1.CriticalAttack= mf0.exrad(1, 90);
		t2.CriticalAttack= mf0.exrad(1, 90);
		t1.Dodge= mf0.exrad(1, 85);
		t2.Dodge= mf0.exrad(1, 85);
		t1.TurnFirst= mf0.exrad(0, 1);
		t2.TurnFirst = !t1.TurnFirst;
	
		
		cout << "\n\n输入你觉得能赢的角色"<<"（非0代表"<<t1.name<<"，0代表"<<t2.name<<"）：";
		cin >> Victory;

		// 金币强化机制
		if (GoldCoin > 100)
		{
			cout << "\n\n金币已大于100是否强化角色（非0代表是0代表否）：";
			cin >> Selection;
			if (Selection)
			{
				if (Victory)
				{
					cout << "\n\n花费100金币，已强化" << t1.name;
					t1.Life = Scope;
					t1.Attack = Scope;
					t1.CriticalAttack = 90;
					t1.Dodge = 85;
				}
				else
				{
					cout << "\n\n花费100金币，已强化" << t2.name;
					t2.Life = Scope;
					t2.Attack = Scope;
					t2.CriticalAttack = 90;
					t2.Dodge = 85;
				}
				GoldCoin -= 100;
			}
			else
			{
				cout << "\n\n未进行强化";
			}
		}
		else if (GoldCoin < 0)
		{
			if (Victory)
			{
				cout << "\n\n触发金币负数机制，已强化" << t1.name;
				t1.Life = t1.Life*1.3;
				t1.Attack = t1.Attack*1.3;
				t1.CriticalAttack = t1.CriticalAttack*1.3;
				t1.Dodge = t1.Dodge*1.3;
			}
			else
			{
				cout << "\n\n触发金币负数机制，已强化" << t2.name;
				t2.Life = t2.Life*1.3;
				t2.Attack = t2.Attack*1.3;
				t2.CriticalAttack = t2.CriticalAttack*1.3;
				t2.Dodge = t2.Dodge*1.3;
			}
		}


		// 平衡机制
        if (t2.Attack >= t1.Life)
		{
			cout << "\n\n触发平衡，" << t1.name << "生命值提升至" << t2.name << "攻击6倍且闪避率提升至75%";
			t1.Life = t2.Attack * 6;
			t1.Dodge = 75;
		}
		if (t1.Attack >= t2.Life)
		{
			cout << "\n\n触发平衡，" << t2.name << "生命值提升至" << t1.name << "攻击6倍且闪避率提升至75%";
			t2.Life = t1.Attack * 6;
			t2.Dodge = 75;
		}


		// 最大值限制
		if (t1.Life >= Scope) t1.Life = Scope;
		if (t1.Attack >= Scope) t1.Attack = Scope;
		if (t1.CriticalAttack >= 90) t1.CriticalAttack = 90;
		if (t1.Dodge >= 85) t1.Dodge= 85;

		if (t2.Life >= Scope) t2.Life = Scope;
		if (t2.Attack >= Scope) t2.Attack = Scope;
		if (t2.CriticalAttack >= 90) t2.CriticalAttack = 90;
		if (t2.Dodge >= 85) t2.Dodge = 85;


		// 猜角色赢
		if (Victory == Combat_interface(t1, t2))
		{
		GetGold = mf0.exrad(1, 100);

		if (Victory) cout << "\n\n猜测的是" << t1.name;
		else cout << "\n\n猜测的是" << t2.name;

		cout<<"\n\n猜测正确，获得"<<GetGold<<"个金币\n\n";
		GoldCoin += GetGold;
		}
		else
		{
			GetGold = mf0.exrad(1, 100);

			if (Victory) cout << "\n\n猜测的是" << t1.name;
			else cout << "\n\n猜测的是" << t2.name;

			cout << "\n\n猜测错误，减少" << GetGold << "个金币\n\n";
			GoldCoin -= GetGold;
		}
		system("pause");
		system("cls");
		goto tworolrdzks;
	}
	case '3':
	{
		cout << "\n\n金币数：" << GoldCoin<<"\n\n"
		<< "金币数大于100时可以强化角色至属性最大值（随机战）\n\n"
		<< "金币数小于0时猜角色获得30%属性强化（随机战）\n\n";
		system("pause");
		system("cls");
		goto tworolrdzks;
	}
	default:
	{
		cout << "\n\n输入错误，重新输入\n\n";
		system("pause");
		system("cls");
		goto tworolrdzks;
	}
		
	}
}

// 程序21到30结构

void Programs_21_through_30::Procedures_21_to_30_Prompt_words()
{
	cout << "\n\n输入1给n个数排序";
	cout << "\n\n输入2给十进制转换任意进制";
	cout << "\n\n输入3游玩回合制双人对战小游戏";
	cout << "\n\n输入一个数:  ";
}

void Programs_21_through_30::Select_statement_2_level_21_to_30_programs()
{
	char z;
	int Number_of_programs;  //程序数
	int Start_over;          //开始
	int Program_group = 3;   //程序组数
Program_21_to_30_begins:
	Procedures_21_to_30_Prompt_words();
	cin >> z;
	system("cls");
Programs_21_to_30_are_selected:
	switch (z)
	{
	case '1':
	{
		n_numb_Sorting();
		Number_of_programs = 21;
		break;
	}
	case '2':
	{
		decimal_to_arbitrary();
		Number_of_programs = 22;
		break;
	}
	case '3':
	{
		Two_characters_battle_game();
		Number_of_programs = 23;
		break;
	}
	case '4':
	{

		Number_of_programs = 24;
		break;
	}
	case '5':
	{
		Number_of_programs = 25;
		break;
	}
	case '6':
	{
		Number_of_programs = 26;
		break;
	}
	case '7':
	{
		Number_of_programs = 27;
		break;
	}
	case '8':
	{
		Number_of_programs = 28;
		break;
	}
	case '9':
	{
		Number_of_programs = 29;
		break;
	}
	case '10':
	{
		Number_of_programs = 30;
		break;
	}
	default:
		cout << "\n\n出错";
		Number_of_programs = 0;
		break;
	}
	cout << "\n\n";
	system("pause");
	system("cls");
	if (Number_of_programs == 0)
	{
		cout << "输入1重新选择第" << Program_group << "号程序组中" << "要运行的程序\n" << endl;
		cout << "输入一个数：";
		cin >> Start_over;
		if (Start_over == 1)
		{
			system("cls");
			goto Program_21_to_30_begins;
		}
	}
	else
	{
		cout << "输入1重新运行第" << Number_of_programs << "号程序\n" << endl;
		cout << "输入一个数：";
		cin >> Start_over;
		if (Start_over == 1)
		{
			system("cls");
			goto Programs_21_to_30_are_selected;
		}
	}



}




