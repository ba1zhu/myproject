#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"include.h"
int menu()
{
	int x;
	printf("\033[35m");
	printf("┏┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┓\n");
	printf("┣           ");
	printf("\033[32m");
	printf("学生选课系统");
	printf("\033[35m");
	printf("            ┫\n");
	printf("┗┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┛\n");
	printf("┏┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┳┓\n");
	printf("┣          1.学生信息管理           ┫\n");
	printf("┣          2.可选课程管理           ┫\n");
	printf("┣          3.退出系统               ┫\n");
	printf("┗┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┻┛\n");
	printf("请输入选项:");
	scanf("%d",&x);
	switch(x)
	{
		case 1 : printf("\033[2J");rens=stu1();printf("\033[2J");menu();break;
		case 2 : printf("\033[2J");kecs=cla1();printf("\033[2J");menu();break;
		case 3 : printf("系统退出！\n");printf("\033[0m");return 0;
		
	}
}
int main()
{
	menu();
	printf("\033[0m");
}
