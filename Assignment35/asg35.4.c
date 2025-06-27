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

int SecMaximum(PNODE first)
{
    int iMax = 0;
    int iMaxSec = 0;
    iMax = first ->data;

    while(first != NULL)
    {
        if((first->data )> iMax)
        {
            iMaxSec = iMax;
            iMax = first ->data;
        }
        else if ((first->data ) < iMaxSec && iMaxSec < iMax)
        {
            iMaxSec = first -> data;
        }
        first = first ->next;
    }
    
    return iMaxSec;
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

    iRet = SecMaximum(head);
    printf("%d is the secound maximun\n",iRet);

    return 0;
}