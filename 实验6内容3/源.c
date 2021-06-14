#include<stdio.h>
#include<string.h>
void average(double x[10][5], double averange1[10]);
void ever(double score[10][5], double average2[5]);
double max(double score[10][5]);
int main(void)
{
	double average1[10] = { 0 };
	double average2[5] = { 0 };
	double score[10][5];
	//double score[10][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
	for (int i = 0; i <= 9; i++)
	{
		for (int f = 0; f <= 4; f++)
		{
			scanf_s("%lf", &score[i][f]);
		}
	}
	average(score,average1);
	ever(score, average2);
	max(score);
}
void average(double score[10][5], double average1[10])
{
	for (int i = 0; i <= 9; i++)
	{
		for (int f = 0; f <= 4; f++)
			average1[i] = average1[i] + score[i][f];
	}
	for (int i = 0; i <= 9; i++)
		average1[i] = average1[i] / 5;
	printf("每个学生的平均分为\n");
	for (int i = 0; i <= 9; i++)
		printf("%lf\n", average1[i]);
}
void ever(double score[10][5], double average2[5])
{
	for (int f = 0; f <= 4; f++)
	{
		for (int i = 0; i <= 9; i++)
			average2[f] = average2[f]+score[i][f];
	}
	for (int i = 0; i <= 4; i++)
		average2[i] = average2[i] / 10;
	printf("每个学科的平均分为\n");
	for (int i = 0; i <= 4; i++)
		printf("%lf\n", average2[i]);
}
double max(double score[10][5])
{
	int max1 = score[0][0], buf1 = 1, buf2 = 1;
	for (int i = 0; i <= 9; i++)
	{
		for (int f = 0; f <= 4; f++)
		{
			if (max1 <= score[i][f])
			{
				max1 = score[i][f];
				buf1 = i + 1;
				buf2 = f + 1;
			}
		}
	}
	printf("最高分数对应的学生为%d\n", buf1);
	printf("课程为%d\n",buf2);
}