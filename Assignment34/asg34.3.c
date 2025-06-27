
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first ,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    
    newn ->next = *first;
    *first = newn;
    

}

void Display(PNODE first)
{
    while(first !=NULL)
    {
        printf("| %d |-> ",first->data);
        first = first ->next;
    }

    printf("NULL\n");
}

int Addition(PNODE first)
{
    int iSum = 0;
    while(first != NULL)
    {
        iSum = iSum +first->data;
        first = first ->next;
    }

    return iSum;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

   
   
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    iRet = Addition(head);
    printf("Addition of list is %d\n",iRet);

    return 0;
}