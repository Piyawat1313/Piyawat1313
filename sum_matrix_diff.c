#include <stdio.h>
#include <stdlib.h>

 int main() {
    int N;
    scanf("%d", &N);
    // สร้างเมตริกซ์ขนาด N x N
    int matrix[N][N];

    // รับข้อมูลจากผู้ใช้เพื่อใส่ในเมตริกซ์
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum_difference = 0;

    // คำนวณความแตกต่างระหว่างซีกขวาบนและซีกซ้ายล่าง
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            sum_difference += abs(matrix[i][j] - matrix[j][i]);
        }
    }

    // แสดงผลลัพธ์
    printf("%d\n", sum_difference);
}
