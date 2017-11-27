#include <iostream>
#include <string>

using namespace std;

int main() {
    string A;
    int B;
    cin>>A>>B;

    int num_length = A.length();

    int Q, R;

    // Exception: sigle digital
    if (num_length == 1) {
        cout<<((A[0] - '0') / B)<<" "<<((A[0] - '0') % B);
        return 0;
    }

    // More than one digital
    Q = 0;
    R = A[0] - '0'; // do not output 0 in the highest digital
    for (int i=1; i<num_length; i++) {
        int n = A[i] - '0' + R * 10; 
        R = n % B;
        Q = n / B;
        cout<<Q;
    }

    cout<<" "<<R;

    return 0;
}
