#include <stdio.h>
//Ham dinh nghia xn
int x(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;

    int result = 0;
    for (int i = 0; i < n; i++) {
        result += (n - i) * x(i);
    }
    return result;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("Gia tri cua x_%d la: %d\n", n, x(n));
    return 0;
}
