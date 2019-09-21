/*
第12题 下列程序定义了n×n的二维数组，并在主函数中赋值。
请编写函数fun, 函数的功能使求出数组周边元素的平均值并作为函数值返回给主函数中的s。
*/
#define N 3
float fun12(int a[][N],int n) {
	//时间复杂度O(n^2)
	int sum=0, i, j,k=0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) 
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
				sum += a[i][j];
				k++;
			}
				
	return sum / k;
}


double fun(int w[][N])
{//时间复杂度O(4n)
	int i, j, k = 0;
	double s = 0.0;

	for (j = 0; j<N; j++)
	{
		s += w[0][j];
		k++;
	}

	for (j = 0; j<N; j++)
	{
		s += w[N - 1][j];
		k++;
	}
	for (i = 1; i<= N - 2; i++)
	{
		s += w[i][0];
		k++;
	}
	for (i = 1; i<= N - 2; i++)
	{
		s += w[i][N - 1];
		k++;
	}
	return s /= k;
}
