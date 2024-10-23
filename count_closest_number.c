#include <stdio.h>
int main(){
    // input N K  Array[]
    //ตัวเลขนั้น เข้า ใกล้กับ K เท่าไร ห่างจาก K เท่าไร
    //สร้างเงื่อนไข  เพื่อเช็คค่าเข้าใกล้มีกี่ตัว  สร้างใน Loop
    int N, K;
    scanf("%d",&N);
    int limmit[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&limmit[i]);
    }
    scanf("%d",&K);
    int min_diff = abs(limmit[0] - K);     //ต้องคำนวน Arrray ห่างจาก K เท่าไร โดยเอามาลบกัน
    int number = 0;
   
    for(int i = 0; i < N; i++){             //loop นี้ ใช้ในการเก็บค่าน้อยสุด ใน Array
         int diff = abs(limmit[i] - K);
         if(diff <= min_diff){
            min_diff = diff;
         }
    }
    
    for(int i = 0; i < N; i++){               //loop ใช้ในการหาค่าใกล้เคียงที่สุด
        if(abs(limmit[i] - K) == min_diff){
            number++;
        }
    }
    printf("%d\n",min_diff);
    printf("%d",number);
    return 0;

}
