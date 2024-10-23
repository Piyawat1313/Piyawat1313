#include<stdio.h>
void main(){
    double w,h,sum;
    scanf("%lf%lf",&w,&h);
    if(w<=0){
        printf("invalid width");
    }else if(h<=0){
        printf("invalid height");
    }else if(w<=0 && h<=0){
        printf("invalid width and height");
    }else if(w>0 && h>0){
      sum=w*h;
    printf("%.2lf\n",sum);
    }



}
