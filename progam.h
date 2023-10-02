


// 唯一编译宏命令
#pragma once


// 函数头文件
#include"funs.h"

// C++显示
#include<iostream>   // 输入输出
#include<iomanip>  // 显示格式

// 使用输入输出命名空间  
using std::cout;
using std::cin;
using std::endl;

// 使用输入格式命名空间
using std::right;
using std::left;
using std::internal;
using std::setw;
using std::setfill;
using std::setprecision;
using std::boolalpha;
using std::noboolalpha;
using std::showbase;
using std::noshowbase;
using std::showpoint;
using std::noshowpoint;
using std::showpos;
using std::noshowpos;
using std::uppercase;
using std::nouppercase;
using std::fixed;
using std::scientific;
using std::hex;
using std::dec;
using std::oct;

// C++文件
#include<fstream>  // 文件输入输出

// 使用文件输入输出命名空间
using std::ifstream;
using std::ofstream;
using std::getline;



// 程序主要部分
class Main_part_of_program
{

private:

	struct Login_Information
	{
		string User_name;   //用户名
		string Password; //密码
		string verification_User_name; //验证用户名
		string verification_Password; //验证密码
	};


	// 功能提示语
	void Function_Prompt();

	// 选择语句1级程序
	void Select_the_statement_1_level_program();

public:

	// 调用
	void call();



};



// 程序1到10
class Programs_1_through_10
{

private:

	// 程序1 两点中点和距离程序
	void Two_point_midpoint_and_distance_procedure();

	// 程序2 判断直线位置关系程序
	void Determine_the_line_position_relationship_procedure();

	// 程序3 计算两平行线距离程序
	void Procedure_for_calculating_the_distance_between_two_parallel_lines();

	// 程序4 解一元二次方程程序
	void Program_for_solving_quadratic_equations_of_one_variable();

	// 程序5 求点到直线距离程序
	void The_procedure_for_finding_the_distance_from_a_point_to_a_line();

	// 程序6 判断直线与圆位置关系程序
	void Determine_the_line_and_circle_position_relationship_procedure();

	// 程序7 输入长和宽打印四边形程序
	void Enter_long_and_wide_print_quadrilateral_programs();

	// 程序8 打印爱心程序
	void Print_care_program();

	// 程序9 了解Ascll码特定范围字符属性程序
	void Understand_the_Ascll_code_specific_range_character_property_program();

	// 程序10 斐波那契数列程序
	void The_Fibonacci_program();

	// 程序1到10结构
	// 程序1到10提示语
	void Procedures_1_to_10_Prompt_words();

public:

	// 选择语句2级1到10程序
	void Select_statement_2_level_1_to_10_programs();
};

// 程序11到20
class Programs_11_through_20
{

private:

	// 学生
	struct Student_str
	{

		string ID;  //学号
		string name; //姓名
		string Gender; //性别
		string age;  //年龄
		string Class_S; //班级 
		string Learning_ability_rating;  //学习能力评级 A,B,C,D,E 五个等级

	};

	// 老师
	struct Teacher_str
	{

		string ID; //编号
		string name; //姓名
		string Gender; //性别
		string age; //年龄 
		string Class_t; //班级
		string Teaching_grade_rating;  //教书等级评级 A,B,C,D,E 五个等级

	};

	//  班级
	struct Class_str
	{

		string name; //名称
		string Number_of_people; //人数 
		string Rating_level;   // 评分等级 A,B,C,D,E 五个等级

	};

	// 学校
	struct School_str
	{

		string name; //名称 
		string Location; //位置
		string Principal; //校长 
		string Level_of_education;  // 学历等级 本科 大专 高中 初中 小学 幼儿园

	};


	// 程序11 学校信息管理系统
	void School_Information_Management_System();

	// 程序12 石头剪刀布程序
	void Rock_paper_scissors_program();

	// 程序13 猜题程序
	void Question_guessing_program();

	// 程序14 阶乘程序
	void Factorial_program();

	// 程序15 数位分离程序
	void Digit_separation();

	// 程序16 最大公约数 最小公倍数
	void gys_gbs_program();

	// 程序17 判断素数
	void prnum_program();

	// 程序18 日期对应一年第几天
	void date_day();

	// 程序19 自定义乘法表
	void cumuable();

	// 程序20 计算一组数据方差
	void variance();

	// 程序11到20结构
	// 程序11到20提示语
	void Procedures_11_to_20_Prompt_words();

public:

	// 选择语句2级11到20程序
	void Select_statement_2_level_11_to_20_programs();

};

// 程序21到30
class Programs_21_through_30
{

private:

	// 程序21 输入n个数排序
	void n_numb_Sorting();

	// 程序22 十进制转换任意进制
	void decimal_to_arbitrary();

	struct Role   // 角色结构体
	{
		string name;   // 姓名
		long long Life;   // 生命
		long long Attack;   // 攻击
		int CriticalAttack;  // 暴击
		int Dodge;   // 闪避
		bool TurnFirst;   // 回合优先
     };

	 // 战斗界面 角色1赢了返回true 角色2赢了返回false
	bool Combat_interface(Role &js1,Role &js2); 
	
	// 程序23 两角色大战游戏
	void Two_characters_battle_game();

	// 程序21到30结构
	// 程序21到30提示语
	void Procedures_21_to_30_Prompt_words();

public:

	// 选择语句2级21到30程序
	void Select_statement_2_level_21_to_30_programs();
};

