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
	n = x>y?x:y;
	n = z>n?z:n;
	return n;	  
	}
