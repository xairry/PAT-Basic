#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;


bool is_prime(int num) {
    for (int i=2; i<sqrt(num); i++) {
        if (num % i == 0) 
            return false;
    }
    return true;
}

int main() {

    int M, N;
    scanf("%d %d", &M, &N);

    int maxn = 110000;
    int * v = (int *) malloc(maxn * sizeof(int));

    fill(v, v+maxn-1, 0);

    for (int i=2; i<maxn; i++) {
        if (v[i] != 0) continue;
        if (is_prime(i)) v[i] = 2;
        else v[i] = 1;

        int j = i * 2;
        while (j < maxn) {
            v[j] = 1;
            j += i;
        }
    }

    int count = 0;
    for (int i=0; i<maxn; i++) {
        if (v[i] == 2) {
            count++;
            if (count >= M) {
                printf("%d", i);
                if ((count - M + 1) % 10 == 0) printf("\n");
                else if (count < N) printf(" ");
            }
            if (count == N) break;
        }
    }

    return 0;
}

