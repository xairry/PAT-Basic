#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n_student;
    cin>>n_student;
    
    int * hash = new int[101];
    for (int i=0; i<101; i++) {
        hash[i] = 0;
    }
    // input
    for (int i=0; i<n_student; i++) {
        int cent;
        scanf("%d", &cent);
        hash[cent]++;
    }

    // query
    int n_query;
    cin>>n_query;
    for (int i=0; i<n_query; i++) {
        int q_cent;
        scanf("%d", &q_cent);
        printf("%d", hash[q_cent]);
        if (i != n_query-1) printf(" ");
    }

    return 0;
}
