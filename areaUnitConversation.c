#include<stdio.h>
void main(){
    //intput จำนวนไร่ กับ จำนวนตารางวา
    int r,w;
    scanf("%d%d",&r,&w);
    if(w>=400){
    r+=w/400;
    w=w%400;
    }
    if(r!=0 && w!=0){
        printf("Total = %d r %d w\n",r,w);
    }else if(r>0){
        printf("R = %d r\n",r);
    }else if(w>0){
        printf("W = %d w\n",w);
    }
}
