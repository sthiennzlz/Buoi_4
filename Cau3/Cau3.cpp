#include <stdio.h>

// Ham tim gia tri phan tu thu n cua cap so cong
int timPhanTuThuN(int a, int r, int n) {
    // Neu n la 1 thi tra ve gia tri hang dau tien a
    if (n == 1) return a;

    // Neu n > 1 thi goi de quy voi n-1 va cong sai r
    return timPhanTuThuN(a, r, n - 1) + r;
}

int main() {
    int a, r, n;
    printf("Nhap gia tri hang dau tien a: ");
    scanf_s("%d", &a);
    printf("Nhap cong sai r: ");
    scanf_s("%d", &r);
    printf("Nhap vi tri phan tu can tim n: ");
    scanf_s("%d", &n);
    printf("Gia tri phan tu thu %d cua cap so cong la: %d\n", n, timPhanTuThuN(a, r, n));
    return 0;
}
