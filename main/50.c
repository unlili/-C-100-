/*
第50题 已知学生的记录是由学号和学习成绩构成，
n名学生的数据已存入a结构体数组中。
请编写函数fun，该函数的功能是：找出成绩最高的学生记录，通过形参返回主函数(规定只有一个最高分)。

*/

#define N 10
struct student
{
	int id;
	float score;
};

struct student s[N];

struct student fun(struct student s[],int n)
{
	int max = 0;
	struct student temp;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score > max)
			max = s[i].score;
			temp = s[i];
	}
	return temp;
}