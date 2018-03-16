#include <cstdio>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iostream>

using namespace std;

bool cmp(int a, int b) {
    if (a>b) 
        return true;
    else 
        return false;
}

int main() {
    int n;
    scanf("%d", &n);
    int * v = new int[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    sort(v, v+n, cmp);

    int i_n, j_n;
    j_n = sqrt(n);
    while (n % j_n != 0) {
        j_n--;
    }
    i_n = n / j_n;

    int i_min=0, i_max=i_n-1, j_min=0, j_max=j_n-1;
    int ** r_v = new int*[10000];
    for (int i=0; i<10000; i++) {
        r_v[i] = new int [1000];
    }

    int direction = 1;
    int i_c = 0, j_c = 0;
    for (int i=0; i<n; i++) {
        r_v[i_c][j_c] = v[i];
        if (direction == 1) {
            if (j_c >= j_max) {
                direction = 2;
                i_c++;
                i_min++;
            } else {
                j_c++;
            }
        } else if (direction == 2) {
            if (i_c >= i_max) {
                direction = 3;
                j_c--;
                j_max--;
            } else {
                i_c++;
            }
        } else if (direction == 3) {
            if (j_c <= j_min) {
                direction = 4;
                i_c--;
                i_max--;
            } else {
                j_c--;
            }
        } else if (direction == 4) {
            if (i_c <= i_min) {
                direction = 1;
                j_c++;
                j_min++;
            } else {
                i_c--;
            }
        }
    }

    // print result
    for (int i=0; i<i_n; i++) {
        for (int j=0; j<j_n; j++) {
            printf("%d", r_v[i][j]);
            if (j != j_n-1) printf(" ");
        }
        if (i != i_n-1) printf("\n");
    }

    return 0;
}
