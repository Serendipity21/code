#include<stdio.h>
void statistics(char[1000]);
int main(void)
{
	char input[1000];
	scanf_s("%[^\n]", input, sizeof(input));
	statistics(input);
	return 0;
}
void statistics(char z[1000])
{
	int a = 0, c = 0, d = 0, e = 0;
	for (int i = 0; z[i] != '\0'; i++)
	{
		if (z[i] == ' ')
			a++;
		else if (z[i] >= 'a' && z[i] <= 'z')
			e++;
		else if (z[i] >= 'A' && z[i] <= 'Z')
			e++;
		else if (z[i] >= '0' && z[i] <= '9')
			c++;
		else d++;
	}
	printf("��ĸΪ%d\n", e);
	printf("����Ϊ%d\n", c);
	printf("�ո�Ϊ%d\n", a);
	printf("����Ϊ%d\n", d);
	return ;
}