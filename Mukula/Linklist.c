#include<stdio.h>
#include<stdlib.h>
struct node
{}
int data;
struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    struct node obj;
    struct node *ptr=(struct node *)malloc(sizeof(node));
    obj.data=11;
    obj.next=NULL;
    ptr -> data=11;
    ptr-> next=NULL;
    return 0;
}