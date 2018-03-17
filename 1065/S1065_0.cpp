#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

const int maxn = 100000;

int main() {

    // use hash to store the id of person and status
    // use hash2 to store the mate
    // read the person id using int
    // if apear once the hash items of the mate ++
    // the hash item < 2 is single
    // iterate the hash get the single id, put into array
    // sort array
    // output use %05d

    int N, M;
    scanf("%d", &N);

    int * hash = new int[maxn];
    int * hash2 = new int[maxn];
    memset(hash, 0, maxn);
    memset(hash2, -1, maxn); // !!! the id may be 0, so use -1;
    int m1, m2;
    for (int i=0; i<N; i++) {
        scanf("%d%d", &m1, &m2);
        hash2[m1] = m2;
        hash2[m2] = m1;
    }

    scanf("%d", &M);

    int * array = new int[M];

    for (int i=0; i<M; i++) {
        scanf("%d", &m1);
        hash[m1] += 2;
        m2 = hash2[m1];
        if (m2 != -1) {
            hash[m2]++;
        }
    }

    int single_n = 0;
    for (int i=0; i<maxn; i++) {
        if (hash[i] == 2) {
            array[single_n++] = i;
        }
    }

    sort(array, array+single_n);

    printf("%d\n", single_n);
    for (int i=0; i<single_n; i++) {
        printf("%05d", array[i]);
        if (i != single_n-1) printf(" ");
    }
//    printf("\n"); !! no new line


    delete [] hash;
    delete [] hash2;
    delete [] array;

    return 0;
}
