//write a program which accept string from user and count number of white spaces

//Input : "Marvellous"
// OutPut : "0"

//Input : "Marvellous Infosystems"
// OutPut : 1

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);
    return 0;
}