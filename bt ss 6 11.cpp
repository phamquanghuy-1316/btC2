#include <stdio.h>

int main() {
    int n,count = 0, b = 2;
    printf("nhap vao 1 so nguyen duong ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("so nhap vao phai la so nguyen duong ");
        return 0;
    }
    printf("%d so nguyen to dau tien la \n", n);
    while (count < n) {
        int is_prime = 1;
        for (int i = 2; i * i <= b; i++) {
            if (b % i == 0) {
                is_prime = 0;
                break;
            } 
        }
        if (is_prime==1) {
            printf("%d ", b);
            count++;
        }
        b++;
    }
    return 0;
}
