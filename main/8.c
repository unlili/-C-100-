/*
第8题 编写函数fun,功能是：根据以下攻势计算s,计算结果作为函数值返回；
n通过形参传入。S=1+1/(1+2)+1/(1+2+3)+…….+1/(1+2+3+4+……+n)
*/
#include<stdio.h>

int add(int n) {
	//计算1累加到n
	int sum = 0, i;
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}
// 1 + 1/3 + 1/6
float fun88(int n) {
	int i;
	float sum = 0;
	for (i = 1; i <= n; i++) 
		sum += (1 / (float)add(i) );
	return sum;
}


//下面是标准答案，时间复杂度O(n)  上面时间复杂度O(n)*O(1~n)
float fun8(int n)
{
	int i;
	float s = 1.0, t = 1.0;
	for (i = 2; i<= n; i++)
	{
		t += i;
		s += 1 / t;
	}
	return s;
}