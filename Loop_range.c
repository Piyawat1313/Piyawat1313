#include<stdio.h>
void main(){
    //R = แถว  C = จำนวนครั้ง  | | หลัก
   int R,C;
   scanf("%d%d",&R,&C);
   i;//loop แถว
   int j;//loop หลัก
   //loop ชั้นนนอก
   for(i=0;i<R;i++){
        for(j=0;j<C;j++){ // loop ชั้นใน
            printf("*");
        }
        //คำสั่งขึ้นบรรทัดใหม่
        printf("\n");
   }


    //วิธีที่ 1
   int R,C;
   int number = 1;
   scanf("%d%d",&R,&C);
   //loopแถว
   for(int i=0;i<R;i++){
        //loopหลัก
        for(int j=1;j<=C;j++){
            printf("%d ",number);
            //อัปเดตค่า number
            number++;
        }
        printf("\n");
   }
    //วิธีที่ 2
   int R,C;
   scanf("%d%d",&R,&C);
   for(int i=1;i<=R * C;i++){
    printf("%d ",i);
    if(i%C == 0){
        printf("\n");
    }
   }


   int R,C;
   //รับค่า RและC
   scanf("%d%d",&R,&C);
   //loop แถว
   for(int i=0;i<=R;i++){
        for(int j=0;j<=C;j++){//loop หลัก
            //สิ่งที่จะปริ้น คือ ลำดับที่ ของ i และ  j
            printf("(%d, %d) ",i,j);
        }
            //ขึ้นบรรทัดใหม่
        printf("\n");
   }

   int Number;
   //สร้าง loop ไม่รู้รอบ เพื่อรับค่าเลขเข้ามาเรื่อยๆ
   while(1){
   scanf("%d",&Number);
   //ถ้าNumber น้อยกว่าหรือเท่ากับ 0 จะทำการเบรก
    if(Number <= 0){
        break;
    }
        loop นี้  จะทำการปริ้นค่าดอกจัน ตามที่รับเลขเข้ามา
        for(int i=0; i<Number;i++){
            printf("*");
        }
    printf("\n");
   }





   int N;
   int Aster = 1;
   int Area;
    scanf("%d",&N);
    if(N >= 0 && N <= 100000){
    Area = N / 2;
    //ทำสามเหลี่ยมครึ่งแรกก่อน
    for(int Row=0;Row<=(N/2);Row++){
            for(int space = 0; space < Area; space++){
                printf(" ");
            }
            Area--; //ลดจำนวนดอกจัน
            //ส่วนที่พิมดอกจันในหลัก
        for(int Col=0;Col<Aster;Col++){
            printf("*");
        }
        printf("\n");
        //อัปเดตค่าAsterทีละ2
        Aster+=2;

    }
     Area = 1;
     Aster = N - 2;
    //ทำสามเหลี่ยมด้านล่าง สามารถใช้ตัวแปลเหมือนกับอันบนได้ เพราะคนละการทำงานของลูปบน
    for(int Row = 0; Row < (N / 2); Row++){
        for(int space = 0; space < Area; space++){
            printf(" ");
        }
        for(int Col = 0; Col < Aster; Col++){
            printf("*");
        }

        printf("\n");
            Area++;
            Aster-=2;
    }

    }

}
