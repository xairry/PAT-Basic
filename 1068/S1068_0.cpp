#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int M, N, count = 0;
    long long threshold;
    scanf("%d %d %lld", &M, &N, &threshold);

    long long ** array = new long long*[N];
    for (int i=0; i<N; i++) {
        array[i] = new long long[M];
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%lld", &array[i][j]);
        }
    }

    int x, y;
    long long value;
    for (int i=1; i<N-1; i++) {
        for (int j=1; j<M-1; j++) {

            if (
                    (
                     ((array[i][j] - array[i-1][j-1]) > threshold) &&
                     ((array[i][j] - array[i-1][j]) > threshold) &&
                     ((array[i][j] - array[i-1][j+1]) > threshold) &&
                     ((array[i][j] - array[i][j-1]) > threshold) &&
                     ((array[i][j] - array[i][j+1]) > threshold) &&
                     ((array[i][j] - array[i+1][j-1]) > threshold) &&
                     ((array[i][j] - array[i+1][j]) > threshold) &&
                     ((array[i][j] - array[i+1][j+1]) > threshold) 
                    ) || 
                    (
                     ((array[i][j] - array[i-1][j-1]) < -threshold) &&
                     ((array[i][j] - array[i-1][j])   < -threshold) &&
                     ((array[i][j] - array[i-1][j+1]) < -threshold) &&
                     ((array[i][j] - array[i][j-1])   < -threshold) &&
                     ((array[i][j] - array[i][j+1])   < -threshold) &&
                     ((array[i][j] - array[i+1][j-1]) < -threshold) &&
                     ((array[i][j] - array[i+1][j])   < -threshold) &&
                     ((array[i][j] - array[i+1][j+1]) < -threshold)
                    )
            )  {

                x = i+1;
                y = j+1;
                value = array[i][j];
                count++;
            }

        }
    }

    if (count > 1) {
        printf("Not Unique\n");
    } else if (count == 1) {
        printf("(%d, %d): %lld\n", y, x, value);
    } else {
        printf("Not Exist\n");
    }

    return 0;
}

// read the data into two demention array (1000 * 1000)
// using another array to store the mark data: (deprecated)
//   Compare from row 2 to n-1 row; column 2 to m-1 column.
//   If the item greater than the 8 neibor beyoung the threshold count++
//   If another item greater than the 8 neibor -> output unnique
//   If count < 1 -> output no exist

