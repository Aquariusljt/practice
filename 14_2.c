// 142.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "conio.h"
#include "stdlib.h"

struct  data_array {
	long num;
	int score;
};

typedef  struct student {
	long num;
	int score;
	struct student *next;
} NODE;

NODE * creat(struct  data_array *array, int n);
void  display(NODE *head);
void copy_list(NODE *head1, NODE **head2);
NODE * merge(NODE *head1, NODE *head2);
NODE * del(NODE *head1, NODE *head2);
NODE *insert(NODE *head, NODE *p0);

NODE * creat(struct  data_array *array, int n)
{
	NODE *head = NULL, *p = NULL;
	int i;

	for (i = 0; i<n; i++) {
		p = (NODE *)malloc(sizeof(NODE));
		p->num = array[i].num, p->score = array[i].score; p->next = NULL;
		head = insert(head, p);
	}
	return head;

}
NODE *insert(NODE *head, NODE *p0)
{
	NODE *p1 = NULL, *p2 = NULL;
	if (head == NULL) {
		head = p0; p0->next = NULL;
	}
	else {
		p1 = head;
		while ((p0->num>p1->num) && (p1->next != NULL)) {
			p2 = p1;  p1 = p1->next;
		}
		if (p1 == head && (p0->num<p1->num)) {
			p0->next = head; head = p0;
		}
		else if (p0->num<p1->num) {
			p2->next = p0; p0->next = p1;
		}
		else {
			p1->next = p0; p0->next = NULL;
		}
	}
	return head;
}

void display(NODE *head)
{
	NODE *p = NULL;
	if (head == NULL) {
		printf("\nlist null!\n"); return;
	}
	p = head;
	while (p != NULL) {
		printf("\t%ld\t%d\n", p->num, p->score);
		p = p->next;
	}
}

void copy_list(NODE *head1, NODE **head2)
{
	NODE *p = head1, *stu, *p1;
	int num = 0;
	while (p != NULL) {
		num++;
		stu = (NODE *)malloc(sizeof(NODE));
		stu->num = p->num;
		stu->score = p->score;
		if (num == 1) 
			*head2 = stu;
		else 
			p1->next = stu;
		p1 = stu;
		p = p->next;
	}
	p1->next = NULL;

}

NODE * merge(NODE *head1, NODE *head2)
{
	NODE *p1, *p2, *head, *p;
	p1 = head1, p2 = head2;
	if (p1->num>p2->num) head = p2, p = p2, p2 = p2->next;
	else head = p1, p = p1, p1 = p1->next;
	while (p1 != NULL&&p2 != NULL) {
		if (p1->num>p2->num)
			p->next = p2, p = p2, p2 = p2->next;
		else if (p1->num<p2->num)
			p->next = p1, p = p1, p1 = p1->next;
		else {
			if (p1->score>p2->score) 
				p->next = p1, p = p1;
			else 
				p->next = p2, p = p2;
			p1 = p1->next;
			p2 = p2->next;
		}
	}
	if (p1 == NULL) 
		p->next = p2;
	else 
		p->next = p1;
	return(head);
}

NODE * del(NODE *head1, NODE *head2)
{
	NODE *p1, *p2, *p0;
	int flag;
	p0 = p1 = head1;
	while (p1 != NULL) {
		p2 = head2; flag = 0;
		while (p2 != NULL) {
			if (p2->num == p1->num) {
				flag = 1; break;
			}
			p2 = p2->next;
		}
		if (flag)
			if (p1 == head1) {
				head1 = head1->next;
				free(p1);
				p0 = p1 = head1;
			}
			else {
				p0->next = p1->next;
				free(p1);
				p1 = p0->next;
			}
		else {
			p0 = p1; p1 = p1->next;
		}
	}
	return(head1);
}

int main()
{
	struct  data_array data_a[] = { { 20304,75 },{ 20311,89 },{ 20303,62 },{ 20307,87 },{ 20320,79 } },
		data_b[] = { { 20302,65 },{ 20301,99 },{ 20311,87 },{ 20323,88 },{ 20307,92 },{ 20322,83 } };
	NODE *a, *b, *a_dup, *b_dup;
	int n1 = 5, n2 = 6;
	a = creat(data_a, n1);
	puts("a:");
	display(a);
	b = creat(data_b, n2);
	puts("b:");
	display(b);
	copy_list(a, &a_dup);
	copy_list(b, &b_dup);
	a = merge(a, b);
	puts("a:");
	display(a);
	b_dup = del(b_dup, a_dup);
	puts("b:");
	display(b_dup);
	system("pause");
	return 0;
}
