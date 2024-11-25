#include<stdio.h>

int main() {
    int n, sum = 0;
    printf("moi ban nhap so :");
	scanf("%d",&n); 
    if (n > 0 ) {
      
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
     
        printf ("Tong tat ca cac so tu 1 den %d la: %d\n ",n ,sum); 
    } else {
        printf ("Vui long nhap mot so nguyen duong!\n"); 
    }

    return 0;
}

