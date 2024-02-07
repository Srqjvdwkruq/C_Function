#include <stdio.h>
     
     int line(){
          int i;
          for(i = 0; i <= 20; i++)
               printf("-");
          printf("\n");
     }
     main(){
          line();//----------------line function----------------//
          printf("DEFINED FUNCTION\n");
          line();//----------------line function----------------//
     }