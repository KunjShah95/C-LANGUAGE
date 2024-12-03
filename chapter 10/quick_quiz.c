#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("kunj.2txt","r");
    if(ptr == NULL){
        printf("the file does not exist sorry!\n");
    }
    else{
    int num;   
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d\n", num);

     fscanf(ptr, "%d", &num);
    printf("the value of num is %d", num);
    }
     return 0;
}