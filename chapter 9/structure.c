#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1,e2;
        e1.code = 101;
        e1.salary = 5000.0;
        strcpy(e1.name,"Rahul");
    
  printf("%d\n %f\n %s\n", e1.code,e1.salary,e1.name);
      return 0;
}