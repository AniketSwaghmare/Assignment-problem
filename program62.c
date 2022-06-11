//Accept N Number from user and return difference between summation of even elements and summation of odd elements..

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSum1 = 0,iSum2 = 0;

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] % 2)==0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum1 - iSum2;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Undable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elemements\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);

    }

    iRet = Difference(p,iSize);
    printf("Result is %d",iRet);
    free(p);

    return 0;
}