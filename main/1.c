#include<stdio.h>

/*
由于计算机二级编程题并不是很难，所以有的题就没写最优解，而是最简单的解，快速刷题才是王道....主要是懒
好像有好几道是错的，不过就这样吧
明天考计算机二级..............2019年9月20日18:04:34  ---
*/


/*
第1题 m个人的成绩存放在score数组中，请编写函数fun,它的功能是：将低于平均分的人数作为函数值返回，
将低于平均分的分数放在below所指定的函数中。
*/

int fun1(int score[], int m, int below[])
{
	int i, k = 0, aver = 0;

	//遍历score数组计算成绩总和

	for (i = 0; i<m; i++)
		aver += score[i];

	aver /= m;//求平均分

	for (i = 0; i<m; i++)
		if (score[i]<aver)
		{
			below[k] = score[i];
			k++;
		}
	return k;
}




