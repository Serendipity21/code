#include<stdio.h>
#include<string.h>
void max(char a[1000], char b[1000], char c[1000]);
void swap(char* buf1, char* buf2);
int main(void)
{
	char a[1000], b[1000], c[1000];
	scanf_s("%s %s %s", a,sizeof(a), b,sizeof(b), c,sizeof(c));
	max(a, b, c);
	printf("%s %s %s", a, b, c);
	return 0;
}
void max(char a[1000], char b[1000], char c[1000])
{
	if (strcmp(a, b) > 0)
		swap(a, b);
	if (strcmp(a, c) > 0)
		swap(a, c);
	if (strcmp(b, c) > 0)
		swap(b, c);
}
void swap(char* buf1, char* buf2)
{
	char buf[1000];
	strcpy_s(buf, 1000, buf1);
	strcpy_s(buf1, 1000, buf2);
	strcpy_s(buf2, 1000, buf);
}