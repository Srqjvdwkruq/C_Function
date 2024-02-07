#include <stdio.h>

void swap(int *a, int *b)
{
     int i;
     for (i = 0; i < 5; i++)
          printf("%d\n", a[i]);
}

void main()
{
     int i; 
     int a[5], i;
     for (i = 0; i < 5; i++)
          a[i] = i;
     swap(a, a); // ส่งพอยน์เตอร์ของ arr เข้าไปยังฟังก์ชัน screen()
}
