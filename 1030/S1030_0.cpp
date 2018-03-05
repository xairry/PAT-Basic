#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;


bool compare(long long a, long long b);

int main() {

    // input
    int N;
    float p;
    scanf("%d %f", &N, &p);

    long long * array = new long long [N];

    for (int i=0; i<N; i++) {
        scanf("%lld", &array[i]);
    }

    // sort the array
    sort(array, array + N, compare);
    
    long long m;
    long long M;
    int i_M;
    int i_M_max = 1;

    // calculate the m * p
    for (int i=0; i<N-1; i++) {
        // set m
        m = array[i];

        for (int j=i+i_M_max; j<N; j++) {

            // find the max M let M <= m * p
            if (array[j] <= m * p) {
                i_M_max = j - i + 1;
            } else {
                break;
            }
        }

    }

    // output
    cout << i_M_max << endl;

    return 0;
}

bool compare(long long a, long long b) {
    return a < b;
}

