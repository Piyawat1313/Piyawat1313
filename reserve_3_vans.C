#include <stdio.h>
int main(){
    int t1, t2, t3; // รับค่าการจองแต่ละครั้ง
    int availableA = 0, availableB = 0, availableC = 0; // วันที่รถแต่ละคันว่าง

    // รับจำนวนวันที่ใช้รถสำหรับคำสั่งจองแรก
    scanf("%d", &t1);

    // ตรวจสอบรถที่ว่างเร็วที่สุดสำหรับคำสั่งจองแรก
    if (availableA <= availableB && availableA <= availableC) {
        printf("A\n");
        availableA += t1;
    } else if (availableB <= availableC) {
        printf("B\n");
        availableB += t1;
    } else {
        printf("C\n");
        availableC += t1;
    }

    // รับจำนวนวันที่ใช้รถสำหรับคำสั่งจองที่สอง
    scanf("%d", &t2);

    // ตรวจสอบรถที่ว่างเร็วที่สุดสำหรับคำสั่งจองที่สอง
    if (availableA <= availableB && availableA <= availableC) {
        printf("A\n");
        availableA += t2;
    } else if (availableB <= availableC) {
        printf("B\n");
        availableB += t2;
    } else {
        printf("C\n");
        availableC += t2;
    }

    // รับจำนวนวันที่ใช้รถสำหรับคำสั่งจองที่สาม
    scanf("%d", &t3);

    // ตรวจสอบรถที่ว่างเร็วที่สุดสำหรับคำสั่งจองที่สาม
    if (availableA <= availableB && availableA <= availableC) {
        printf("A\n");
        availableA += t3;
    } else if (availableB <= availableC) {
        printf("B\n");
        availableB += t3;
    } else {
        printf("C\n");
        availableC += t3;
    }

}
