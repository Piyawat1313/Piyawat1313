#include<stdio.h>
void main(){
    int R,C;
    int num = 1;
    scanf("%d %d",&R,&C);
    for(int i=1;i<=R;i++){
        for(int n=1;n<= C;n++){
            printf("%d ",num);
            num++;
        }
    printf("\n");

    }
}
