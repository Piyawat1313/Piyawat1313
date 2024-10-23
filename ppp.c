#include<stdio.h>
#include<string.h>
struct {
 int code;
 char name[52];
 int power[9];
} typedef POKEMON;
struct {
 int code;
 int level;
} typedef HAND;
void main() {
    POKEMON mon[200];
    int N, K;
    scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        scanf("%d", &mon[i].code);
        scanf("%s", mon[i].name);
        for(int v = 1; v <= 8; ++v) {
            scanf("%d", &mon[i].power[v]);
        }
    }
    scanf("%d", &K);
    HAND hand[200];
    for(int i = 0; i < K; i++){
        scanf("%d%d",&hand[i].code,&hand[i].level);
    }
    for(int i = 0; i < K; i++){
        for(int j = 0; j < N; j++){
            if(hand[i].code == mon[j].code){
                int index = hand[i].level;
                int power = mon[j].power[index];
                printf("%s %d",mon[j].name, power);
                printf("\n");
            }
        }
    }
}
