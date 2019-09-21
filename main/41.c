/*
第41题 请编写函数fun，该函数的功能是：
将m行n列的二维数组中的字符数据，按列的顺序依次放到一个字符串中。
*/

#define m  10
#define n  10

//method01
void fun41_1(char str[m][n], char *ch)
{
	/*      012
	    0   123
		1   456
		2   789

		147258369
	*/
	int k = 0;
	for (int j = 0; j < n; j++)
		for (int i = 0; i < m; j++)
		{
			ch[k++] = str[i][j];
		}
	ch[k] = '\0';//局限性：str数组长宽被限定好了
}


