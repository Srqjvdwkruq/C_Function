// ไฟล์: main.c
#include <stdio.h>

int main()
{
     int i, j;
     max(i, j);
}
int max(int i, int j)
{
     int k;
     if (i >= j)
          k = i;
     else
          k = j;
     printf("Maximum = %d\n", k);
     return k;
}