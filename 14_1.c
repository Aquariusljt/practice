// 141.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "conio.h"
#include "stdlib.h"


typedef struct node{
	int data;
	struct node *next;
}NODE;

NODE *creat(void) {
	NODE *head = NULL, *p1 = NULL, *p2 = NULL;
	int data=-1, n = 0;
	do {
		scanf_s("%d", &data);
		if (data == 0)
			break;
		n++;
		p1 = (NODE*)malloc(sizeof(NODE));
		p1->data = data; p1->next = NULL;
		if (n == 1)
			head = p2 = p1;
		else {
			p2->next = p1;
			p2 = p1;
		}
	} while (1);
	return head;
}

void delete_List(NODE *head)
{
	NODE *p1 = NULL;

	if (head == NULL) return;
	while (head != NULL) {
		p1 = head;
		head = head->next;
		free(p1);
	}
}


void print(NODE *head)
{
	NODE *p = NULL;

	if (head == NULL) {
		printf("\nlist null!\n");
		return;
	}
	p = head;
	while (p != NULL) {
		printf("%d  ", p->data);
		p = p->next;
	}
	printf("\n");
}

int main()
{
	NODE *head; 
	head = creat();
	print(head);
	delete_List(head);
	system("pause");
    return 0;
}

