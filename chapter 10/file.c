#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("kunj.txt","r");
    int num;   
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d\n", num);

     fscanf(ptr, "%d", &num);
    printf("the value of num is %d", num);
     fclose(ptr);
     return 0;
}