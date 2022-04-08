#include "game.h"
//��ʼ������
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
//��ӡ����
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
//������
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
//ͳ����Χ�м�����
int Mine_Count(char mine[ROWS][COLS], int x, int y) {
    //�㷨ʵ��'1'-'0'==1 ,8���ַ�'1'���-8*'0'==8
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
//û���׾�չ��
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
//û���Ų鵽������
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
//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {



    while (1) {
        int x = 0;
        int y = 0;
        printf("����������1 2:>");
        rewind(stdin);
        scanf("%d%d", &x, &y);
        if (x > 0 && y > 0 && x <= row && y <= col) {
            if (mine[x][y] == '*') {
                DisplayBoard(mine, ROW, COL);
                printf("���ѱ���ը��\n");
                printf("�����¿�ʼ��Ϸ��\n");
                break;
            }
            else {
                Open(mine, show, x, y);
                DisplayBoard(show, ROW, COL);
                //����׵�����==û���Ų鵽������
                if (EASY_COUNT == Win(show)) {
                    printf("��ϲ�㣬���׳ɹ�\n");
                    DisplayBoard(mine, ROW, COL);
                    printf("�Ƿ�������Ϸ��\n");
                    break;
                }
            }
        }
        else {
            printf("�����������������");
        }
    }

}