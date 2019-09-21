/*
第32题 请编写函数fun，其功能是：
将s所指字符串中除了下标为奇数、同时ascii值也为奇数的字符之外，
其余的所有字符都删除，串中剩余字符所形成的一个新串放在t所指的一个数组中。

*/

#include<string.h>
void fun(char *ch, char t[])
{
	int len = strlen(ch), k = 0;
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 1 || ch[i] % 2 == 1)
		{
			t[k++] = ch[i];
		}
	}
}