#include<stdio.h>
void main(){
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    int sum,max;
    if((w>=1 && w<=10000)&&(x>=1 && x<=10000)&&
      (y>=1 && y<=10000)&&(z>=1 && z<=10000)){
        for(;;){
                if(w<0 || x<0 || y<0 || z<0 ){
                break;
              }
              scanf("%d%d%d%d",&w,&x,&y,&z);

              if(w<=x && w<=y && w<=z){
                sum=x+y+z;
                printf("sum = %d\n",sum);
            }
            if(x<=w && x<=y && x<=z){
                sum=w+y+z;
                printf("sum = %d\n",sum);
            }
            if(y<=w && y<=x && y<=z){
                sum=w+x+z;
                printf("sum = %d\n",sum);
            }
            if(z<=w && z<=x && z<=y){
                sum=w+x+y;
                printf("sum = %d\n",sum);
            }


        }

    }
}
