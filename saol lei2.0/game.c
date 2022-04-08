#include "game.h"
//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
    int i = 0;
    int j = 0;
    //rows=11  cols=11
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            board[i][j] = set;
        }
    }
}
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
    int i = 0;
    int j = 0;
    printf("\n0  1 2 3 4 5 6 7 8 9 \n");
    printf("   _________________\n");
    for (i = 1; i <= row; i++) {
        printf("%d ", i);
        for (j = 1; j <= col; j++) {
            if (j == 1)
                printf("|%c", board[i][j]);
            else if (j == col)
                printf(" %c|", board[i][j]);
            else
                printf(" %c", board[i][j]);
        }
        printf("\n");
    }
}
//布置雷
void SetMine(char mine[ROWS][COLS]) {
    int count = EASY_COUNT;
    while (count) {
        int x = rand() % 9 + 1;
        int y = rand() % 9 + 1;
        if (mine[x][y] == '0') {
            mine[x][y] = '*';
            count--;
        }
    }
}
//统计周围有几个雷
int Mine_Count(char mine[ROWS][COLS], int x, int y) {
    //算法实现'1'-'0'==1 ,8个字符'1'相加-8*'0'==8
    int i = 0;
    int j = 0;
    int count = 0;
    for (i = x - 1; i <= x + 1; i++) {
        for (j = y - 1; j <= y + 1; j++) {
            if (mine[i][j] == '*')
                count++;
        }
    }
    return count;
}
//没有雷就展开
Open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) {
    int i = 0;
    int j = 0;
    int count = 0;
    count = Mine_Count(mine, x, y);
    //printf("%d\n", count);
    if (count == 0) {
        show[x][y] = ' ';
        for (i = x - 1; i <= x + 1; i++) {
            for (j = y - 1; j <= y + 1; j++) {
                if (show[i][j] != ' ' && i > 0 && i < ROW && j>0 && j < COL)
                    Open(mine, show, i, j);
            }
        }
        return;
    }
    else
        show[x][y] = count + '0';

}
//没有排查到的数量
int Win(char show[ROWS][COLS]) {
    int count = 0;
    int i = 0;
    int j = 0;
    for (i = 1; i <= ROW; i++) {
        for (j = 1; j <= COL; j++) {
            if (show[i][j] == '_');
            count++;
        }
    }
    return count;
}
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {



    while (1) {
        int x = 0;
        int y = 0;
        printf("请输入行列1 2:>");
        rewind(stdin);
        scanf("%d%d", &x, &y);
        if (x > 0 && y > 0 && x <= row && y <= col) {
            if (mine[x][y] == '*') {
                DisplayBoard(mine, ROW, COL);
                printf("你已被雷炸死\n");
                printf("请重新开始游戏！\n");
                break;
            }
            else {
                Open(mine, show, x, y);
                DisplayBoard(show, ROW, COL);
                //如果雷的数量==没有排查到的数量
                if (EASY_COUNT == Win(show)) {
                    printf("恭喜你，排雷成功\n");
                    DisplayBoard(mine, ROW, COL);
                    printf("是否开启新游戏！\n");
                    break;
                }
            }
        }
        else {
            printf("输入错误，请重新输入");
        }
    }

}