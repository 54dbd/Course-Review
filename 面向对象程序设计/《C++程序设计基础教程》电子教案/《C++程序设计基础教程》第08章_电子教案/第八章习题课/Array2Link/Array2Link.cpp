// Array2Link.cpp	������Ԫ�ؼ򵥿��ٴ�������
/* �����򵥿��ٵش���һ������CreateList��
	��Ҫ��Щ�������������������ƣ�
		�� �����������
		�� ������������
		�� ��������������ݣ���ʲô��ʽ�����㣺���飩
	��������Ĺ���
		�� ����������н����������ݣ�ShowList�������׽���ֵַ��
		�� �ͷ��������н�㣨FreeList�����ݲ������ء��׽��ָ�������
	������ϰ
		�� �����㵹�ã���ϰ�ˣ��������3С�⡣���ݲ������ء��׽��ָ�������
		�� ������ϰ�ˣ��������4С�⡣���ݲ������ء��׽��ָ�������
*/
#include <iostream>
#include "Array2Link.h"
using namespace std;

void FreeList(Node *&head)
{
	Node *p;
	while(head)
	{
		p = head;
		head = head->next;
		delete p;
	}
}

void CreateList(Node *&head, const int *array, int n)
{
	if(head!=NULL)
		FreeList(head);
	Node *p;
	for(int i=n-1; i>=0; i--)
	{
		p = new Node;
		p->x = array[i];
		p->next = head;
		head = p;
	}
}

Node *CreateList(const int *array, int n)
{
	Node *p, *head = NULL;		// �˴�headΪ�ֲ��Զ�����
	for(int i=n-1; i>=0; i--)
	{
		p = new Node;
		p->x = array[i];
		p->next = head;
		head = p;
	}
	return head;				// �ֲ��Զ�����head��������
}	// ����(��ַ)ֵ���ؽ�������ʱ������������׵�ַ���÷���ֵ���뱣��ã� 

void ShowList(const Node *head)
{
	cout << "head ";
	while(head)
	{
		cout << " -> " << head->x;
		head = head->next;
	}
	cout << " -> NULL" << endl;
}
