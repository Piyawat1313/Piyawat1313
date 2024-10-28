#include<stdio.h>
int main(){
    int k,day,t;
    scanf("%d%d",&k,&day);
    int van[k];
    for(int i = 0; i < k; i++){
        van[i] = 0;   //กำหนดให้รถทุกคนว่างหมด
    }
    for(int i = 0; i < day; i++){
        scanf("%d",&t);
        int min_index = -1;    //ที่กำหนดเป็น - 1 เพราะมองว่าเรายังไม่ได้พบรถที่ว่าง
        int min_time = 1000000; // กำหนดค่าเริ่มต้นให้มากที่สุด
        for(int j = 0; j < k; j++){
            if(van[j] < min_time){  // หาเวลารถที่จะว่างเร็วที่สุด
                min_time = van[j];
                min_index = j;
            }
        }
        van[min_index] += t; // จองรถและ อัปเดตเวลาที่รถจะว่าง
            printf("%d\n",min_index + 1);     // พิมรหัสรถเริ่มจาก 1
    }
    return 0;
}
