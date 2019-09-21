/*
第35题 请编写一个函数，用来删除字符串中的所有空格。
*/
#include<string.h>
void fun(char *ch)
{
	int len = strlen(ch);
	char *chc = ch;
	int k=0;
	for (int i = 0; i < len; i++)
	{
		if (ch[i] != ' ') chc[k++] = ch[i];
	}
	chc[k] = '\0';
	ch = chc;
}