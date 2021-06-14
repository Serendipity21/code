#include<stdio.h>
#include<math.h>
double f(double x)
{
	return x * x;
}
int main()
{
	printf("求解f(x)的定积分，请输入a,b的值\n");
	double n, a, b, i, m, s1 = 0, s2 = 0, s;
	scanf_s("%lf %lf", &a, &b);
	double a1=a, a2=a;
	for (n = 1;; n++)
	{
		m = (b - a) / n;
		for (i = 1; i <= n; i++)
		{
			s = f(a1) * m;
			a1 = a1 + m;
			s1 = s1 + s;
		}
		m = (b - a) / (n + 1);
		for (i = 1; i <= n + 1; i++)
		{
			s = f(a2) * m;
			a2 = a2 + m;
			s2 = s2 + s;
		}
		if (fabs(s2 - s1) <= 1e-6)
			break;
		a1 = a;
		a2 = a;
		s1 = 0;
		s2 = 0;
	}
	printf("结果为%lf", s2);
	return 0;
}