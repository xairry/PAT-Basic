#include <stdio.h>

const int maxn = 10010;
int term[maxn][2] = {0};

int main() {
    int n = 0;

    int x;
    while (scanf("%d", &x) != EOF) {
        term[n][0] = x;
        scanf("%d", &term[n][1]);
        n++;
    }

    for (int i=0; i<n; i++) {
        if (term[i][1] != 0) 
            printf("%d %d", term[i][0] * term[i][1], term[i][1] - 1);
        else if (n == 1) {
            printf("0 0");
            break;
        } 
        if (i < n-1 & term[i+1][1] != 0) printf(" ");
    }



    return 0;
}

