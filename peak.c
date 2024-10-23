#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
void printResult(int result, int row, int col){
    printf("\n");
    printf("%d %d %d\n", result, row, col);
}
int main() {
    int N;
    scanf("%d", &N);
    int height[N][N];
    int number;
    // รับข้อมูลความสูง
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &height[i][j]);
        }
    }

    int count = 0;
    for (int r = 1; r < N - 1; r++) {
        for (int c = 1; c < N - 1; c++) {
            bool isTop = true;
            for (int r2 = -1; r2 <= 1; r2++) {
                for (int c2 = -1; c2 <= 1; c2++) {
                    if (r2 == 0 && c2 == 0) continue;
                    if (height[r][c] <= height[r + r2][c + c2]) {
                        isTop = false;
                        break;
                    }
                }
                if (!isTop) break;
            }
            if (isTop) {
                count++;
                 //เก็บheight[r][c]ไว้ในอาเรย์
                 number = height[r][c];
                //printf("Number : %d ",number);
                //printResult(height[r][c], r, c);
            }
        }
    }
      printf("%d\n%d", count, number);

    /*for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < N - 1; j++) {
            printf("3x3 sub-grid centered at (%d, %d):\n", i, j);
            for (int k = -1; k <= 1; k++) {
                for (int l = -1; l <= 1; l++) {
                    printf("%d ", height[i + k][j + l]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }*/
    return 0;
}

