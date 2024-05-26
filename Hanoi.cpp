#include <stdio.h>


int step = 0;

void hanoi(int n, char A, char B, char C) {
    if(n == 1) {
        printf("將 %c 移到 %c\n", A, C);
        step++;
    }
    else {
        hanoi(n-1, A, C, B);
        hanoi(1, A, B, C);
        hanoi(n-1, B, A, C);
    }
}

int main() {
    int n;
    printf("請輸入盤數：");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("總共需要 %d 步。\n", step);
    return 0;
}

