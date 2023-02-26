#include "SLT.h"

SLTNode* BuySLTNode(SLTData x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	//初始化下结点
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SLTpushBack(SLTNode** pphead, SLTData x)
{
	SLTNode* newnode =BuySLTNode(x);
	if (*pphead == NULL)//这种情况为空
	{
		*pphead = newnode;
	}
	else
	{
		//假设前面有结点进行链接
	//首先创建一个结点
		//找尾
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;

	}
}
void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)//如果写成cur->next!=NULL则到最后一个元素就无法打印出来
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void SLTpushFront(SLTNode** pphead, SLTData x)
{
	//首先还是创建一个结点，我们把上面的创建结点的操作分装成函数
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
	//有结点和没有结点都适用
}
void SLTpopBack(SLTNode** pphead)
{
	assert(*pphead);
	//本身就是空链表----跟插入空链表不能assert不一样，这里是删除--消费
	//为空插入合不合理？合理
	//为空删除合不合理？不合理
	if ((*pphead)->next=NULL)//1个结点
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//多个结点
	{
		//找尾
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		//这种做法是错误的，会造成野指针，因为把最后一个结点释放，但前一个结点的next就相当于野指针了，就会范围错误。
		//所以我们需要找到最后一个结点的前一个结点的next记录下来
		//tail在往下走之前将值赋给prev这个也就 是前一个结点位置
		free(tail);
		tail = NULL;
		prev->next = NULL;
		
	}
}