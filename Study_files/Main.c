#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    int number[10];
    int total = 0;
    int manx, min;
    float avg = 0.0;
    srand(time(NULL));
    for (int i=0; i<10; i++){
        number[i] = (rand() % 100) + 1;
    }
    for(int i=0; i<10; i++){
        printf("%3d\t", number[i]);
        if((i+1) % 5 == 0) {
            printf("\n");
        }
    }
    for(int i=0; i<10; i++){
        total += number[i];
    }
    avg = total / 10.0;
    printf("%f", avg);
    
    return 0;
}