#include<stdio.h>
void main(){
    //รับกิโลมเตร  ระยะเวลา นาที
    double X,H,M;
    scanf("%lf%lf%lf",&X,&H,&M);
    double process=0;
    double total;
    if(X > 0){
       process = H + M / 60.0;
       total = process * X;
       printf("%.1lf\n",total);
    }else{
        X = X * (-1);
        process = H + M / 60.0;
        total = process * X;
        printf("%.1lf\n",total);
         printf("reverse\n");
    }



}
