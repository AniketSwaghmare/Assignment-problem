//Accept N numbers from user check whther that numbers contains 11 in or not..

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0,iNo = 11;

    for(iCnt = 0; iCnt<=iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }

}

int main()
{
    int iSize = 0,iRet =0,iCnt =0;
    int *p =NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p =(int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements :%d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);

    if(bRet ==TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }


    free(p);
    return 0;
}