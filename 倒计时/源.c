#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void color(short);
int main()
{
	int a;      //定义一个倒计时的时间变量  a(秒)
	printf("请输入要倒计时的时间:\n");
	scanf_s("%d", &a);      //用户输入所需要倒计时的时间 秒(s)
	system("color 14");//指定倒计时在运行时的颜色
	while (a >= 0)
	{
		system("cls");
		printf("%d", a);
		Sleep(1000);
		a = a - 1;
	}
	system("pause");
}


void color(short x)	//自定义函根据参数改变颜色 
{
	if (x >= 0 && x <= 15)//参数在0-15的范围颜色
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//只有一个参数，改变字体颜色 
	else//默认的颜色白色
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}