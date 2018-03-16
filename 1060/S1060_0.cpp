#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

    int N;
    scanf("%d", &N);

    int * v = new int[N];

    for (int i=0; i<N; i++) {
        scanf("%d", &v[i]);
    }

    // sort data
    sort(v, v+N);

    // find the number less than its index
    int E = 0;
    if (v[0] > N) {
        printf("%d", N);
    } else {
        while (N--) {
            E++;
            if (v[N] <= E) {
                printf("%d", --E);
                break;
            }
        }
    }

    return 0;
}


