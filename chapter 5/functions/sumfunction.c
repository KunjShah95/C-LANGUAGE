  #include<stdio.h>
   int sum(int x, int y){
        return x + y;
    }
  int main(){
   
    int a = 5;
    int b = 6;
    int c = sum(a, b);
    printf("The sum is %d", c);
     return 0;
  }
