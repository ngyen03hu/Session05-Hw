#include <stdio.h>

int main() {
	int i;
	int j;
    printf(" Bang cuu truong nhan:\n");
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }
    printf("bang cuu truong chia :\n");
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d ÷ %d = %.2f\n", i * j, i, (float)(i * j) / i);
        }
        printf("\n"); 
    }

    return 0;
}

