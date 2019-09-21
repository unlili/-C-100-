/*
第47题 请编写一个函数void fun(char *ss)，其功能是：
将字符串ss中所有下标为奇数位置上的字母转换为大写(若位置上不是字母，则不转换)。


C语言   小写 ascii -->  大写 方法
+ ('A' - 'a')
*/

void fun(char *ss)
{/*regwregregw
     p
 */
	char *p = ss;
	while (*p)
	{
		*p += ('A' - 'a');
		p += 2;
	}
}