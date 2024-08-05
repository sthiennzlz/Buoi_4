#include <stdio.h>
//Ham tim so fibonacci thu n
int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhap so n: ");
    scanf_s("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }
    int ketQua = fibonacci(n);
    printf("So Fibonacci thu %d la: %d\n", n, ketQua);
    return 0;
}