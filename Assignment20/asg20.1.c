#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength,int iNo)
{
    int i = 0; 
    int iCount = 0;

    for( int i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
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
    int iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    printf("Enter number of number:");
    scanf("%d",&iValue);

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
    bRet = Check(p , iSize,iValue);

    if(bRet == TRUE)
    {
        printf("TRUE\n");

    }
    else
    {
        printf("FALSE\n");
    }

    free(p);

    return 0;

}