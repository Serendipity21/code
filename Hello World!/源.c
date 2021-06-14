#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
	char *str;
	getline(&str);
	for (int i = strlen(str) - 1; i >= 0; --i) {
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}