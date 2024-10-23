#include<stdio.h>
void main(){
    int K,K1,K2,S1,S2,G;
    scanf("%d %d %d %d %d %d",&K,&K1,&K2,&S1,&S2,&G);
    if(K1<K && S1>=9 && G==1){
        printf("1");
    }else if(K2<K && S1>=9 && G==2){
        printf("2");
    }else if(K1<K && S1>=9){
        printf("1");
    }else if(K2<K && S2>=9){
        printf("2");
    }else if(S1<S2){
        printf("2");
    }else if(S2<S1){
        printf("1");
    }else{
        printf("0");
    }
}
