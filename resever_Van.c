#include <stdio.h>

int main() {
     //รับคำสั่งจองของรถตู้
    int N,i;
    
  //รับคำสั่งวันที่จะใช้รถตู้
    scanf("%d",&N);
  
  //ประกาศให้ตัวแปรที่กำหนดมาเป็น0 เพื่อจะมาอัปเดตค่าของแต่ละตัว
    int day_a=0,day_b=0,day_c=0;
  
  //สร้างลูปโดยเอาiเป็นตัวนับรอบ
    for(i=0;i<N;i++){
  
      //ตัวแปรสำหรับการจองแต่ละครั้ง
        int t;
      
      //รับคำสั่งจองจากผู้ใช้
        scanf("%d",&t);
      
      //ถ้ารถตู้ aน้อยกว่ารถตู้ b
       if(day_a<=day_b && day_a<=day_c){
      
         //ปริ้นaออกมา
            printf("A\n");
         
         //โดยทำการอัปเดตตัวแปรรถตู้a
            day_a+=t;
         }else if(day_b<=day_c){
             printf("B\n");
             day_b+=t;
          }else{
               printf("C\n");
               day_c+=t;
            }
       }



}
