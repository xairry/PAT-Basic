#include <iostream>
using namespace std;

int main() {
    int input_n;
    cin>>input_n;

    for (int i=0; i<input_n; i++) {
        long a, b, c;
        string result;
        cin>>a>>b>>c;
        if (a + b > c) {
            result = "true";
        } else {
            result = "false";
        }
        cout<<"Case #"<<i+1<<": "<<result<<endl;
    }
    return 0;
}
