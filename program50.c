//Accept number from user and display below pattern.
// Input : iRow:3 iCol:4
/*
1 1 1 1 
2 2 2 2 
3 3 3 3


*/


#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int iCnt = 0,i = 0,j = 0;

    for(i = 1;i<=iRow;i++)
    {
        for(j =1;j<=iCol;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
        
    }
   
  
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}