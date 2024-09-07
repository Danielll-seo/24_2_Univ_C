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
    int number = 0;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        number = rand();
        printf("random_number = %d\n", number);
    }

    // int rand() 와 void srand()의 차이점
    // > int rand가 동일한 seed를 가지고 0부터 RAND_MAX 사이의 의사 난수를 반환한다면
    // > void srand는 seed를 초기화한다. 보통 seed는 time(NULL)로 설정된다.

    return 0;
}