#include<stdio.h>
#include<string.h>

/*
第19题 编写函数fun,该函数的功能是：
从字符中删除指定的字符，同一字母的大、小写按不同字符处理。
"abbbbccffwfwevwgddddwwq"   --删除b-->  "accffwfwevwgddddwwq"
*/

void fun(char s[], char ch)
{
	int i, k = 0;
	char *p = s;
	int num = strlen(s);

	for (i = 0; i < num; i++)
	{
		if (s[i] != ch) p[k++] = s[i];//自己放自己？？
	}
	p[k] = '\0';

}




//int main() {
//	char s[] = "abbbbccffwfwevwgdbbdddwwq";
//	char a = 'b';
//	fun(s, a);
//	puts(s);
//
//}