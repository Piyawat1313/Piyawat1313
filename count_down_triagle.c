#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    for(int i = N; i > 0; i--){
            //พิมช่องว่าง เพื่อจัดรูปแบบให้เป็นสามเหลี่ยม
        for(int j = N; j > i; j--){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d",i % 10);// i % 10 เพื่อพิมพ์เฉพาะหลักหน่วย
        }
        printf("\n");
    }
}
