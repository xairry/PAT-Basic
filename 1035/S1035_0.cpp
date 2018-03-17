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
    // Get the number ordered number from the first element, if the result is matched between to array -> Insert
    int last_ordered(0);
    for (; vq[last_ordered] <= vq[last_ordered+1] && last_ordered < n-1; last_ordered++);
    int n_remain_unordered;
    while (n_remain_unordered + last_ordered < n - 1 && v[last_ordered + n_remain_unordered + 1] == vq[last_ordered + n_remain_unordered + 1]) {n_remain_unordered++;}
    int is_insert = 0;
    if (n_remain_unordered + last_ordered == n-1) is_insert = 1;
    
    // is insert, get the next
    if (is_insert) {
        cout<<"Insertion Sort"<<endl;
        sort(vq + 0, vq+last_ordered+2);
    } else {
        cout<<"Merge Sort"<<endl;
        // get the step number
        // get the minimum of the ordered length, then to get the next
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

    delete [] v;
    delete [] vq;
    return 0;
}
