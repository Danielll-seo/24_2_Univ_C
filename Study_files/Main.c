#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

// random num func
int main(void)
{
    // int i = 0;
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

    // 배열 실습3
    // 정렬
    int number[SIZE];
    srand(time(NULL));

    for (int i=0; i<SIZE; i++){
        number[i] = (rand() % 100) + 1;
    }

    for (int i=0; i<SIZE; i++){

    }

    for(int i=0; i<SIZE; i++){
        printf("%3d\t", number[i]);
        if((i+1) % 10 == 0) {
            printf("\n");
        }
    }
    
    return 0;
}