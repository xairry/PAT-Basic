#include <iostream>

using namespace std;

int main() {
    int n_a[5] = {0, 0, 0, 0, 0};
    float a[5] = {0, 0, 0, 0, 0};

    int n;
    cin>>n;

    int input;
    for (int i=0; i<n; i++) {
        scanf("%d", &input);

        // A1
        if (input % 5 == 0) {
            if (input %2 == 0) {
                n_a[0]++;
                a[0] = a[0] + input;
            }
        //A2
        } else if (input % 5 == 1) {
            n_a[1]++;
            if (n_a[1] % 2 == 1) 
                a[1] = a[1] + input;
            else 
                a[1] = a[1] - input;
        // A3
        } else if (input % 5 == 2) {
            n_a[2]++;
        // A4
        } else if (input % 5 == 3) {
            n_a[3]++;
            a[3] = a[3] + input;
        // A5
        } else if (input % 5 == 4) {
            n_a[4]++;
            if (input > a[4])
                a[4] = input;
        }
    }

    // A3
    a[2] = n_a[2];

    // A4
    if (n_a[3] > 0) 
        a[3] = a[3] / n_a[3];

    // output
    for (int i=0; i<5; i++) {
        if (n_a[i] > 0) {
            if (i != 3) 
                cout<<a[i];
            else 
                printf("%.1f", a[i]);
        } else {
            cout<<"N";
        }
        if (i < 4) 
            cout<<" ";
    }


    return 0;
}

