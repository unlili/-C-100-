/*
第25题 请编写一个函数fun，它的功能是：
比较两个字符串的长度，(不得调用c语言提供的求字符串长度的函数)，
函数返回较长的字符串。若两个字符串长度相同，则返回第一个字符串。
*/

char *fun(char *a, char *b) {
	//需要通过其他变量间接变量字符串
	int k = 0;
	char *a1 = a, *b1 = b;
	while (*a1) {
		k++;
		a1++;
	}
	int h = 0;
	while (*b1) {
		h++;
		b1++;
	}
	if (k > h)		return a;
	if (k < h)		return b;
	if (k == h) 	return a;
}
