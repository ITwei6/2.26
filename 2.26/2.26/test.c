#include "SLT.h"

void SLTtest1()
{
	SLTNode* list = NULL;
	/*SLTpushBack(&list, 1);
	SLTpushBack(&list, 2);
	SLTpushBack(&list, 3);
	SLTpushBack(&list, 4);*/
	SLTpushFront(&list,1);
	SLTpushFront(&list, 2);
	SLTpushFront(&list, 3);
	SLTpushFront(&list, 4);
	SLTPrint(list);
	/*SLTpopBack(&list);*/

}

//ʹ��˭����Ҫ�������ָ����������ܸı����
int main()
{
	SLTtest1();
	return 0;

}