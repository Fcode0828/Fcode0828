#include "game.h"
void menu() {
    printf("\n\tɨ*��Ϸ\n");
    printf("**************************\n");
    printf("******    1.play    ******\n");
    printf("******    0.exit    ******\n");
    printf("**************************\n");
}
game() {
    //mine������
    char mine[ROWS][COLS] = { 0 };
    //show��������
    char show[ROWS][COLS] = { 0 };
    //��ʼ������
    InitBoard(mine, ROWS, COLS, '0');
    //
    InitBoard(show, ROWS, COLS, '_');
    //������
    SetMine(mine);
    //��ӡ��̨��,0����û����
    //DisplayBoard(mine, ROW, COL);
    //��ӡ����
    DisplayBoard(show, ROW, COL);
    //�Ų���
    FindMine(mine, show, ROW, COL);

}
void test() {
    int input = 0;
    srand((unsigned int)time(NULL));

    do {
        menu();
        input = 2;
        printf("��ѡ��:>");
        rewind(stdin);//����Ϊ�����뻺����
        scanf("%d", &input);
        switch (input) {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����������ѡ��\n");
            break;
        }

    } while (input);
}
int main() {

    test();
    return 0;
}