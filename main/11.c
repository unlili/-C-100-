/*
第11题 下列程序定义了n×n的二维数组，并在主函数中自动赋值。
请编写函数 fun(int a[][n]), 该函数的功能是：使数组左下半三角元素中的值全部置成0。
*/
//
#define N 3
void fun11(int a[][N],int n) {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j <= i; j++)
			a[i][j] = 0;
}


