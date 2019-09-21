/*
第43题 编写一个函数，从传入的num个字符串中找出一个最长的一个字符串，
并通过形参指针max传回该串地址(用****作为结束输入的标志)。

*/

char *fun(char (*a)[81], int num)
{
	int i;
	char *max;
	max = a[0];
	for (i = 0; i<num; i++)
		if (strlen(max)<strlen(a))
			max = a;
	return max;
}