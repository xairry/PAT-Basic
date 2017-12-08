#include <iostream>

using namespace std;

int main() {

    long sum = 0;

    char c;
    while (c != '\n') {
        scanf("%c", &c);

        if (c >= 'a' & c <= 'z') 
            sum += c - 'a' + 1;
        else if (c >= 'A' & c <= 'Z') 
            sum += c - 'A' + 1;
    }

    long remain, quotient;
    int num_zero, num_one;
    num_zero = num_one = 0;

    quotient = sum;
    while (quotient != 0) {
        remain = quotient % 2;
        quotient =  quotient / 2;

        if (remain == 0)
            num_zero++;
        else 
            num_one++;
    }

    cout<<num_zero<<" "<<num_one;

    return 0;
}
