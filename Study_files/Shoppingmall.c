#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    
    int id;
    int num;
    int Count;
    
    printf("�԰��� ��ǰ�� ����(����)�� �Է��ϼ��� > ");
    scanf("%d", &Count);
    
    int Num_of_Product[Count];
    int sell_product[Count];
    
    int b = sizeof(Num_of_Product) / sizeof(int);
    int c = sizeof(sell_product) / sizeof(int);
    printf("Num_of_Product > %d\n", b);
    printf("sell_product %d\n", c);
    
    // �� ��ǰ�� ������ �Է�
    printf("\n");
    for(int i=0; i<Count; i++){
        printf("%d��° ��ǰ�� ������ �Է� > ", i+1);
        scanf("%d", &num);
        Num_of_Product[i] = num;
    }
    
    // �� ��ǰ�� �Ǹż��� �Է�
    printf("\n");
    for(int i=0; i<Count; i++){
        printf("%d��° ��ǰ�� �Ǹż��� �Է� > ", i+1);
        scanf("%d", &num);
        sell_product[i] = num;
        Num_of_Product[i] = Num_of_Product[i] - sell_product[i];
    }
    
    // id
    printf("\n��ǰ�� id�Է� > ");
    scanf("%d", &id);
    printf("�ش� id�� ��� > %d\n", Num_of_Product[id-1]);
    
    // ��ü ��ǰ ������ ��� 
    printf("\n");
    for(int i=0; i<Count; i++){
        printf("%d��° ��ǰ�� ������ > %d\n", i+1, Num_of_Product[i]);
    }

    // �Ǹ� ��ǰ�� ���� �ջ�
    int sell_Hap=0;
    int Num_Hap=0;
    int Percent;
    for(int i=0; i<Count; i++){
        sell_Hap = sell_Hap + sell_product[i];
        // �������ΰ�
    }
    Percent = sell_Hap;
    printf("�� �Ǹŷ� > %d (�Ǹ��� : %f)\n", sell_Hap);

    return 0;
}