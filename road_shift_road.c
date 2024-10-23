#include<stdio.h>
void main(){
    int N,K;
    scanf("%d%d",&N,&K);
    int Number[N];
    int Max = 0;
    int sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%d",&Number[i]);
        if(Number[i] < 0){
            break;
        }
    }
    //หาค่าตรงกลาง โดยสร้าง Loop
    for(int center = K; center < N - K; center++){
            //หาค่าทางซ้ายที่ถัดจากเลขตรงกลางออกมา
        int start = center - K;
            //หาค่าทางขวาที่ถัดมาจากตรงกลาง
        int stop = center + K;
        //Loop นี้จะทำการ เริ่มตั้งแต่ ค่าที่เราหาได้จากทางซ้ายและขวา
        for(int i = start; i <= stop; i++){
                //นำเลขในอาเรย์ มาบวกกัน
            sum+=Number[i];
        }
        //ถ้า เลขที่บวกในอาเรย์ มากกว่า ค่ามากสุด
        if(sum > Max){
                //Max จะเก็บค่ามากที่สุดของ Sum
            Max = sum;
        }
        //reset sum ทุกรอบที่วนซ้ำ
        sum = 0;
    }
    printf("%d",Max);
}
