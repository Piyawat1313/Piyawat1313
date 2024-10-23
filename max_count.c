#include<stdio.h>
void main(){
    int K,N;
    scanf("%d%d",&K,&N);
    int Number_K;
    int sum_k = 0;
    //เก็บค่ามากที่สุดของK
    int Max = 0;
    //เก็บค่ามากสุดของจำนวนชุด
    int Max_i = 0;
    if(N >= 2 && N <= 2000){
        for(int i =1; i <= N; i++){
            sum_k = 0;
                while(1){
                    scanf("%d",&Number_K);
                    if(Number_K == 0){
                        break;
                    }
                    if(Number_K % K == 0 && Number_K > 0){
                        sum_k++;
                    }
                }
            //ตัวแปลนับรอบที่หาร K ลงตัว  มากกว่า max หรือ เท่ากับMax และ จำนวนชุด มากกว่า ตัวแปลค่ามากสุดของ จำนวนชุด
            if(sum_k > Max || (sum_k == Max && i > Max_i)){
                Max = sum_k;
                Max_i = i;

            }
        }
        printf("%d %d",Max_i,Max);
    }
}
