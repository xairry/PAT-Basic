#include <cstdio>
#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;


bool compare(long long a, long long b);

int main() {

    // input
    int N;
    long long p;
    scanf("%d %lld", &N, &p);

<<<<<<< HEAD
    long long *array = new long long[N];
    
	
	//long long array[N];
    //fill(array,array+N,0);
    //long long int* point = array;
	for (int i=0; i<N; i++) {
        scanf("%d", &array[i]);
=======
    long long * array = new long long [N];

    for (int i=0; i<N; i++) {
        scanf("%lld", &array[i]);
>>>>>>> 21ea9ad6a04d23b6b0df977818f711b7585a6ef2
    }

    // sort the array
    sort(array, array+N , compare);
    
    //long long m;
    int m;
    long long M;
    int i_M;
    int i_M_max = 1;

    // calculate the m * p
    for (int i=0; i<N; i++) {
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
    cout << i_M_max;
    //delete array;
	return 0;
}

bool compare(long long a, long long b) {
    return a < b;
}

