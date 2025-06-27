#include <stdio.h>

typedef unsigned int UNIT;


int CountCommonBits(UNIT iNo1, UNIT iNo2)
{
    int iCnt = 0;

    for (int i = 0; i < 32; i++)  
    {
        int bit1 = (iNo1 >> i) & 1;
        int bit2 = (iNo2 >> i) & 1;

        if (bit1 == bit2)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int main()
{
    UNIT iValue1 = 0, iValue2 = 0;
    int iResult = 0;

    printf("Enter first number:\n");
    scanf("%u", &iValue1);

    printf("Enter second number:\n");
    scanf("%u", &iValue2);

    iResult = CountCommonBits(iValue1, iValue2);

    printf("Number of common bit positions: %d\n", iResult);

    return 0;
}