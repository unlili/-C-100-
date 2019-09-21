/*
第31题 请编写函数fun，其功能是：
将s所指字符串中除了下标为偶数、同时ascii值也为偶数的字符外，其余的全都删除；
串中剩余字符所形成的一个新串放在t所指的一个数组中。
*/
#include<string.h>
void fun(char *ch, char t[])
{
	int len = strlen(ch),k=0;
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0 || ch[i] % 2 == 0)
		{
			t[k++] = ch[i];
		}
	}
}