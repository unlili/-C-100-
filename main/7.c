/*
第7题 请编写一个函数int fun(int *s,int t,int *k),
用来求除数组的最大元素在数组中的下标,并存放在k所指的储存单元
*/
#include<stdio.h>
int fun7(int *s, int t, int *k) {
	int i,max=s[0];
	for (i = 0; i < t; i++) 
		if (s[i] >= max) {
			max = s[i];
			*k = i+1;
		}
	return max;
}

