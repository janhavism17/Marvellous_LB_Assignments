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

int AdditionEven(PNODE first)
{
    int iSumEven = 0;
    while(first != NULL)
    {
        if(((first->data) % 2 )== 0)
        {
            iSumEven = iSumEven + first->data;
        }

        first = first -> next;
    }

    return iSumEven;
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

   
   
    InsertFirst(&head,3);
    InsertFirst(&head,6);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    iRet = AdditionEven(head);
    printf("%d is the addition of all even number from LL\n",iRet);

    return 0;
}