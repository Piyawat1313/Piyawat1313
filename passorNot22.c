#include<stdio.h>
void main(){
     //เกณฑ์คะแนนที่จะผ่าน
    int s1,s2,s3,s4;
    scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
   //คะแนนที่ทำได้
    int k1,k2,k3,k4;
    scanf("%d %d %d %d",&k1,&k2,&k3,&k4);
    int limmit=3,count=0;
    if(k1>=s1){
        count++;
        printf("1 ");
    }
    if(k2>=s2){
        count++;
        printf("2 ");
    }
    if(k3>=s3){
       count++;
       printf("3 ");
    }
    if(k4>=s4){
        count++;
        printf("4 \n");
    }
    if(count>=limmit){
        printf("Pass\n");
    }else{
        printf("fail\n");
    }


}

