#include<stdio.h>
void main(){
    //input x,y,z สร้างลูป  ผลลัพธิ์ xyz
    int x,y,z;
    int number;
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        scanf("%d%d%d",&x,&y,&z);
        if(x==y && x==z && z==y){
            printf("xyz\n");
        }else if(x!=y && x==z){
            printf("xz\n");
        }else if(x==y && z!=y){
            printf("xy\n");
        }else if(y==z && y!=x){
            printf("yz\n");
        }else if(z>y && z>x){
            printf("z\n");
        }else if(y>x && y>z){
            printf("y\n");
        }else if(x>y && x>z){
            printf("x\n");
        }
    }

}
