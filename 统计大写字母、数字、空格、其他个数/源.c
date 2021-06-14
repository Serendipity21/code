#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	char ch;
	ch = getchar();
	while (ch != '\n')
	{
		if (ch == ' ')
			a++;
		else if (ch >= 'a' && ch <= 'z')
			b++;
		else if (ch >= 'A' && ch <= 'Z')
			e++;
		else if (ch >= '0' && ch <= '9')
			c++;
		else d++;
		ch = getchar();
	}
	printf("大写字母为%d\n", e);
	printf("小写字母为%d\n", b);
	printf("数字为%d\n", c);
	printf("空格为%d\n", a);
	printf("其他为%d\n", d);
	return 0;
}