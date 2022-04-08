#include "game.h"
void menu() {
    printf("\n\t扫*游戏\n");
    printf("**************************\n");
    printf("******    1.play    ******\n");
    printf("******    0.exit    ******\n");
    printf("**************************\n");
}
game() {
    //mine数组雷
    char mine[ROWS][COLS] = { 0 };
    //show数组棋盘
    char show[ROWS][COLS] = { 0 };
    //初始化数组
    InitBoard(mine, ROWS, COLS, '0');
    //
    InitBoard(show, ROWS, COLS, '_');
    //布置雷
    SetMine(mine);
    //打印后台雷,0代表没有雷
    //DisplayBoard(mine, ROW, COL);
    //打印棋盘
    DisplayBoard(show, ROW, COL);
    //排查雷
    FindMine(mine, show, ROW, COL);

}
void test() {
    int input = 0;
    srand((unsigned int)time(NULL));

    do {
        menu();
        input = 2;
        printf("请选择:>");
        rewind(stdin);//设置为无输入缓冲区
        scanf("%d", &input);
        switch (input) {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，请重新选择！\n");
            break;
        }

    } while (input);
}
int main() {

    test();
    return 0;
}