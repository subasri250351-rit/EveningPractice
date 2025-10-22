#include<iostream.h>
void main()
{
     int*p;
     p=new int[5];
     for(i=0;i<5;i++)
     *(p+i)=i;
     delete p;
}
