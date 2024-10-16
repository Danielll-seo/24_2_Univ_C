#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
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

// 구조체 실습 
typedef struct pint{
    int x;
    int y;
}POINT;

// typedef struct circle{
//     POINT center;   // 원의 중심
//     double radius;  // 반지름
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

    // 문자열 입문
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
    
    // printf("입력문자열 : %s\n", input);
    // for(int i=0;i<26;i++){
    //     printf("%c 출연횟수 : %d\n", 'a' + i, count[i]);
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
    //     printf("원 안에 있습니다.\n");
    // }else{
    //     printf("원 밖체 있습니다.\n");
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