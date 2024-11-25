#include <stdio.h>

// Hàm tính UCLN c?a hai s? a và b b?ng thu?t toán Euclid
int ucln(int a, int b) {
    // L?p cho ð?n khi b = 0
    while (b != 0) {
        // Lýu l?i giá tr? c?a b
        int temp = b;
        
        // C?p nh?t b thành ph?n dý khi chia a cho b
        b = a % b;
        
        // C?p nh?t a thành giá tr? c?a b c?
        a = temp;
    }
    // Khi b = 0, giá tr? c?a a chính là UCLN
    return a;
}

int main() {
    int a, b;
    
    // Nh?p hai s? t? ngý?i dùng
    printf("Nh?p hai s? nguyên a và b: ");
    scanf("%d %d", &a, &b);

    // Tính UCLN và in k?t qu? ra màn h?nh
    printf("UCLN c?a %d và %d là: %d\n", a, b, ucln(a, b));

    return 0;
}

