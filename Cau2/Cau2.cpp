#include <stdio.h>

// Ham tim UCLN cua hai so nguyen duong a va b
int timUCLN(int a, int b) {
    // Neu a bang b thi tra ve a hoac b
    if (a == b) return a;

    // Neu a lon hon b thi goi de quy UCLN(b, a - b)
    if (a > b) return timUCLN(a - b, b);

    // Neu b lon hon a thi goi de quy UCLN(a, b - a)
    return timUCLN(a, b - a);
}

int main() {
    int a, b;
    printf("Nhap hai so nguyen duong a va b: ");
    scanf_s("%d %d", &a, &b);

    printf("UCLN cua %d va %d la: %d\n", a, b, timUCLN(a, b));

    return 0;
}
