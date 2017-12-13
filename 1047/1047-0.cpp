#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int cent[1000];
    for (int i=0; i<=1000; i++) 
        cent[i] = 0;

    for (int i=0; i<n; i++) {
        int group, person, result;

        scanf("%d-%d %d", &group, &person, &result);

        cent[group] += result;
    }

    int max, j;
    max = 0;
    for (int i=1; i<=1000; i++) {
        if (max < cent[i]) {
            max = cent[i];
            j = i;
        }
    }

    cout<<j<<" "<<max;

    return 0;
}
