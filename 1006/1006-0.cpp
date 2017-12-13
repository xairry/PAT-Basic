#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    cin>>number;

    int hundred_n = number / 100;
    for (int i=0; i<hundred_n; i++) {
        cout<<"B";
    }

    int ten_n = number / 10 % 10;
    for (int i=0; i<ten_n; i++) {
        cout<<"S";
    }

    int single_n = number % 10;
    for (int i=0; i<single_n; i++) {
        cout<<i + 1;
    }

    return 0;
}
