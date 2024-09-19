#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

// void swap(int* a, int* b){
//     // 이 함수는 Main함수의 배열실습 3(내림차순 정렬)에 필요한 swap함수이다.
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void test(int* p, char* cp)
// {
//     printf("test : p = %p, cp = %p\n", p, cp);
//     test : p = 0x7fff840d4d0c;
//     cp = 0x7fff840d4d0b;
//     *p = 60;
//     p++;
//     cp++;
// }

void inputRandomArray(int* array, int size)
{
    for(int i=0; i<size; i++){
        *(array+i) = rand() % 100;
    }
}

void printArray(int* array, int size)
{
    for(int i=0; i<size; i++){
        printf("%3d\n", *(array+i));
        if((i+1) % 10 == 0){
            printf("\n");
        }
    }
}
int main(void)
{
    /* int i = 0;
    // i = rand();
    // printf("i = %d", i);

    // repaet 10 times
    // int number[10];

    // srand(time(NULL));

    // for (int i = 0; i < 10; i++)
    // {
    //     number[i] = (rand() % 100) + 1;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("random_number = %d\n", number[i]);
    // }

    // int rand() 와 void srand()의 차이점
    // > int rand가 동일한 seed를 가지고 0부터 RAND_MAX 사이의 의사 난수를 반환한다면
    // > void srand는 seed를 초기화한다. 보통 seed는 time(NULL)로 설정된다.

    // number를 변수로 만드는 것보다, number[n]의 리스트 형태로 정의하면 할 수 있는 작업들이 많아진다.

    // -> srand를 이용한 난수 출력, 평균, 최대, 최소 구하기 (재열 실습2)
    // int number[SIZE];
    // int total = 0;
    // int max, min;
    // float avg = 0.0;
    // srand(time(NULL));
    // for (int i=0; i<SIZE; i++){
    //     number[i] = (rand() % 100) + 1;
    // }
    // for(int i=0; i<SIZE; i++){
    //     printf("%3d\t", number[i]);
    //     if((i+1) % 10 == 0) {
    //         printf("\n");
    //     }
    // }
    // for(int i=0; i<SIZE; i++){
    //     total += number[i];
    // }
    // avg = (float)total / SIZE;

    // max = number[0];
    // min = number[0];

    // for(int i=1; i<SIZE; i++){
    //     if(max < number[i]){
    //         max = number[i];
    //     }
    //     if(max > number[i]){
    //         min = number[i];
    //     }
    // }
    // printf("avg = %f, max = %d, min = %d", avg, max, min);
    */

    // 배열 실습3
    // 내림차순 정렬
    // int number[SIZE] = {0};
    // int most;
    // int temp;
    // srand(time(NULL));

    // for (int i=0; i<SIZE; i++){
    //     number[i] = (rand() % 100) + 1;
    // }

    // for (int i=0; i<SIZE-1; i++){
    //     most = i;
    //     for (int j = i+1; j < SIZE; j++){
    //         if(number[most] < number[j]){
    //             most = j;
    //         }
    //     }
    //     swap(&number[i], &number[most]);
    // }

    // for(int i=0; i<SIZE; i++){
    //     printf("%3d\t", number[i]);
    //     if((i+1) % 10 == 0) {
    //         printf("\n");
    //     }
    // }

    // test 함수
    // int a = 50;
    // char ch = '*';
    // printf("main : a = %d, ch = %d\n", a, ch);
    // main : a = 50, ch = 42;
    // test(&a, &ch);

    // int number[SIZE];
    // srand(time(NULL));
    // inputRandomArray(&number[0], SIZE);
    // printArray(number, SIZE);

    // 쇼핑몰 재고수량관리
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
    
    for(int i=0; i<Count; i++){
        printf("%d번째 상품의 갯수를 입력 > ", i+1);
        scanf("%d", &num);
        Num_of_Product[i] = num;
    }
    
    for(int i=0; i<Count; i++){
        printf("%d번째 상품의 판매수량 입력 > ", i+1);
        scanf("%d", &num);
        sell_product[i] = num;
        Num_of_Product[i] = Num_of_Product[i] - sell_product[i];
    }

    return 0;
}