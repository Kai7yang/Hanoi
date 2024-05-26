#include <stdio.h>


int step = 0;

void hanoi(int n, char A, char B, char C) {
    if(n == 1) {
        printf("�N %c ���� %c\n", A, C);
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
    printf("�п�J�L�ơG");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("�`�@�ݭn %d �B�C\n", step);
    return 0;
}

