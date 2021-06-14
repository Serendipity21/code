#include<stdio.h>
int main()
{
	char c1,c2,c3,c4,c5;
	scanf("%c %c %c %c %c",&c1,&c2,&c3,&c4,&c5);
	int a1,a2,a3,a4,a5;
	if (c1-4<97)
	{
		a1=22+c1;
		c1=a1+4;
    }
    if (c2-4<97)
    {
    	a2=22+c2;
    	c2=a2+4;
	}
	if (c3-4<97)
	{
		a3=22+c3;
		c3=a3+4;
	}
	if (c4-4<97)
	{
		a4=22+c4;
		c4=a4+4;
	}
	if (c5-4<97)
	{
		a5=22+c5;
		c5=a5+4;
	}
	printf("%c %c %c %c %c",c1-4,c2-4,c3-4,c4-4,c5-4);
	return 0;
}
