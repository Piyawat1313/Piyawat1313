#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N); // รับจำนวนอาเรย์

    int arrays[N][1000]; // กำหนดขนาดของแต่ละอาเรย์
    int lengths[N]; // ความยาวของแต่ละอาเรย์

    // รับข้อมูลของอาเรย์
    for (int i = 0; i < N; i++) {
        scanf("%d", &lengths[i]); // รับความยาวของอาเรย์
        for (int j = 0; j < lengths[i]; j++) {
            scanf("%d", &arrays[i][j]); // รับค่าของแต่ละช่องในอาเรย์
        }
    }

    int sum = 0;
    int min = 1001; // ตั้งค่าต่ำสุดเริ่มต้นเป็นมากที่สุด
    int max = -1001; // ตั้งค่าสูงสุดเริ่มต้นเป็นน้อยที่สุด
    int invalid_count = 0; // นับจำนวนการระบุผิดพลาด

    while (1) {
        int A, P;
        scanf("%d", &A); // รับคำสั่งอาเรย์
        if (A == 0) break; // ถ้าพบคำสั่งหยุดโปรแกรม

        scanf("%d", &P); // รับตำแหน่งในอาเรย์
        A--; // เปลี่ยนจาก 1-based index เป็น 0-based index

        // ตรวจสอบว่าอาเรย์และตำแหน่งที่ระบุนั้นถูกต้องหรือไม่
        if (A >= 0 && A < N && P >= 0 && P < lengths[A]) {
            int value = arrays[A][P];
            sum += value; // รวมค่า
            if (value > max) max = value; // หาค่าสูงสุด
            if (value < min) min = value; // หาค่าต่ำสุด
        } else {
            invalid_count++; // หากระบุผิดพลาด
        }
    }

    // แสดงผลลัพธ์
    printf("%d\n", sum);
    printf("%d\n", max);
    printf("%d\n", min);
    printf("%d\n", invalid_count);

    return 0;
}
