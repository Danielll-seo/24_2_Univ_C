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

    // int rand() �� void srand()�� ������
    // > int rand�� ������ seed�� ������ 0���� RAND_MAX ������ �ǻ� ������ ��ȯ�Ѵٸ�
    // > void srand�� seed�� �ʱ�ȭ�Ѵ�. ���� seed�� time(NULL)�� �����ȴ�.

    return 0;
}