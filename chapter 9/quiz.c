#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e[3];
    for(int i=0;i<3;i++){
        printf("Enter employee code: ");
        scanf("%d",&e[i].code);
        printf("Enter employee name: ");
        scanf("%s",e[i].name);
        printf("Enter employee salary: ");
        scanf("%f",&e[i].salary);
    }
    for(int i=0;i<3;i++){
        printf("Employee code = %d\n",e[i].code);
        printf("Employee name = %s\n",e[i].name);
        printf("Employee salary = %f\n",e[i].salary);
    }
    return 0;
}
