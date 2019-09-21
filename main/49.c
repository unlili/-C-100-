/*
第49题 请编写函数fun，其功能是：
将s所指字符串中下标 为偶数同时ascii值为奇数的字符删除，
s中剩余的字符形成的新串放在t所指的数组中。
*/

void fun(char *str, char t[])
{
	int len = strlen(str);
	int k = 0;
	for (int i = 0; i<len; i++)
	{
		if (i % 2 == 0 && str[i] % 2 == 1) continue;
		t[k++] = str[i];
	}
	t[k] = '\0';
}