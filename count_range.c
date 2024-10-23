#include<stdio.h>
void main(){
    int x,y,num,i=0,les=0,max=0;
    scanf("%d%d",&x,&y);
    for(;;){
        scanf("%d",&num);
        if(num==0){
            break;
        }
        if(num>x && num<y){
            i++;
        }
        if(num<x && num>y){
            i++;
        }
            if(num>x && num>y){
                max++;
            }
            if(num<y && num<x){
                les++;
            }

    }
    printf("%d\n%d\n%d",i,les,max);
}
