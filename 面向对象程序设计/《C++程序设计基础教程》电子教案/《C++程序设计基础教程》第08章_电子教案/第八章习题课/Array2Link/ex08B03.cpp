// ex08B03.cpp	��ϰ8B(3)�⣨�������㵹�ã�
#include <iostream>
#include "Array2Link.h"
using namespace std;

void Reverse(Node *&head)
{
	if(head==NULL)
		return;
	Node *p, *rest;
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
