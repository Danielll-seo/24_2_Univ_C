#include <stdio.h>
#include <stdlib.h>

// random num func
int main(void)
{
    // int i = 0;
    // i = rand();
    // printf("i = %d", i);

    // repaet 10 times
    int number = 0;
    
    for (int i = 0; i < 10; i++)
    {
        number = rand();
        printf("random_number = %d\n", number);
    }

    return 0;
}