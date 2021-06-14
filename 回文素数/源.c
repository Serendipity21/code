#include<stdio.h>
#include<math.h>
main()
{
	int i, j, m = 0, p[20] = { 0 }, q = 0;
	for (i = 10; i <= 1000; i++)
	{
		m = 0;
		for (j = 2; j <= sqrt(i); j++)
			if (i % j == 0)
				m = 1;
		if (m != 1 && ((i % 10 == i / 100 && i / 1000 == 0 && i / 100 != 0) || (i % 10 == i / 10 && i / 100 == 0 && i / 10 != 0)))
		{
			p[q] = i;
			q++;
		}
	}
	for (q = 0; p[q] != 0; q++)
		printf("%d ", p[q]);
}