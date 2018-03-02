#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin>>n;

    int * num = new int [n];

    for (int i=0; i<n; i++) 
        cin>>num[i];

    long sum = 0;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            sum = sum + num[i] * 11 + num[j] * 11;
        }
    }
    
    cout<<sum;

    return 0;
}
