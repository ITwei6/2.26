#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLTData;
typedef struct SLTNode
{
	SLTData data;
	struct SLTNode *next;
}SLTNode;
void SLTpushBack(SLTNode** pphead, SLTData x);
//第一次NULL插入需要将新节点赋给phead,这时也就是要改变phead，要改变plist
//要使用plist就需要传这个plist指针
//等第二次以后我们就不再是改变plist了，而是要改变plist指向的指针里面的next
//也就是要改变的是结构体，而不再是结构体指针
void SLTPrint(SLTNode* phead);
void SLTpushFront(SLTNode** pphead, SLTData x);
SLTNode* BuySLTNode(SLTData x);
void SLTpopBack(SLTNode** pphead);