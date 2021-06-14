#include<stdio.h>
int main()
{
	int max(int x ,int y,int z);
	int a,b,c,d;
	scanf ("%d,%d,%d",&a,&b,&c);
	d=max(a,b,c);
	printf("max=%d",d);
}
int max(int x,int y,int z)
{
	int n;
	if (x>y)n=x;
	else n=y;
	if (n>z)n=n ;
	else n=z;
	return n;
	}
