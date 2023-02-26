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
//��һ��NULL������Ҫ���½ڵ㸳��phead,��ʱҲ����Ҫ�ı�phead��Ҫ�ı�plist
//Ҫʹ��plist����Ҫ�����plistָ��
//�ȵڶ����Ժ����ǾͲ����Ǹı�plist�ˣ�����Ҫ�ı�plistָ���ָ�������next
//Ҳ����Ҫ�ı���ǽṹ�壬�������ǽṹ��ָ��
void SLTPrint(SLTNode* phead);
void SLTpushFront(SLTNode** pphead, SLTData x);
SLTNode* BuySLTNode(SLTData x);
void SLTpopBack(SLTNode** pphead);