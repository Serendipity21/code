#include<stdio.h>
int main ()
{
	long long c=1;
	int b=20;
	int d;
	while (b>=2)
	{
		d=b;
	    while (d>=2)
	    {
		    c*=d*(d-1);
		    d=d-2;
	    }
	    b=b-1;
	    c+=c;
    }
    printf ("%d",c);
	return 0;
}
