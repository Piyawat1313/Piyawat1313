#include<stdio.h>
void main(){
   int w,x,y,z;
   scanf("%d%d%d%d",&w,&x,&y,&z);
   int sum;
   if(w<=x && w<=y && w<=z){
        sum=x+y+z;
        printf("%d\n",sum);
   }else if(x<=w && x<=y && x<=z){
        sum=w+y+z;
        printf("%d\n",sum);
   }else if(y<=w && y<=x && y<=z){
        sum=w+x+z;
        printf("%d\n",sum);
   }else if(z<=w && z<=x && z<=y){
        sum=w+x+y;
        printf("%d\n",sum);
   }



}
