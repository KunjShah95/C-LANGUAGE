#include<stdio.h>
int main(){
    //Rule 1: A variable name can consist of alphabets, digits, and underscore
    int a_1 = 10;
    printf("%d\n", a_1);

    //Rule 2: A variable name should not start with a digit
    //int 1a = 10; //error
    int a1 = 10;
    printf("%d\n", a1);

    //Rule 3: A variable name should not be a keyword
    //int int = 10; //error
    int variable = 10;
    printf("%d\n", variable);

    //Rule 4: A variable name should not have any special symbol except underscore
    //int a$ = 10; //error
    int a_b = 10;
    printf("%d\n", a_b);

    return 0;
}
