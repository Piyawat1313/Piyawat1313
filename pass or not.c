#include<stdio.h>
void main(){
    int i=0,limmit=3;
    int n1,n2,n3,n4,s1,s2,s3,s4;
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
    if(n1<=s1){
            i+=1;
        printf("1 ");
    }if(n2<=s2){
        i+=1;
        printf("2 ");
    }if(n3<=s3){
        i+=1;
        printf("3 ");
    }if(n4<=s4){
        i+=1;
        printf("4 ");
    }if(i>=limmit){
        printf("\npass");

    }else if(i==0){
        printf("0\nfail");
    }else if(i<limmit){
        printf("\nfail");
    }
}
