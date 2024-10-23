#include<stdio.h>
void main(){

    int X,Y;
    scanf("%d %d",&X,&Y);
    int M,N;
    scanf("%d %d",&M,&N);
    //สร้างตัวแปรเก็บคำนวนของไม้แผ่น
    int sum_m=(M*2)+(N*1);
    //printf("total sum_m = %d\n",sum_m);
    //ตัวแปรเก็บการคำนวนของไม้ท่อน
    int sum_n=(M*6)+(N*4);
    //printf("total sum_n = %d\n",sum_n);
    //ตัวแปรเก็บค่าการคำนวนของไม้แผ่น
    int W=X-sum_m;
    //printf("W = %d\n",W);
    //ตัวแปรเก็บค่าการใช้ไปของไม้ท่อน
    int D=Y-sum_n;
    //printf(" D = %d\n",D);
    //ถ้าผลลัพธิ์มีค่าตั้งแต่0ขึ้นไป
    if(W>=0 && D>=0){
        //ปริ้นผลลัพธิ์ออกมา
        printf("Yes %d %d",W,D);
    }else{
        if(W>=0 && D<0){
                D*=(-1);
            printf("No 0 %d", D);

        }else if(D>=0 && W<0){
                W*=(-1);
           printf("No %d 0", W);


        }





    }

}

