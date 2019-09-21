/*
第17题 请编写一个函数fun(char *s)，该函数的功能使把字符串中的内容逆置。
复习几个操作字符串的函数

问题：怎么打印一个字符串在交换后，只用c的知识
*/
#include<stdio.h>
#include<string.h>

void fun(char *s)
{
	char ch;//9
	int len = strlen(s), i;//4

	for (i = 0; i < len / 2; i++) {
		ch = s[i];
		s[i] = s[len - i - 1];
		s[len - i] = ch;
	}

}