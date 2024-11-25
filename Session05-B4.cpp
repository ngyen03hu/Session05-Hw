#include <stdio.h>

// H�m t�nh UCLN c?a hai s? a v� b b?ng thu?t to�n Euclid
int ucln(int a, int b) {
    // L?p cho �?n khi b = 0
    while (b != 0) {
        // L�u l?i gi� tr? c?a b
        int temp = b;
        
        // C?p nh?t b th�nh ph?n d� khi chia a cho b
        b = a % b;
        
        // C?p nh?t a th�nh gi� tr? c?a b c?
        a = temp;
    }
    // Khi b = 0, gi� tr? c?a a ch�nh l� UCLN
    return a;
}

int main() {
    int a, b;
    
    // Nh?p hai s? t? ng�?i d�ng
    printf("Nh?p hai s? nguy�n a v� b: ");
    scanf("%d %d", &a, &b);

    // T�nh UCLN v� in k?t qu? ra m�n h?nh
    printf("UCLN c?a %d v� %d l�: %d\n", a, b, ucln(a, b));

    return 0;
}

