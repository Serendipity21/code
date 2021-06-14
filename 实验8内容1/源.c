#include<stdio.h>
void input(struct Student student[5]);
void average(struct Student student[5],double aver[3]);
int max(struct Student student[5]);

struct Student
{
	long number;
	char name[20];
	int score[3];
};

int main(void)
{
	struct Student student[5];
	double aver[3] = { 0 };
	input(student);
	average(student,aver);
	max(student);
	printf("3门课平均成绩分别为：\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%lf\n", aver[i]);
	}
	printf("最高分学生数据为\n");
	printf("学号：%ld\n", student[max(student)].number);
	printf("姓名：%s\n", student[max(student)].name);
	printf("分数：");
	for (int i = 0; i < 3; i++)
	{
		printf("%d\t", student[max(student)].score[i]);
	}
}

void input(struct Student student[5])
{
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%ld %s %d %d %d", &student[i].number, &student[i].name,21, &student[i].score[0], &student[i].score[1], &student[i].score[2]);
	}
	//student[0].number = 1; student[1].number = 2; student[2].number = 3; student[3].number = 4; student[4].number = 5;
	//student[0].name[0] = 'a'; student[1].name[0] = 'b'; student[2].name[0] = 'c'; student[3].name[0] = 'd'; student[4].name[0] = 'e';
	//student[0].name[1] = '\0'; student[1].name[1] = '\0'; student[2].name[1] = '\0'; student[3].name[1] = '\0'; student[4].name[1] = '\0';
	//student[0].score[0] = 60; student[0].score[1] = 70; student[0].score[2] = 80;
	//student[1].score[0] = 50; student[1].score[1] = 60; student[1].score[2] = 70;
	//student[2].score[0] = 80; student[2].score[1] = 90; student[2].score[2] = 90;
	//student[3].score[0] = 90; student[3].score[1] = 90; student[3].score[2] = 90;
	//student[4].score[0] = 20; student[4].score[1] = 30; student[4].score[2] = 70;
}

void average(struct Student student[5],double aver[3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			aver[i] = aver[i] + student[j].score[i];
		}
		aver[i] = aver[i] / 5;
	}
}


int max(struct Student student[5])
{
	double aver[5] = { 0 };
	int k = 0;
	int j;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			aver[i] = aver[i] + student[i].score[j];
		}
		aver[i] = aver[i] / 3;
	}
	for (int i = 0; i < 4; i++)
	{
		j = i + 1;
		if (aver[i] < aver[j])
		{
			k = j;
		}
	}
	return k;
}