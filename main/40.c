/*
第40题 请编写函数fun，该函数的功能是移动字符串中内容，移动的规则如下：
把第1到第m个字符，平移到字符串的最后，把第m＋1到最后的字符移到字符串的前部。
*/
#define N 20
#include<string.h>

void fun(char *w, int m)
{
	/*
		wefqwefqwefw  efqwe
				   m	
		           i
	           	   j
	
	*/
	char b[N];
	int i, j = 0;
	for (i = 0; i<m; i++)
	{
		b[j] = w[i];
		j++;
	}//把字符串w的前m个放在字符串数组b中

	for (i = 0; i＜strlen(w) - m; i++)
		w[i] = w[i + m];//把后面的向前移动

	for (j = 0; j<m; j++)
	{
		w[i] = b[j];
		i++;
	}//把数组b里面的再放回去，局限性移动的字符串必须小于等于N个
	w[i] = '\0';
}