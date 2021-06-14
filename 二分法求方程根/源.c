#include<stdio.h>
double abs(double x)
{
	if (x < 0)
		x = -x;
	return x;
}
double y(double x)
{
	return 2*x * x * x - 4 * x * x + 3 * x - 6;
}
int main()
{
	double a, b, c;
	a = -10.0;
	b = 10.0;
	if (y(-10) * y(10) < 1e-11)
	{
		c = (a + b) / 2;
		while (abs(y(c)) > 1e-11)
		{
			if (y(c) * y(a) < 0)
			{
				b = c;
				c = (a + c) / 2;
				//b = (a + b) / 2;
			}
			else if (y(c) * y(b) < 0)
			{
				a = c;
				c = (b + c) / 2;
				//a = (a + b) / 2;
			}
		}
		printf("方程在（-10，10）的根为%lf", c);
	}
	else printf("方程在（-10，10）无实根");
	return 0;
}
