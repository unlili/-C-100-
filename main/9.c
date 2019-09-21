/*
第9题 编写一个函数fun，它的功能是：根据以下公式求p的值，结果由函数值带回。
M与n为两个正整数，且要求m>n。 p=m!/n!(m-n)!
54321
120/2*6
factorial   阶乘；因子
*/
#include<stdio.h>
#define cnm 0

int factorial(int n) {
	int y = 1;
	for (int i = 1; i <= n; i++) 
		y *= i;
	return y;
}

float fun9(int m,int n) {
	if (m > n) {
		float a = (float)factorial(m);
		float b = (float)factorial(n);
		float c = (float)factorial(m - n);
		return a / b*c;
	}
	else {
		return cnm;
	}

}

