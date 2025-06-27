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

void Reverse(PNODE first)
{
    int iDigit = 0;
    int iRev = 0;
    int iNo = 0;
    
    while(first !=NULL)
    {
        iNo = first->data;
        iRev = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;

        }
        printf("%d\n",iRev);
        
        first = first ->next;
    }

}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

   
   
    InsertFirst(&head,40);
    InsertFirst(&head,63);
    InsertFirst(&head,56);
    InsertFirst(&head,12);

    Display(head);

   Reverse(head);

    return 0;
}