/*
第33题 假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：
使字符串中尾部的*号不得多于n个；若多于n个，则删除多于的*号；
若少于或等于n个，则什么也不做，字符串中间和前面的*号不删除。

*/
#include<string.h>
void fun(char *a, int n)
{
	int i = 0, k = 0;
	char *p, *t;
	p = t = a;
	/*
	wfqef******    4
	p
	t
	*/
	while (*t)
		t++;
	t--;
	while (*t == '*')
	{
		k++;//累加计算末尾'*'的个数
		t--;
	}
	t++;//t指向末尾第一个'*'

	if (k>n)
	{
		while (*p && p<t + n)
		{
			a[i++] = *p;
			p++;
		}
		a[i] = '\0';
	}
}