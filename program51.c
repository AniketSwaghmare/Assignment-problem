//Accept number of rows and number of columns from user and display below pattern..
// Input : iRow:4 iCol:4
/*
 A B C D
 A B C D
 A B C D
 A B C D


*/


#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    char ch = '\0';

    for(i = 1,ch='A';i<=iRow;i++,ch++)
    {
        for(j = 1,ch ='A';j<=iCol;j++,ch++)
        {
            printf("%c\t",ch);
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