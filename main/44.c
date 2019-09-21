/*
第44题 编写一个函数，该函数可以统计一个长度为2的字符串在另一个字符串中出现的次数。
*/

int fun44(char *str, char *ch)
{
	//统计str中 ch出现的个数
	char *p = str;
	int k = 0;
	/*  fqefwqefaaqewf   aa
	p
	*/
	int len = strlen(str);
	for (char *p = str; p < str + len; p += 2)
		if (p[0] == ch[0])
			if (p[1] == ch[1]) {
				k++;
			}

	return k;
}