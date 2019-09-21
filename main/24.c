/*
第24题 请编写一个函数fun，它的功能是：
将一个只有数字字符串转换为一个整数(不得调用c语言提供的将字符串转换为整数的函数)。
"-594166"   --->   -594166
"123456"    --->    123456
*/

int func(char* s)
{
	int retval = 0;
	int n = 1;
	if (*s == '-')//若字符第一个为负号则，s下移，且n改为-1
	{
		n = -1;
		s++;
	}
	//123456
	while (*s != '\0')
	{
		retval = retval * 10 + (*s - '0');
		s++;
	}
	return(n*retval);
}