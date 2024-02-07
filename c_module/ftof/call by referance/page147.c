#include <stdio.h>

// ประกาศฟังก์ชัน swap() ก่อนที่จะใช้งาน
void swap(a, b)
{
     int dummy;
     dummy = a;
     a = b;
     b = dummy;
}

int main()
{
     int a, b;
     a = 10;
     b = 20;
     printf("a=%d b=%d\n", a, b);

     // เรียกใช้งานฟังก์ชัน swap() และส่งค่า a และ b เป็นพารามิเตอร์
     swap(a, b);

     printf("a=%d b=%d\n", a, b);
}
