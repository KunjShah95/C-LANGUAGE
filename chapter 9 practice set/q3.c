//arrowopertor?
#include<stdio.h>
struct Student{
    int age;
    float gpa;
};
int main(){
  struct Student s1;
  struct Student* ptr  = &s1;
  ptr->age= 21;
  ptr->gpa = 3.5;
  printf("Age:%d\n, GPA: %f\n",s1.age,s1.gpa);
     return 0;
}