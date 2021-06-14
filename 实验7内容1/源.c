#include<stdio.h>
int max(int* p1, int* p2, int* p3);
int swap(int* buf1, int* buf2);
int main(void)
{
	int a, b, c, * p1, * p2, * p3;
	scanf_s("%d %d %d", &a, &b, &c);
	p1 = &a, p2 = &b; p3 = &c;
	max(p1, p2, p3);
	printf("%d %d %d", a, b, c);
	return 0;
}
int max(int* p1, int* p2, int* p3)
{
	if (*p1 > * p2)
		swap(p1, p2);
	if (*p1 > * p3)
		swap(p1, p3);
	if (*p2 > * p3)
		swap(p2, p3);
}
int swap(int* buf1, int* buf2)
{
	int buf;
	buf = *buf1;
	*buf1 = *buf2;
	*buf2 = buf;
}