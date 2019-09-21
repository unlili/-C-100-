/*

第15题 请编写一个函数unsigned fun(unsigned w),w使一个大于10的无符号整数，
若w是n(n≥2)位的整数，则函数求出w后n－1位的数作为函数值返回。
333  33
4856115  856115
485611
*/
#include<string.h>
unsigned fun(unsigned w) {
	char *p = (char)w;
	int a = strlen(p);
	return (int)w % (a * 10);
}

//451
unsigned fun(unsigned w)
{
	unsigned t, s = 0, s1 = 1, p = 0;
	t = w;
	while (t>10)
	{/*s1是一个累乘的数来控制没一位的大小，其实感觉字符串拼接更简单，python里面的字符串切片
			def p(w):
				w = str(w)
				return int(w[1:])     
		python是真简单
	 
	 */
		if (t / 10)	p = t % 10;
		s = s + p*s1;
		s1 *= 10;
		t /= 10;
	}
	return s;
}