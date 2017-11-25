#include <iostream>
#include <string>

using namespace std;

int main() {
    long long A, B, C;
    int D;

    cin>>A>>B>>D;
    C = A + B;

    string output = "";

    if (C == 0) 
        cout<<0;

    while (C != 0) {
        output = to_string(C % D) + output;
        C = C / D;
    }

    cout<<output;
}
