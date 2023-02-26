#include "SLT.h"

SLTNode* BuySLTNode(SLTData x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	//��ʼ���½��
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SLTpushBack(SLTNode** pphead, SLTData x)
{
	SLTNode* newnode =BuySLTNode(x);
	if (*pphead == NULL)//�������Ϊ��
	{
		*pphead = newnode;
	}
	else
	{
		//����ǰ���н���������
	//���ȴ���һ�����
		//��β
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
	while (cur != NULL)//���д��cur->next!=NULL�����һ��Ԫ�ؾ��޷���ӡ����
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void SLTpushFront(SLTNode** pphead, SLTData x)
{
	//���Ȼ��Ǵ���һ����㣬���ǰ�����Ĵ������Ĳ�����װ�ɺ���
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
	//�н���û�н�㶼����
}
void SLTpopBack(SLTNode** pphead)
{
	assert(*pphead);
	//������ǿ�����----�������������assert��һ����������ɾ��--����
	//Ϊ�ղ���ϲ���������
	//Ϊ��ɾ���ϲ�����������
	if ((*pphead)->next=NULL)//1�����
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//������
	{
		//��β
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		//���������Ǵ���ģ������Ұָ�룬��Ϊ�����һ������ͷţ���ǰһ������next���൱��Ұָ���ˣ��ͻ᷶Χ����
		//����������Ҫ�ҵ����һ������ǰһ������next��¼����
		//tail��������֮ǰ��ֵ����prev���Ҳ�� ��ǰһ�����λ��
		free(tail);
		tail = NULL;
		prev->next = NULL;
		
	}
}