//Write a program to sum first ten natural numbers using for and do while loop.
// #include<stdio.h>
// int main(){
//     int i, sum = 0;
//     for(i = 1; i <= 10; i++){
//         sum = sum + i;
//         }
//     printf("The sum of first 10 natural numbers is %d",sum);
    
//     }
    //DOWHILE LOOP
    #include<stdio.h>
    int main(){
        int i, sum = 0;
        i = 1;
        do{
            sum = sum + i;
            i++;
            }while(i <= 10);
        printf("The sum of first 10 natural numbers is %d",sum);
        
        }