#include <cstdio>
#include <iostream>

using namespace std;

typedef struct {
    int d;
    int lte;
    float ltr;
} re;

int main() {

    int N, D;
    float e;
    scanf("%d %f %d", &N, &e, &D);

    // residual structure array
    re * rev = new re[N];

    for (int i=0; i<N; i++) {
        // read the data
        scanf("%d", &rev[i].d);
        rev[i].lte = 0;
        for (int rei=0; rei<rev[i].d; rei++) {
            // if less than e
            float et;
            scanf("%f", &et);
            if (et < e)
                // count++
                rev[i].lte++;
        }
        rev[i].ltr = rev[i].lte / (float) rev[i].d;
    }

    int n_prob = 0, n_sure = 0;
    for (int i=0; i<N; i++) {
        if (rev[i].ltr > 0.5) {
            if (rev[i].d > D) {
                n_sure++;
            } else {
                n_prob++;
            }
        }
    }

    printf("%.1f%% %.1f%%", n_prob / (float) N * 100, n_sure / (float) N * 100);

    return 0;
}
