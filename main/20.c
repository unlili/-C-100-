#include<stdio.h>
#include<string.h>

/*
第20题 编写函数int fun(int lim,int aa[max]),
该函数的功能是求出小于或等于lim的所有素数并放在aa数组中，该函数返回所求的素数的个数。
*/
int isPrime(int m) {
	int i;
	for (i = 2; i < m; i++)
		if (m%i == 0) return 0;
	return 1;
}
int fun(int lim, int aa[]) {
	int i;
	int k = 0;//定义计数器
	for (i = 2; i <= lim; i++)
		if (isPrime(i)) {
			aa[k++] = i;
		}

	return k;
}

//int main() {
//	int aa[50];
//	int num = fun(100, aa);
//	printf("num=%d\n", num);
//	for (int *p = &aa[0]; p < aa + num; p++) {
//		printf("%d\n", *p);
//	}
//
//}