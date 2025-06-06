#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int i = 0;
    for( int i =0; i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
            return TRUE;
        }
       
        
    }
    return FALSE;
  
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unalbe to allocate memory");
        return -1;
    }
    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt + 1);
        scanf("%d",&p[iCnt]);

    }
    bRet = Check(p , iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");

    }
    else
    {
        printf("11 is not present");
    }

    free(p);

    return 0;

}