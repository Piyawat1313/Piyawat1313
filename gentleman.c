#include<stdio.h>
#include<string.h>
int main(){
    int N;
    scanf("%d",&N);
    char gen[N + 1];         //สร้างให้ใหญ่ขึ้น 1
    scanf("%s",gen);         //ลำดับการต่อแถว
    int swap = 1;            //ใช้เพื่อเก็บสถานะว่ามีการสลับหรือไม่
    int count = 0;
    while(swap){             //ทำงานจนกว่าไม่ม่การสลับ
            swap = 0;
        for(int i = 0; i < N - 1; i++){
            if(gen[i] == 'M' && gen[i + 1] == 'F'){
                //สลับตำแหน่งo
                gen[i] = 'F';
                gen[i + 1] = 'M';
                i++;              //ข้ามตำแหน่งที่สลับแล้ว
                swap = 1;             // มีการสลับกันเกิดขึ้น
            }
        }
        if(swap){
            count++;                //นับรอบการสลับ
        }
    }
    printf("%d\n",count);
    return 0;
}
