//Write a program to determine whether a character entered by the user is lowercase or not.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase character.", ch);
        }
        else {
        printf("%c is not in a lowercase character.", ch);
        }
    return 0;
}