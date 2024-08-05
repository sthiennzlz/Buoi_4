#include <stdio.h>
//Ham dem chu so nguyen duong n
int demChuSo(int n) {
    int dem = 0;
    if (n == 0) {
        return 1;
    }
    while (n != 0) {
        n /= 10;
        dem++;
    }
    return dem;
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);
    if (n < 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 1;
    }
    int ketQua = demChuSo(n);
    printf("So chu so cua %d la: %d\n", n, ketQua);
    return 0;
}