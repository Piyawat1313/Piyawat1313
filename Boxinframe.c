#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // พิมพ์แถวแรก (กรอบบน)
    for (int i = 0; i < N; i++) {
        printf("*");
    }
    printf("\n");

    // พิมพ์แถวที่มีช่องว่างและกล่องด้านใน
    for (int i = 1; i < N - 1; i++) {
        printf("*");  // ขอบซ้าย

        if (i == 1 || i == N - 2) {
            // แถวที่สองและแถวรองสุดท้ายมีช่องว่างด้านใน
            for (int j = 0; j < N - 2; j++) {
                printf(" ");
            }
        } else {
            // แถวที่มีกรอบกล่องด้านใน
            printf(" ");
            for (int j = 0; j < N - 4; j++) {
                printf("*");
            }
            printf(" ");
        }

        printf("*\n");  // ขอบขวา
    }

    // พิมพ์แถวสุดท้าย (กรอบล่าง)
    for (int i = 0; i < N; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}

