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

void DisplayLarge(PNODE first)
{
    int iDigit = 0;
    int iMax = 0;
    int iNo = 0;
    
    while(first !=NULL)
    {
        iNo = first->data;
        iMax = 0;
        
        while(iNo != 0)
        {
            
            iDigit = iNo % 10;
            
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            
            iNo = iNo / 10;

            
        }
        printf("%d\n",iMax);
        
        first = first ->next;
    }

}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

   
   
    InsertFirst(&head,41);
    InsertFirst(&head,32);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    Display(head);

    DisplayLarge(head);

    return 0;
}