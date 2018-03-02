#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

typedef struct {
    double store;
    double price;
} mooncake;

bool cmp(mooncake a, mooncake b) {
    return a.price > b.price;
}

int main() {
    int N; 
    double D;
    scanf("%d %lf", &N, &D);
    mooncake mooncake_v[N];

    for (int i=0; i<N; i++) {
        scanf("%lf", &mooncake_v[i].store);
    }

    for (int i=0; i<N; i++) {
        double sell;
        scanf("%lf", &sell);
        mooncake_v[i].price = (double) sell / mooncake_v[i].store;
    }

    sort(mooncake_v, mooncake_v + N, cmp);

    double sum = 0;
    for (int i=0; i<N; i++) {
        if (D > mooncake_v[i].store) {
            sum = (double) sum + mooncake_v[i].store * mooncake_v[i].price;
            D = D - mooncake_v[i].store;
        } else {
            sum = (double) sum + D * mooncake_v[i].price;
            break;
        }
    }

    printf("%.2f", sum);

    return 0;
}

