#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    int user1[N];
    int user2[N];
    int win1 = 0;
    int win2 = 0;
    //input user1
    for(int i = 0; i < N; i++){
        scanf("%d",&user1[i]);
    }
    // input user2
    for(int i = 0; i < N; i++){
        scanf("%d",&user2[i]);
    }
    // สร้าง loop เปรียบเทียบทั้ง 2Array โดย ใช้กฎ เป่ายิ้งฉุบ
    for(int i = 0; i < N; i++){
        if((user1[i] == 1 && user2[i] == 3) ||
           (user1[i] == 2 && user2[i] == 1) ||
           (user1[i] == 3 && user2[i] == 2)){
            //ตัวแปลเก็บค่า ของ Array 1
            win1++;
        }
        else if((user2[i] == 1 && user1[i] == 3)||
                (user2[i] == 2 && user1[i] == 1)||
                (user2[i] == 3 && user1[i] == 2)){
            //ตัวแปลเก็บค่า ของ Array 2
            win2++;
        }
    }
    //ปริ้น Score ทั้งสองทีม
    printf("%d %d\n",win1,win2);
    //สร้างเงื่อนไข ว่า ทีมไหนชนะ
    if(win1 > win2){
        printf("1");
    }
    else if(win2 > win1){
        printf("2");
    }
    else if(win1 == win2){
        printf("0");
    }
}
