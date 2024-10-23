#include<stdio.h>
void main(){
    //input จำนวน  ที่รับได้ เพศ คะแนนคนที่1  คนแนนคนที่2
    //output ลำดับ   เพศ
    int n=0,k;
    //รับค่า nและ k
    scanf("%d %d",&n,&k);
    int score1,score2;
    int gender=0;
    int i,count1=0,count2=0;
    for( i=1;i<=n;i++){
        scanf("%d %d %d",&gender,&score1,&score2);
        //ทีมที่1 รับคนได้ k
        if(count1<k && score1>=9 && gender==1){
            printf("%d 1\n", i);
            count1++;
        }else if(count2<k && score2>=9 && gender==2){
            printf("%d 2\n", i);
            count2++;
        }else if(count1<k && score1>=9){
            printf("%d 1\n", i);
            count1++;
        }else if(count2<k &&  score2>=9){
            printf("%d 2\n", i);
            count2++;
        }
    }
}
