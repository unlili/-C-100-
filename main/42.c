/*
第42题 下列程序定义了n×n的二维数组，
并在主函数中自动赋值。请编写函数fun(int a[][n],int n),
该函数的功能是：将数组右上半三角元素中的值乘以m。

*/

#define N 20
void fun(int a[][N], int m)
{/*
 1 2 3   1 2m 3m
 4 5 6   4 5  6m   
 7 8 9   7 8  9
 
 
 */
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			if (i < j) a[i][j] *= m;
		}

}