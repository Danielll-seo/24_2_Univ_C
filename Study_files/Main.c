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

    // int rand() �� void srand()�� ������
    // > int rand�� ������ seed�� ������ 0���� RAND_MAX ������ �ǻ� ������ ��ȯ�Ѵٸ�
    // > void srand�� seed�� �ʱ�ȭ�Ѵ�. ���� seed�� time(NULL)�� �����ȴ�.

    // number�� ������ ����� �ͺ���, number[n]�� ����Ʈ ���·� �����ϸ� �� �� �ִ� �۾����� ��������.

    // -> srand�� �̿��� ���� ���, ���, �ִ�, �ּ� ���ϱ� (�翭 �ǽ�2)
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

    // �迭 �ǽ�3
    // ����
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