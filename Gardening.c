#include<stdio.h>
int main(){
    int day, people;
    int sum = 0;
    int income_h[people][day];        
    int max_income = 0, min_income = 0;     //ค่าจ้างมากที่สุด และค่าจ้างน้อยที่สุด
    int max_index = 0, min_index = 0;       //ลำดับค่าข้างมากที่สุด และค่าจ้างน้อยที่สุด
    int Total_income[people];               //ยอดรายได้ทั้งหมด ขนาดเท่า ตัวแปร people
    int count_min = 0;
    int count_max = 0;
    scanf("%d%d",&day,&people);             //รับวัน และจำนวนคน
    if(people <= 50 && day <= 300){          //เช็คว่า จำนวนวัน และ จำนวนคน เกินกว่าที่กำหนดมั้ย
       for(int i = 0; i < people; i++){       //loop จำนวนคนจ้าง
            Total_income[i] = 0;              // set ยอดค่าจ้างให้เป็น 0
            for(int j = 0; j < day; j++){           //loop รับ ชั่วโมงการจ้าง
                scanf("%d",&income_h[i][j]);
                int hour;
                if(income_h[i][j] > 10){            //ถ้าชั่วโมงที่รับมา เกินกว่า 10 ชั่วโมง 
                    hour = 10;                        //ตัวแปร ชั่วโมง เก็บ 10 ไว้
                }else{
                    hour = income_h[i][j];            //ตัวแปรชั่วโมง เก็บค่า อาเรย์ที่รับมา
                }
                Total_income[i] += hour * 40;           //ยอดค่าจ้าง บวกสะสมกับ ชั่วโมง * 40
                sum += hour * 40;                        //จำนวนยอดทั้งหมด
            }
        }
        max_income = Total_income[0];                     //set max_income เก็บอาเรย์ ของยอดค่าจ้าง
        min_income = Total_income[0];                       //set min_income เก็บค่าของยอดค่าจ้าง
        max_index = 0;
        min_index = 0;
        for(int i = 1; i < people; i++){                     //loop นี้ใช้ในการหาว่าลำดับไหนได้ค่าจ้างมากที่สุด  และ ได้ค่าจ้างน้อยที่สุด
            if(Total_income[i] > max_income){                //ถ้ายอดค่าจ้าง มากกกว่า ตัวแปรค่ามากสุดที่กำหนดไว้
                max_income = Total_income[i];
                max_index = i;
                count_max++;
            }
            if(Total_income[i] < min_income){                    //ถ้ายอดคา่จ้างน้อยกว่า ตัวแปรค่าน้อยสุด
                min_income = Total_income[i];
                min_index = i;
            }
        }
       printf("%d\n",sum);
       printf("%d\n",count_max);
       printf("%d",min_index + 1);
    }
    return 0;
}
