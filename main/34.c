/*
第34题 学生的记录由学号和成绩组成，n名学生的数据已在主函数中放入结构体数组s中，
请编写函数fun，它的功能使：把分数最高的学生数据放在h所指的数组中，
注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。
*/

#include<stdio.h>
struct Student
{
	int id;
	float score;
};

int fun34(struct Student s[],struct Student h[],int n)
{//n为学生数量，直接两遍遍历，最简单的
	int max=0, k=0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score > max) max = s[i].score;
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i].score == max) h[k++] = s[i];
	}
	return k;
}

