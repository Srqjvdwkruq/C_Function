// ไฟล์: max.c
#include <stdio.h>
#include "max.h"

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
