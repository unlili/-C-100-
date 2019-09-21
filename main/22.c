/*
第22题 n名学生的成绩已在主函数中放入一个带头节点的链表结构中，
h指向链表的头节点。请编写函数fun，它的功能是：找出学生的最高分，由函数值返回。
*/
//还没写定义链表
double fun(STREC *h)
{
	double max;
	STREC *q = h;
	max = h->s;
	do
	{
		if (q->s>max)
			max = q->s;
		q = q->next;
	} while (q != 0);
	return max;
}