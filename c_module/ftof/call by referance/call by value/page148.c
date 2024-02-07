#include <stdio.h>

     void swap(int *a, int *b){
          int dummy;
          dummy = *a;
          *a = *b;
          *b = dummy;
     }
     void main(){
          int a = 10, b = 20;
          printf("a=%d b=%d\n",a ,b);
          swap(&a, &b);
          printf("a=%d b=%d\n",b, a);
     }