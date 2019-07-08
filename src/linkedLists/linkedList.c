#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};


struct node* create(struct node* head, int  n);
void print(struct node *head);

int main()
{
  struct node* head = (struct node*)malloc(sizeof(struct node));
  int n;
  head->next = NULL;
  scanf("%d", &n);
  head = create(head, n);
  print(head);
}

struct node* create(struct node* head, int  n)
{
  struct node* p;
  int i = 1;
  p = head;
  p->next = NULL;
  scanf("%d", &p->data);
  while(i++ != n) {
    p->next = (struct node*)malloc(sizeof(struct node));
    p = p->next;
    scanf("%d", &p->data);
    p->next = NULL;
  }
  return head;
}

void print(struct node *head)
{ 
  struct node *p = head;
  while(p != NULL) {
    printf("%d", p->data);
    if(p->next != NULL)
      printf("-> ");
    p = p->next;
  }
}
