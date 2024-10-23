#include<stdio.h>
struct {
 int id;
 char name[52];
 int salePrice; // ราคาขาย
 int basePrice; // ราคาทุน
 int count;
} typedef BOOK;
BOOK books[5000];
int main(){
    int N, P;
    char dummy[10]; // for storing end-line/new-line characters
    scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        scanf("%d", &books[i].id);
        // อ่านตัวอักษรมาไม่เกิน 99 ตัว หรือพบการขึ้นบรรทัดใหม่ (มีช่องว่างหน้า % ด้วยนะ)
        scanf(" %99[^\n]", books[i].name);
        int nameLength = strlen(books[i].name);
        books[i].name[nameLength-1] = 0; // ลบตัวขึ้นบรรทัดใหม่ออก
        scanf("%d", &books[i].salePrice);
        scanf("%d", &books[i].basePrice);
        books[i].count = 0;
    }
    scanf("%d",&P);
    int Q;
    for(int j = 1; j < P; j++){
            scanf("%d",&Q);
            if(Q == 1){

            }
        scanf("%d",&books[j].id);
    }


    return 0;
}
