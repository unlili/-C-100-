/*
第38题 请编写函数fun，它的功能是：求出ss所指字符串中指定字符的个数，并返回此值。

*/



int fun38(char *ch, char c)
{
	int count=0;
	char *p = ch;
	while (*p)
	{
		if (*p == c) count++;
		p++;
	}
	return count;
}