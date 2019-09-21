/*
第27题 请编写一个函数fun,它的功能是：
求除1到m之内(含m)能被7或11整除的所有整数放在数组a中，通过n返回这些数的个数。
*/

int fun27(int a[], int m)
{
	int i;
	int k = 0;
	for (i = 7; i <= m; i++)
	{
		if (i % 7 == 0 || i % 11 == 0)
		{
			a[k++] = i;
		}
	}
	return k;
}