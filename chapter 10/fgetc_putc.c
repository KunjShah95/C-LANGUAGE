#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("kunj.txt","a");
    // char c = fgetc(ptr);
    // printf("%c", c);
    fputc('c', ptr); 
     return 0;
}