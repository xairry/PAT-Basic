#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {

    // use a var to record the max square sum 
    // sqrt it and output
    int N;
    int max_square_sum = 0;
    double output;

    scanf("%d", &N);

    int a, b, sqs;
    for (int i=0; i<N; i++) {
        scanf("%d%d", &a, &b);
        sqs = a*a + b*b;
        if (sqs > max_square_sum) max_square_sum = sqs;
    }

    output = sqrt(max_square_sum);

    printf("%0.2f", output);

    return 0;
}
