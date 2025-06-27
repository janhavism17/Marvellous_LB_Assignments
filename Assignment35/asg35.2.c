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

void DisplayPrime(PNODE first)
{
    int i = 0;
    int iFlag = 0;

   while(first != NULL)
   {
        iFlag = 1;

        if(first->data < 2)
        {
            iFlag = 0;
        }
        else
        {
            for(i = 2;i <= ((first->data) / 2);i++)
            {
                if(((first->data) % i) == 0)
                {
                    iFlag =0;
                    break;
                }
            }
        
        }
        if(iFlag == 1)
        {
            printf("%d is a prime number.\n", first->data);
        }
        
        first = first ->next;
   }
    

}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

   
   
    InsertFirst(&head,17);
    InsertFirst(&head,40);
    InsertFirst(&head,11);
    InsertFirst(&head,6);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    DisplayPrime(head);

    return 0;
}