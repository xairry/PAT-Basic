#include <cstdio>
#include <iostream>

using namespace std;

int get_gcd(int a, int b) {

    int c = a;
    if (b > a) {
        c = a;
        a = b;
        b = c;
    }
    while (c != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int main() {

//    cout<<get_gcd(12, 7);

    // read 
    int n1, d1, n2, d2, d3;
    scanf("%d/%d %d/%d %d", &n1, &d1, &n2, &d2, &d3);

    // get the range
    int left, right;
    left = (int) (n1 / (double) d1 * d3);
    right = (int) (n2 / (double) d2 * d3 + 1);

//    cout<<left<<","<<right<<endl;
    // list the each fraction
    int n=0;
    double f1 = n1 / (double) d1;
    double f2 = n2 / (double) d2;
    for (int i=left-1; i<right+1; i++) {
        // if no common division?
        if (get_gcd(i, d3) == 1 && (i / (double) d3 > f1 && (i / (double) d3 < f2))) {
            if (n != 0) printf(" ");
            printf("%d/%d", i, d3); 
            n++;
        }
    }

    return 0;
}
