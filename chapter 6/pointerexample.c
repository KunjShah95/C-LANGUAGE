#include<stdio.h>

int main(){
    int i=8;
    int *j;
    j = &i;
    int** k =&j; //k is a pointer to pointer
    printf("add i= %u\n",&i);
    printf("add i= %u\n",j);
    printf("add j= %u\n",&j);
    printf("value at i= %d\n",i);
    printf("value at j= %d\n",*(&i));
    printf("value at j= %d\n",*j);
    printf("value at k= %d\n",**k);
     return 0;
}