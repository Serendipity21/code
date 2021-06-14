#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int x;
    void pkey(char* p, char* q, int n);
    scanf_s("%d", &x);
    getchar();
    gets(str1);
    pkey(str1, str2, x);
    puts(str2);
    return 0;
}
void pkey(char* p, char* q, int n)
{
    while (*p != 0)
    {
        if ('a' < *p && *p < 'z' && *p + n>'z')
            *q = (*p + n) - 26;
        if ('a' < *p && *p < 'z')
            *q = *p + n;
        if (*p < 'a' || *p>'z')
            *q = *p;
        p++;
        q++;
    }
    *q = '\0';
}