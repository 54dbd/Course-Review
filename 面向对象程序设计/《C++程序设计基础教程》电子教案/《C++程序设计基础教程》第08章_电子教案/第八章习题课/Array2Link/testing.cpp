// testing.cpp
#include <iostream>
#include "Array2Link.h"
#include "ex08.h"
using namespace std;

int main()
{
	int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
	int n = sizeof(a)/sizeof(*a);
	Node *head = NULL;
	
	cout << "��������" << endl;
	CreateList(head, a, n);			// ����һ����������һ��
//	head = CreateList(a, n);		// ����һ��������������ʹ�����غ���
	ShowList(head);

	Reverse(head);
	cout << "\n��㵹��" << endl;
	ShowList(head);
	
	Sort(head);
	cout << "\n����" << endl;
	ShowList(head);
	
	cout << "\n�ͷ����н��" << endl;
	FreeList(head);
	ShowList(head);
	return 0;
}
