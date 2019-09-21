/*
第23题 请编写函数fun，该函数的功能是：判断字符串是否为回文?
若是则函数返回1，主函数中输出yes，否则返回0，主函数中输出no。回文是指顺读和倒读都是一样的字符串。

*/

int fun23(char *p) {
	int len = strlen(p);
	int i;
	/*
	abeceba  3
	0   6
	1   5
	2
	3
	abeeba   3

	*/
	for (i = 0; i < len / 2; i++) //0~3
		if (p[i] != p[len - i - 1]) {
			printf("no\n");
			return 0;
		}
	printf("yes\n");
	return 1;
}