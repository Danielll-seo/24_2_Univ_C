#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 100

// void swap(int* a, int* b){
//     // �� �Լ��� Main�Լ��� �迭�ǽ� 3(�������� ����)�� �ʿ��� swap�Լ��̴�.
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

// void inputRandomArray(int* array, int size)
// {
//     for(int i=0; i<size; i++){
//         *(array+i) = rand() % 100;
//     }
// }

// void printArray(int* array, int size)
// {
//     for(int i=0; i<size; i++){
//         printf("%3d\n", *(array+i));
//         if((i+1) % 10 == 0){
//             printf("\n");
//         }
//     }
// }

// ����ü �ǽ� 
typedef struct pint{
    int x;
    int y;
}POINT;

// typedef struct circle{
//     POINT center;   // ���� �߽�
//     double radius;  // ������
// }CIRCLE;

// typedef struct rect{
//     POINT lb;   // left bottom
//     POINT rt;   // right top
// }RECT;

// double dist(POINT p1, POINT p2){
//     return sqrt(pow((p2.x - p1.x),2)+pow((p2.y - p1.y),2));
// }

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
    */

    // �迭 �ǽ�3
    // �������� ����
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

    // test �Լ�
    // int a = 50;
    // char ch = '*';
    // printf("main : a = %d, ch = %d\n", a, ch);
    // main : a = 50, ch = 42;
    // test(&a, &ch);

    // int number[SIZE];
    // srand(time(NULL));
    // inputRandomArray(&number[0], SIZE);
    // printArray(number, SIZE);

    // ���ڿ� �Թ�
    // char Message2[5] = {'a', 'b', 'c', 'd', 'e'};
    // char Message[5] = {'a', 'b', 'c', '\0'};
    
    // printf("message = %s, message2 = %s", Message, Message2);

    // int ch;
    // char message[100];
    // int i = 0;
    // while((ch = getchar()) != '\n'){
    //     message[i++] = ch;
    // }
    // message[i] = '\0';
    // printf("%s", message);

    // char input[200] = "";
    // int count[26] = {0};
    // int ch;
    // int i = 0;
    
    // while((ch = getchar()) != EOF){
    //     input[i++] = ch;
    // }
    // i = 0;
    // while(input[i] != '\0'){
    //     if(input[i] >= 'a' && input[i] <= 'z'){
    //         count[input[i] - 'a']++;
    //     }
    //     i++;
    // }
    
    // printf("�Է¹��ڿ� : %s\n", input);
    // for(int i=0;i<26;i++){
    //     printf("%c �⿬Ƚ�� : %d\n", 'a' + i, count[i]);
    // }

    // CIRCLE c1 = {{10, 10}, 4.5};
    // CIRCLE c2;
    // c2.radius = 5.5;
    // c2.center.x = 10;
    // c2.center.y = 20;
    // POINT point = {10,15};
    // double distance;

    // printf("CIRCLE1 = (%d, %d), r : %lf\n", c1.center.x, c1.center.y, c1.radius);
    // printf("CIRCLE2 = (%d, %d), r : %lf\n", c2.center.x, c2.center.y, c2.radius);
    // printf("point = (%d, %d)\n", point.x, point.y);

    // distance = dist(c1.center, point);
    // if(distance <= c1.radius){
    //     printf("�� �ȿ� �ֽ��ϴ�.\n");
    // }else{
    //     printf("�� ��ü �ֽ��ϴ�.\n");
    // }

    POINT point[SIZE] = {0};
    POINT temp = {0, 0};
    int least;

    srand(time(NULL));
    for(int i=0; i<SIZE; i++){
        point[i].x = rand() % 101;
        point[i].y = rand() % 101;
    }
    for(int i=0; i<SIZE; i++){
        printf("point[%d] : (%d, %d)\n", i, point[i].x, point[i].y);
    }

    return 0;
}