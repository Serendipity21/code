#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char ch;
	ch = getchar();
	while (ch != '\n')
	{
		if (ch == ' ')
			a++;
		else if (ch >= 'a' && ch <= 'z')
			b++;
		else if (ch >= 'A' && ch <= 'Z')
			b++;
		else if (ch >= '0' && ch <= '9')
			c++;
		else d++;
		ch = getchar();
	}
	printf("��ĸΪ%d\n", b);
	printf("����Ϊ%d\n", c);
	printf("�ո�Ϊ%d\n", a);
	printf("����Ϊ%d\n", d);
	return 0;
}