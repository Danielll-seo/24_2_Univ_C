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
    
    for(int i=0; i<Count; i++){
        printf("%d��° ��ǰ�� ������ �Է� > ", i+1);
        scanf("%d", &num);
        Num_of_Product[i] = num;
    }
    
    for(int i=0; i<Count; i++){
        printf("%d��° ��ǰ�� �Ǹż��� �Է� > ", i+1);
        scanf("%d", &num);
        sell_product[i] = num;
        Num_of_Product[i] = Num_of_Product[i] - sell_product[i];
    }
    
    // id
    printf("��ǰ�� id�Է� > ");
    scanf("%d", &id);
    printf("�ش� id�� ��� > %d\n", Num_of_Product[id]);

    return 0;
}