#include<stdio.h>
#include<math.h>
int main(void)
{
	float n;
	scanf_s("%f", &n);
	n = ceil(n);
	printf("%f", n);
	return 0;
}