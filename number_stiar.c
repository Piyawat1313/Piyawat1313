#include<stdio.h>
void main(){
    int Number[501];
   // int Num[501];
   int count = 0;
    for(int i = 0; i < 501; i++){
        scanf("%d",&Number[i]);
        if(Number[i] < 0 || Number[i] > 10){
            break;
        }
        count++; //ตัวแปรที่เก็บค่าเลขที่รับเข้ามาใน Array
    }
    for(int i = 0; i < count; i++){
            //loop นี้ใช้ในการปริ้น ช่องว่าง    เงื่อนไขของ loop นี้คือ  j < เลขที่รับสะสมเข้ามา  - ค่าของ  loop บน   ลดลงทีละ 1
            for(int j = 0; j < count - i - 1; j++){
                printf(" ");
            }
            //loop นี้ ใช้ในการปริ้น ค่าของเลข array ที่รับมา   เงื่อนไขคือ  j เริ่มต้นที่ 0  ถ้า  j < loop บน  จะเพิ่มค่า j เข้าไป
            for(int j = 0; j <= i; j++){
                printf("%d",Number[i]);
            }
        printf("\n");
    }

}
