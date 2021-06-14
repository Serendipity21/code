#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	system("shutdown -s -t 5");
	int a = 5;
	system("color 17");
	while (a >= 0)
	{
		system("cls");
		printf("%d", a);
		Sleep(1000);
		a = a - 1;
	}
	system("pause");
	return 0;
}