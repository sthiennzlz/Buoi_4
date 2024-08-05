#include <stdio.h>
//Ham Xuat fibonacci nho hon m
void xuatFibonacciNhoHonM(int m) {
    int a = 0, b = 1, c;

    printf("Day so Fibonacci nho hon %d la:\n", m);

    while (a < m) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int m;
    printf("Nhap gia tri m: ");
    scanf_s("%d", &m);

    if (m <= 0) {
        printf("Vui long nhap so nguyen duong lon hon 0.\n");
        return 1;
    }

    xuatFibonacciNhoHonM(m);

    return 0;
}