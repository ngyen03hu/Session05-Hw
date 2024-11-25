#include <stdio.h>

int main() {
    int a, b, ketqua;
    int op;

    do {
        printf("Moi ban nhap so dau tien:\n");
        scanf("%d", &a);
        printf("Moi ban nhap so thu hai:\n");
        scanf("%d", &b);

        printf("1. Tong cua 2 so\n");
        printf("2. Hieu cua 2 so\n");
        printf("3. Tich cua 2 so\n");
        printf("4. Thuong cua 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                ketqua = a + b;
                printf("Tong cua 2 so la: %d\n", ketqua);
                break;
            case 2:
                ketqua = a - b;
                printf("Hieu cua 2 so la: %d\n", ketqua);
                break;
            case 3:
                ketqua = a * b;
                printf("Tich cua 2 so la: %d\n", ketqua);
                break;
            case 4:
                if (b != 0) {
                    ketqua = a / b;
                    printf("Thuong cua 2 so la: %d\n", ketqua);
                } else {
                    printf("Loi: Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Cam on ban da su dung chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (op != 5);

    return 0;
}

/
