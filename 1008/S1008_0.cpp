#include <stdio.h>

const int maxn = 111;
int v[maxn] = {0};


int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    // if m > n
    m =  m % n;

    for (int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }

    for (int i=n-m; i<n; i++) {
        printf("%d", v[i]);
        if (i<n-1) printf(" ");
    }

    for (int i=0; i<n-m; i++) {
        if (i == 0 & m > 0) printf(" ");
        printf("%d", v[i]);
        if (i<n-m-1) printf(" ");
    }

    return 0;
}
