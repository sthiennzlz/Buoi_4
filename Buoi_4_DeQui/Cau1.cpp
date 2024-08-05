#include <stdio.h>
#include <math.h>

//// Ham tinh tong 1 + 2 + 3 + ... + n
int tong1(int n) {
    return n * (n + 1) / 2;
}

// Ham de quy tinh tong 1 + 2 + 3 + ... + n
int tong1_dequy(int n) {
    if (n == 1) return 1;
    return n + tong1_dequy(n - 1);
}
////

// Ham tinh S(n) voi can bac 5
double tong2(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sqrt(5 + sum);
    }
    return sum;
}

// Ham tinh tong 1/2 + 2/3 + ... + n/(n+1)
double tong3(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (double)i / (i + 1);
    }
    return sum;
}

// Ham de quy tinh tong 1/2 + 2/3 + ... + n/(n+1)
double tong3_dequy(int n) {
    if (n == 1) return 1.0 / 2;
    return (double)n / (n + 1) + tong3_dequy(n - 1);
}

// Ham tinh tong 1 + 1/3 + 1/5 + ... + 1/(2n+1)
double tong4(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += 1.0 / (2 * i + 1);
    }
    return sum;
}

// Ham de quy tinh tong 1 + 1/3 + 1/5 + ... + 1/(2n+1)
double tong4_dequy(int n) {
    if (n == 0) return 1;
    return 1.0 / (2 * n + 1) + tong4_dequy(n - 1);
}

// Ham tinh tong 1.2 + 2.3 + ... + n(n+1)
int tong5(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1);
    }
    return sum;
}

// Ham de quy tinh tong 1.2 + 2.3 + ... + n(n+1)
int tong5_dequy(int n) {
    if (n == 1) return 2;
    return n * (n + 1) + tong5_dequy(n - 1);
}

// Ham tinh tong 1/2 + 2/3 + ... + n(n+1)/(n+1 + sqrt(n+2))
double tong6(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (i * (i + 1)) / ((i + 1) + sqrt(i + 2));
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Tong 1 + 2 + 3 + ... + n = %d\n", tong1(n));
    printf("Tong 1 + 2 + 3 + ... + n (de quy) = %d\n", tong1_dequy(n));

    printf("Tong S(n) can bac 5 = %.6f\n", tong2(n));

    printf("Tong 1/2 + 2/3 + ... + n/(n+1) = %.6f\n", tong3(n));
    printf("Tong 1/2 + 2/3 + ... + n/(n+1) (de quy) = %.6f\n", tong3_dequy(n));

    printf("Tong 1 + 1/3 + 1/5 + ... + 1/(2n+1) = %.6f\n", tong4(n));
    printf("Tong 1 + 1/3 + 1/5 + ... + 1/(2n+1) (de quy) = %.6f\n", tong4_dequy(n));

    printf("Tong 1.2 + 2.3 + ... + n(n+1) = %d\n", tong5(n));
    printf("Tong 1.2 + 2.3 + ... + n(n+1) (de quy) = %d\n", tong5_dequy(n));

    printf("Tong 1/2 + 2/3 + ... + n(n+1)/(n+1 + sqrt(n+2)) = %.6f\n", tong6(n));

    return 0;
}
