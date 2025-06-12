#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[],int iLength)
{
    int i = 0;
    int iMax = Arr[0];

    for(i = 1; i < iLength; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];

        }
    }
    return iMax;

}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter the number : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;

    }
    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d:\n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Maximum(p,iSize);

    printf("Largest Number is : %d ",iRet);

    free(p);

    return 0;



}