#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
	long number;
	char name[20];
	char sex;
	int age;
	struct Student* next;
};
int main(void)
{
	int n = 0;
	int a;
	int input;
	struct Student* head;
	struct Student* p1, * p2;
	p1 = p2 = (struct Student*)malloc(LEN);
	head = NULL;
	scanf_s("%d", &input);
	while (input != 0)
	{
		p1->number = input;
		scanf_s("%s %c %d",&p1->name, 21, &p1->sex, 1, &p1->age);
		n++;
		if (n == 1)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;  //p2指向当前链表的末尾
		}
		p2 = p1;
		p1 = (struct Student*)malloc(LEN);
		scanf_s("%d", &input);
	}
	p2->next = NULL;
	scanf_s("%d", &a);
	struct Student* p;
	struct Student* prev = head;
	for (p = head; p->next != NULL; p = p->next)
	{
		if (head->age == a)
		{
			head = head->next;
		}
		if (p->age != a)
		{
			prev = p;
		}
		else
		{
			prev->next = p->next;
		}
	}
	p = head;
	if (head != NULL)
	{
		do
		{
			printf("%ld %s %c %d\n", p->number, p->name, p->sex, p->age);
			p = p->next;
		} while (p != NULL);
	}
	return 0;
}