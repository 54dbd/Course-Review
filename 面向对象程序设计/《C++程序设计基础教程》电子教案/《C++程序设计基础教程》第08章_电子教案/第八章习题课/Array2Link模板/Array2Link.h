// Array2Link.h		��������ٴ�������ģ�壩
/*	���ڲ���ģ�弼��������������Ľṹ������������
	������ܽ��еĲ�������������ͷ�ļ��С�
*/
#ifndef ARRAY2LINK_H
#define ARRAY2LINK_H

#include <iostream>
using namespace std;

template <typename T> struct Node
{
	T x;			// �������Ա
	Node *next;		// ָ�����Ա
};

template <typename T> void ShowList(const Node<T> *head)
{
	cout << "head ";
	while(head)
	{
		cout << " -> " << head->x;
		head = head->next;
	}
	cout << " -> NULL" << endl;
}

template <typename T> void FreeList(Node<T> *&head)
{
	Node<T> *p;
	while(head)
	{
		p = head;
		head = head->next;
		delete p;
	}
}

template <typename T> void CreateList(Node<T> *&head, const T *array, int n)
{
	if(head!=NULL)
		FreeList(head);
	Node<T> *p;
	for(int i=n-1; i>=0; i--)
	{
		p = new Node<T>;
		p->x = array[i];
		p->next = head;
		head = p;
	}
}

#endif
