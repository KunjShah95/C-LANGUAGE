//Write a program to print multiplication table of 10 in reversed order

#include<stdio.h>
int main()
{
    int i=10;
    while(i>=1)
    {
        printf("%d * %d = %d\n",i,10,i*10);
        i--;
    }
    return 0;
}