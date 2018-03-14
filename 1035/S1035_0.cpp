#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    // input
    int n;
    cin>>n;
    int * v = new int[n];
    int * vq = new int[n];
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }
    for (int i=0; i<n; i++) {
        cin>>vq[i];
    }


    // test the methods and steps
    // is insert?
    int max_unmatchi=n-1;
    while (max_unmatchi > 0 && v[max_unmatchi] == vq[max_unmatchi]) {max_unmatchi--;}
    int is_insert = 1;
    for (int i=1; i<=max_unmatchi; i++) {
        if (vq[i-1] > vq[i]) {
            is_insert = 0;
            break;
        }
    }

    // is insert, get the next
    if (is_insert) {
        cout<<"Insertion Sort"<<endl;
        sort(vq + 0, vq+max_unmatchi+2);
    } else {
        cout<<"Merge Sort"<<endl;
        // get the step number
        int min_order=n;
        int n_order = 1;
        for (int i=1; i<n; i++) {
            if (vq[i-1] < vq[i]) {
                n_order++;
            } else {
                min_order = min(n_order, min_order);
                n_order = 1;
            }
        }

        // get the next
        int step = min_order * 2;
        for (int i=0; i<n; i+=step) {
            int start = i, end = min(i+step, n);
            sort(vq + start, vq + end);
        }
    }

    // output
    for (int i=0; i<n; i++) {
        cout<<vq[i];
        if (i != n-1) cout<<" ";
    }
}
