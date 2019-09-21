/*
第21题 请编写函数fun,对长度为7个字符的字符串，
除首尾字符外，将其余5个字符按ascii码降序排列。

修改后：对任意长度的字符串保留首尾字符，其余按ascii码降序排序；
*/
#include<string.h>
void fun(char *p) {
	int len = strlen(p);
	/*	a    dgcb   g
	1 2 3
	6-2 = 4
	*/
	int i, j;
	char temp;
	for (i = 1; i < len - 2; i++)
		for (j = 1; j < len - 1 - i; j++)
			if (p[j] < p[j + 1]) {
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
}