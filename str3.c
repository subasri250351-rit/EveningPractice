#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20]="hello";
  char str2[20]="world";
  int result;
  result=strcmp(str1,str2);
    if(result==0)
        printf("both strings are equal");
    else if(result<0)
        printf("str1 is less than str2");
    else
        printf("str1 is greater than str2");
   return 0;
}
    