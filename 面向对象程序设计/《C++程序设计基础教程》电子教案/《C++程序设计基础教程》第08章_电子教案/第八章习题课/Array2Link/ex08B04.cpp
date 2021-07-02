// ex08B04.cpp ��ϰ8B(4)�⣨������������Աֵ�Ĵ�С����
#include <iostream>
#include "Array2Link.h"
using namespace std;

void Sort(Node *&head)
{
	if(head==NULL)
		return;
	Node *p, *rest, *pGuard;
	rest=head->next;
	head->next = NULL;
	while(rest)
	{
		p = rest;
		rest = rest->next;
//		if(p->x < head->x)			// ����
		if(p->x > head->x)			// ����
		{
			p->next = head;
			head = p;
		}
		else	// Ѱ���ʵ���λ��
		{
			pGuard = head;
//			while(pGuard->next!=NULL && pGuard->next->x < p->x)	// ����
			while(pGuard->next!=NULL && pGuard->next->x > p->x)	// ����
				pGuard = pGuard->next;
			p->next = pGuard->next;
			pGuard->next = p;
		}
	}
}
