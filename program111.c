//write a program which accept string from user and  copy that characters of that string into another string by toggling the case


//Input : "Marvellous Python 2"
//OutPut : "mARVELLOUS pYThON 2"

#include<stdio.h>

void StrCpyToggle(char *src,char *dest)
{
  while(*src != '\0')
  {
     if((*src >= 'a') && (*src <= 'z'))
    {
      *src = *src - 32;
    }

    else if((*src >= 'A') && (*src <= 'Z'))
    {
      *src = *src + 32;
    }
    
  *dest = *src;
    src++;
    dest++;
    
  }
  *dest = '\0';
  
}

int main()
{
  char arr[30] = "Marvellous Python 2";
  char brr[30];   //Empty string

  StrCpyToggle(arr,brr);

  printf("%s",brr);    //mARVELLOUS pYThON 2

  return 0; 
}