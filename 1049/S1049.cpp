#include <cstdio>

int main() {

    int n;
    scanf("%d", &n);
    double * fv = new double[n];
    for (int i=0; i<n; i++) {
        scanf("%lf", &fv[i]);
    }

    double sum = 0;

    for (int i=0; i<n; i++) {
        int left = i+1;
        int right = n-i;
        sum += fv[i] * left * right;
    }

    printf("%.2lf", sum);

    return 0;
}
