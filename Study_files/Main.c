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

    // int rand() �� void srand()�� ������
    // > int rand�� ������ seed�� ������ 0���� RAND_MAX ������ �ǻ� ������ ��ȯ�Ѵٸ�
    // > void srand�� seed�� �ʱ�ȭ�Ѵ�. ���� seed�� time(NULL)�� �����ȴ�.

    // number�� ������ ����� �ͺ���, number[n]�� ����Ʈ ���·� �����ϸ� �� �� �ִ� �۾����� ��������.

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