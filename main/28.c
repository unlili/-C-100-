/*
第28题 请编写一个函数fun，它的功能是：
找出一维整型数组元素中最大的值和它所在的下标，最大的值和它所在的下标通过形参传回。
数组元素中的值已在主函数中赋予。
主函数中x是数组名，n 是x中的数据个数，max存放最大值，index存放最大值所在元素的下标。*/

void fun28(int x[], int n, int *max, int *index)
{
	int i;
	int imax = 0, iindex;
	for (i = 0; i < n; i++)
	{
		if (x[i]>imax)
		{
			imax = x[i];
			iindex = i;
		}
	}
	*(int*)max = imax;
	*(int*)index = iindex;
}