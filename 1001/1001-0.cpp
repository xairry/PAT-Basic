#include <iostream>
using namespace std;

bool is_prime(int n);

int main() {
    int input;
    int count = 0;
    cin>>input;

    while (input != 1) {
        if (is_prime(input)) {
            input = (3 * input + 1) / 2;
        } else {
            input = input / 2;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}

bool is_prime(int n) {
    if (n % 2 == 0) {
        return false;
    } else {
        return true;
    }
}
