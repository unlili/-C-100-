/*
题目有问题
第3题 请编写函数void fun(int x,int pp[],int *n),
它的功能是：求出1到1000能整除x且不是偶数的各整数，并按从小到大的顺序放在pp所指的数组中，这些除数的个数通过形参n返回。

*/

void fun3(int x, int pp[], int *n) {
	int i, number=0;

	for (i = 1; i <= 1000; i++) {
		if (i%x == 0 && i % 2 != 0)
			pp[number++] = i;
	}
	//冒泡排序
	*n = number;

}

