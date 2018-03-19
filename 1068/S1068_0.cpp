#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>

using namespace std;

const int maxn = 1<<25;

int main() {

    int M, N, count = 0;
    long long threshold;
    scanf("%d %d %lld", &M, &N, &threshold);

    long long ** array = new long long*[N+2];
    for (int i=0; i<N+2; i++) {
        array[i] = new long long[M+2];
        memset(array[i], 0, M+2);
    }

    long long * hash = new long long[maxn];
    memset(hash, 0, maxn);

    for (int i=1; i<N+1; i++) {
        for (int j=1; j<M+1; j++) {
            scanf("%lld", &array[i][j]);
            hash[array[i][j]]++;
        }
    }

    int x, y;
    long long value;
    for (int i=1; i<N+1; i++) {
        for (int j=1; j<M+1; j++) {
            if (
                    (
                     (abs(array[i][j] - array[i-1][j-1]) > threshold) &&
                     (abs(array[i][j] - array[i-1][j])   > threshold) &&
                     (abs(array[i][j] - array[i-1][j+1]) > threshold) &&
                     (abs(array[i][j] - array[i][j-1])   > threshold) &&
                     (abs(array[i][j] - array[i][j+1])   > threshold) &&
                     (abs(array[i][j] - array[i+1][j-1]) > threshold) &&
                     (abs(array[i][j] - array[i+1][j])   > threshold) &&
                     (abs(array[i][j] - array[i+1][j+1]) > threshold) &&
                     hash[array[i][j]] == 1
                    )
                    )  {

//                cout<<hash[array[i][j]]<<"_"<<array[i][j]<<endl;
                x = i;
                y = j;
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

    delete [] array;
    return 0;
}

// read the data into two demention array (1000 * 1000)
// using another array to store the mark data: (deprecated)
//   Compare from row 2 to n-1 row; column 2 to m-1 column.
//   If the item greater than the 8 neibor beyoung the threshold count++
//   If another item greater than the 8 neibor -> output unnique
//   If count < 1 -> output no exist
// Check point 3 -> abs 
// Check point 5 -> the element around

