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

int SearchFirstOcc(PNODE first,int no)
{
    int iCount = 1;
    while(first != NULL)
    {
        if(first -> data == no)
        {
            iCount++;
        }
        first = first ->next;
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iElement = 0;
    int iRet = 0;

   
    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);

    printf("Enter the Element to be searched :\n");
    scanf("%d",&iElement);


    iRet = SearchFirstOcc(head,iElement);
    printf("The occurance of %d is at %d position\n",iElement,iRet);

    return 0;
}