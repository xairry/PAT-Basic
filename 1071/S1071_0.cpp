#include <iostream>

using namespace std;

int main() {
    int T, K, n1, b, t, n2;

    cin>>T>>K;

    for (int i=0; i<K; i++) {
        cin>>n1>>b>>t>>n2;

        if (t > T) {
            printf("Not enough tokens.  Total = %d.\n", T);
            continue;
        }

        if (b == 0) {
            if (n1 > n2) {
                T += t;
                printf("Win %d!  Total = %d.\n", t, T);
            } else {
                T -= t;
                printf("Lose %d.  Total = %d.\n", t, T);
            }
        } else {
            if (n1 > n2) {
                T -= t;
                printf("Lose %d.  Total = %d.\n", t, T);
            } else {
                T += t;
                printf("Win %d!  Total = %d.\n", t, T);
            }
        }

        if (T == 0) {
            printf("Game Over.\n");
            break;
        }
    }

}

// read the n1 b n n2
// if t > T : not enough
// if b == 0
//   n1 < n2: Win T += t
//   n1 > n2: Lose T -= t
// if b == 1
//   ...
// If T == 0: Game over;

