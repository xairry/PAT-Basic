#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int calc_fn(int i) {
    int output = 0, remain;
    do {
        remain = i % 10;
        i = i / 10;
        output += remain;
    } while (i != 0);
    return output;
}

int main() {

//    cout<<calc_fn(123)<<endl;
    // use array to store the friend credit id
    // read one integel , then get the sum of each digit
    // add credit into array
    // sort the array
    // output number (if the number is the same with the last number skip)

    int N;
    scanf("%d", &N);

    int * v = new int[N];

    for (int i=0; i<N; i++) {
        int temp;
        scanf("%d", &temp);
        v[i] = calc_fn(temp);
    }

    sort(v, v+N);
    int n_fn = 0, last_id = -1;
    for (int i=0; i<N; i++) {
        if (v[i] != last_id) n_fn++;
        last_id = v[i];
    }
    printf("%d\n", n_fn);

    last_id = -1;
    for (int i=0; i<N; i++) {
        if (v[i] != last_id) {
            if (i != 0) printf(" ");
            printf("%d", v[i]);
        } 
        last_id = v[i];
    }

    return 0;
}
