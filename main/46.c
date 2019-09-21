/*
第46题 学生的记录由学号和成绩组称个，n名大学生得数据已在主函数中放入结构体数组s中，
请编写函数fun，它的功能时：按分数的高低排列学生的记录，高分在前
*/
#define N 10
struct student
{
	int id;
	float score;
};

struct student s[N];

void fun(struct student s[],int len)
{
	struct student temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (s[j].score < s[j + 1].score)
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = s[j];

			}
		}
	}
}
