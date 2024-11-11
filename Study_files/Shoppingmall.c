#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    
    int id;
    int num;
    int Count;
    
    printf("입고할 상품의 개수(종류)를 입력하세요 > ");
    scanf("%d", &Count);
    
    int Num_of_Product[Count];
    int sell_product[Count];
    
    int b = sizeof(Num_of_Product) / sizeof(int);
    int c = sizeof(sell_product) / sizeof(int);
    printf("Num_of_Product > %d\n", b);
    printf("sell_product %d\n", c);
    
    // 각 상품의 재고수량 입력
    printf("\n");
    for(int i=0; i<Count; i++){
        printf("%d번째 상품의 갯수를 입력 > ", i+1);
        scanf("%d", &num);
        Num_of_Product[i] = num;
    }
    
    // 각 상품의 판매수량 입력
    printf("\n");
    for(int i=0; i<Count; i++){
        printf("%d번째 상품의 판매수량 입력 > ", i+1);
        scanf("%d", &num);
        sell_product[i] = num;
        Num_of_Product[i] = Num_of_Product[i] - sell_product[i];
    }
    
    // id
    printf("\n상품의 id입력 > ");
    scanf("%d", &id);
    printf("해당 id의 재고 > %d\n", Num_of_Product[id-1]);
    
    // 전체 상품 재고수량 출력 
    printf("\n");
    for(int i=0; i<Count; i++){
        printf("%d번째 상품의 재고수량 > %d\n", i+1, Num_of_Product[i]);
    }

    // 판매 상품의 갯수 합산
    int sell_Hap=0;
    int Num_Hap=0;
    int Percent;
    for(int i=0; i<Count; i++){
        sell_Hap = sell_Hap + sell_product[i];
        // 포인터인가
    }
    Percent = sell_Hap;
    printf("총 판매량 > %d (판매율 : %f)\n", sell_Hap);

    return 0;
}