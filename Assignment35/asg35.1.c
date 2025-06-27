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

void DisplayPerfect(PNODE first)
{
    int iCnt = 0,i = 0;
    
    while(first !=NULL)
    {
        int iSum = 0;
        for(i =1;i <first->data;i++)
        {
            if((first->data)%i==0)
            {
                iSum = iSum + i;
            }
        
        }
        if(iSum == first->data)
        {
            printf("%d\n",first->data);
        }
        
        first = first ->next;
    }

}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

   
   
    InsertFirst(&head,40);
    InsertFirst(&head,6);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    DisplayPerfect(head);

    return 0;
}