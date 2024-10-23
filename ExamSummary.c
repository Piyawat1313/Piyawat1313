#include<stdio.h>
void main(){
    //เกณฑ์คะแนน
    int s1,s2,s3,s4;
    int subject1=0,subject2=0,subject3=0,subject4=0;
    int limmit=3;
    scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
    int tester,count=0,pass=0;
    scanf("%d",&tester);
    if(tester<=100000){
        //คะแนนของผู้เข้าสอบที่ทำได้
        int t1,t2,t3,t4;
        for(int i=0;i<tester;i++){
            scanf("%d %d %d %d",&t1,&t2,&t3,&t4);
            if(t1>=s1){
                count++;
                subject1++;
            }
            if(t2>=s2){
                count++;
                subject2++;
            }
            if(t3>=s3){
                count++;
                subject3++;
            }
            if(t4>=s4){
                count++;
                subject4++;
            }
            if(count>=limmit){
                printf("pass\n");
                pass++;
            }else if(count<limmit || count==0){
                printf("fail\n");
            }
            count=0;
        }

        printf("%d\n",pass);
        printf("%d %d %d %d",subject1,subject2,subject3,subject4);
    }

}
