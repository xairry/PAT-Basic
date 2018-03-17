#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {

    int N, len_next;
    double len_connect;
    scanf("%d", &N);
    int * array = new int[N];
    for (int i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }

    sort(array, array+N);

    len_connect = array[0];
    for (int i=1; i<N; i++) {
        len_connect = (len_connect + array[i]) / 2.0;
    }
    printf("%d", (int) len_connect);

    return 0;
}

