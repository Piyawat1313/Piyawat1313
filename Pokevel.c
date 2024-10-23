#include<stdio.h>
#include<string.h>
//struct แรกเก็บกลุ่ม โค้ด ชื่อ ค่าพลัง
struct {
 int code;
 char name[52];
 int power[9];
} typedef POKEMON;
//กลุ่มนี้เก็บค่าพลังและโค้ดที่เราเจอ
struct {
 int code;
 int level;
} typedef HAND;

void main() {
    //เรียกใช้Struct กลุ่มแรก
    POKEMON mon[200];
    //รับจำนวนโปรเม่อนที่มีอยู่
    int count_mon, count_hand;
    scanf("%d", &count_mon);
    for(int i = 0; i < count_mon; ++i) {
        scanf("%d", &mon[i].code);
        scanf("%s", mon[i].name);
        //รับค่าพลัง
        for(int v = 1; v <= 8; ++v) {
            scanf("%d", &mon[i].power[v]);
        }
    }
    //ส่วนนี้คือ โปรเกม่อนที่เราเจอ
    scanf("%d", &count_hand);
    HAND hand[count_hand];
    for(int i = 0; i < count_hand; i++){
        scanf("%d%d",&hand[i].code,&hand[i].level);
    }
    //นำสิ่งที่เจอ กับ สิ่งที่มี มาเทียบกับกัน นั่นคือ กลุ่มแรก กับกลุ่มที่ 2 มาเทียบกับว่าเหมือนกันมั้ย
    for(int i = 0; i < count_hand; i++){
        for(int j = 0; j < count_mon; j++){
                //ถ้ากลุ่มที่ 1 โค้ดเหมือนกับ โค้ดกลุ่มที่เราเจอ
            if(hand[i].code == mon[j].code){
                //จะดึก level จากค่าที่เราเจอมา  Level เปรียบเสมือน power
                int index = hand[i].level;
                //นำ index ที่ดึงมาได้มาใส่ไว้ในstruct ของ mon
                int power = mon[j].power[index];
                //print ชื่อ และ ค่าพลังออกมา
                printf("%s %d\n",mon[j].name, power);
            }
        }
    }
}
