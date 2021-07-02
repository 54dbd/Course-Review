// ex08.h
#include "Array2Link.h"

template <typename T>
void Reverse(Node<T> *&head)				// ��ϰ8B(3)�⣨�������㵹�ã�
{
	if(head==NULL)
		return;
	Node<T> *p, *rest;
	rest=head->next;
	head->next = NULL;
	while(rest)
	{
		p = rest;
		rest = rest->next;
		p->next = head;
		head = p;
	}
}

template <typename T>
void Sort(Node<T> *&head, int ascending=1)	// ��ϰ8B(4)�⣨������������Աֵ�Ĵ�С����
{
	if(head==NULL)
		return;
	Node<T> *p, *rest, *pGuard;
	rest=head->next;
	head->next = NULL;
	while(rest)
	{
		p = rest;
		rest = rest->next;
		if(ascending && p->x < head->x || !ascending && p->x > head->x)
		{
			p->next = head;
			head = p;
		}
		else	// Ѱ���ʵ���λ��
		{
			pGuard = head;
			while(pGuard->next!=NULL && (ascending && pGuard->next->x < p->x
									 || !ascending && pGuard->next->x > p->x))
				pGuard = pGuard->next;
			p->next = pGuard->next;
			pGuard->next = p;
		}
	}
}
