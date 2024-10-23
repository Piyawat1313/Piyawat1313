#include<stdio.h>
struct {
 int id;
 char name[52];
 int salePrice; // ราคาขาย
 int basePrice; // ราคาทุน
 int count; // จำนวนเล่มที่ขาย
} typedef BOOK;
BOOK books[5000];
struct pass_word{
    int totalQ; // ปริมาณการสั่งซื้อ
    int id;
} typedef PASS_WORD;
int main(){
    int N, P;
    char dummy[10]; // for storing end-line/new-line characters
    scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        scanf("%d", &books[i].id);
        scanf(" %99[^\n]", books[i].name);   // อ่านตัวอักษรมาไม่เกิน 99 ตัว หรือพบการขึ้นบรรทัดใหม่ (มีช่องว่างหน้า % ด้วยนะ)
        int nameLength = strlen(books[i].name);
        books[i].name[nameLength-1] = 0; // ลบตัวขึ้นบรรทัดใหม่ออก
        scanf("%d", &books[i].salePrice);
        scanf("%d", &books[i].basePrice);
        books[i].count = 0;  //เริ่มต้นการขายเป็น 0 
    }
    scanf("%d",&P);   //รับจำนวนตำสั่ง
    PASS_WORD lock[P];
    for(int j = 0; j < P; j++){
        int order,book_ID,or_book;
        scanf("%d",&order);  // รับคำสั่งซื้อ
        if(order == 1){      //ถ้าคำสั่งเป็น 1
            scanf("%d%d",&book_ID,&or_book); // รับId รับ จำนวนที่ขาย
            for(int i = 0; i < N; i++){
                if(books[i].id == book_ID){  //ถ้า struct ของ Id ตรงกับ  Id ที่รับมา
                    books[i].count += or_book; //เพิ่มจำนวนที่ขายได้
                    break;
                }
            }
        }else if(order == 2){       //ถ้า คำสั่งซื้อเป็น 2
            scanf("%d",&book_ID);   // รับ ID ของหนังสือ
            int disc = 0;           //กำหนดไม่พบหนังสือ
            for(int j = 0; j < N; j++){
                if(books[j].id == book_ID){
                    int totalQ = books[j].count * books[j].salePrice;   // ยอดขาย  =  จำนวน *  ราคาขายย
                    int totalSalePrice = books[j].count * (books[j].salePrice - books[j].basePrice);   // ราคาขาย  =  จำนวน * (ราคาขาย - ต้นทุน)
                    int totalProfit = books[j].count * (books[j].salePrice - books[j].basePrice);  //กำไรจากการขาย  =   จำนวน * (ราคาขาย  -   ต้นทุน)
                    printf("%d %s %d %d %d\n",books[j].id, books[j].name, books[j].count, totalQ, totalSalePrice);
                    disc = 1;     //เจอหนังสือแล้ว
                    break;        // หยุดกการทำงานของ  loop 
                }
            }
             if(!disc){           // ถ้าไม่ค้นพบ Book id ที่ถูกต้อง
                printf("Error\n");
            }
        }
    }
    //analysis   if (struct to struct) and
    //problem need id  name_Book and total result to sum a type Book
    return 0;
}
