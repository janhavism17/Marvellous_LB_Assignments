#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iEven = 0;
    
    printf("Elements that are even and divisible by 5:\n");
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0 && Arr[i] % 5 == 0)
        {
           printf("%d  ",Arr[i]);
          
        }
       
    }
    printf("\n");
 
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;

    int *p = NULL;

    printf("Enter number of element:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;

    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d",&p[iCnt]);

    }
    Display(p,iSize);

    free(p);

    return 0;

}