/*
第30题 请编写一个函数fun，它的功能是：
求除一个2×m整型二维数组中最大元素的值，并将此值返回调用函数。
1普通遍历
2指针遍历
*/
#define M 4
fun(int a[][M])
{
	int i, j, max = a[0][0];
	for (i = 0; i < 2; i++)
		for (j = 0; j < M; j++)
			if (max < a[i][j])
				max = a[i][j]; /*求出二维数组的最大值*/
	return max;
}