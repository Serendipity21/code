#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void color(short);
int main()
{
	int a;      //����һ������ʱ��ʱ�����  a(��)
	printf("������Ҫ����ʱ��ʱ��:\n");
	scanf_s("%d", &a);      //�û���������Ҫ����ʱ��ʱ�� ��(s)
	system("color 14");//ָ������ʱ������ʱ����ɫ
	while (a >= 0)
	{
		system("cls");
		printf("%d", a);
		Sleep(1000);
		a = a - 1;
	}
	system("pause");
}


void color(short x)	//�Զ��庯���ݲ����ı���ɫ 
{
	if (x >= 0 && x <= 15)//������0-15�ķ�Χ��ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//ֻ��һ���������ı�������ɫ 
	else//Ĭ�ϵ���ɫ��ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}