#include <stdio.h>

// Ham tinh so hang thu n cua day so (a)
int tinhDayA(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return 1;
    return 2 * tinhDayA(n - 1) - 3 * tinhDayA(n - 2) - tinhDayA(n - 3);
}

// Ham tinh so hang thu n cua day so (b)
int tinhDayB(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return 2 * tinhDayB(n - 1) + tinhDayB(n - 2) - 3 * tinhDayB(n - 3);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    // Tinh so hang thu n cua day so (a)
    printf("So hang thu %d cua day so (a) la: %d\n", n, tinhDayA(n));

    // Tinh so hang thu n cua day so (b)
    printf("So hang thu %d cua day so (b) la: %d\n", n, tinhDayB(n));
    return 0;
}
