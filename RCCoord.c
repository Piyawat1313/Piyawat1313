#include<stdio.h>
void main(){
    int R,C;
    scanf("%d%d",&R,&C);
    for(int i=0;i<=R;++i){
        for(int j=0;j<=C;j++){
            printf("(%d, %d) ",i,j);
        }
        printf("\n");
    }
}
