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
    int maxn = 110000;
    int * v = (int *) malloc(maxn * sizeof(int));

    int n = 0;

    fill(v, v+maxn-1, 0);

    for (int i = 2; i<maxn; i++) {
        if (v[i]) continue;
        if (!is_prime(i)) 
            v[i]++;
        else 
            n++;

        int j = i;
        while (j < maxn) {
            v[j]++;
            j += i;
        }
    }

    printf("%d", n);

    return 0;
}

