#include <iostream>
#include <algorithm>
using namespace std;

bool is_odd(int n);

int main() {
    int input;
    int count = 0;
    cin>>input;

    while (input != 1) {
        if (is_odd(input)) {
            input = (3 * input + 1) / 2;
        } else {
            input = input / 2;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}

bool is_odd(int n) {
    if (n % 2 == 0) {
        return false;
    } else {
        return true;
    }
}

