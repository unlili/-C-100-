/*
第6题 请编写一个函数void fun(char a[],char[] b,int n),其功能是：
删除该字符串中指定下标后的所有字符。
其中，a指向原字符串，删除后的字符串存放在b所指的数组中，n中存放指定的下标。

*/
#include<string.h>
#include<stdio.h>
void fun6(char a[], char b[], int n)
{
	int i, j = 0, len = strlen(a);

	for (i = 0; i<len; i++)
		if (i >= (n - 1)) {
			b[j++] = a[i];
		}
	a[n - 1] = '\0';
	b[j] = '\0';

}