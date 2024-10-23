#include <stdio.h>

void main(){
  //ตัวเลขที่ผู้ใช้สนใจกับเลขที่รับเข้ามาอีกที
  int num,number,tem;
    //consec=ตัวเก็บเลขซ้ำว่าที่ผู้ใช้สนใจและเลขซ้ำมีกี่ตัว
    //con_max=ตัวแปรเก็บความต่อเนื่องของตัวเลข
    int consec=0, max_con=0;
    //รับค่าตัวเลขที่ผู้ใช้สนใจ
    scanf("%d",&num);
    while(1){
        //รับค่าเลขอีกตัว
        scanf("%d",&number);
        //ถ้าตัวเลขที่รับมาเป็น0 ให้ทำการหยุดloopทันที
        if(number==0){
            break;
        }
        //ถ้าตัวเลขซ้ำกัน
        if(number==num){
            //นับตัวเลขที่ซ้ำไปว่ามีกี่ตัว
            consec++;
                //ถ้าตัวนับเลขซ้ำมากกว่า ความต่อเนื่อง
                if(consec > max_con){
                    //ให้เก็บค่าตัวที่ซ้ำไว้ล่าสุด
                    max_con=consec;
                }
                    if(number!=num){
                        max_con=consec;
                    }
        //ถ้ามีตัวอื่นมาคั่น
        }else{
            //reset consec
            consec=0;
        }
        //แสดงผลลัพธิ๋ของความต่อเนื่อง
        printf("num %d\tnumber %d\tconsec %d\t max_con %d\n",num,number,consec,max_con);
    }
}

