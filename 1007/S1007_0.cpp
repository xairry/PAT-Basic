#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int n) {
    for (int i=2; i<=(int)sqrt(n); i++)
        if (n%i == 0)
            return false;

    return true;
}

int main() {
    int max;
    cin>>max;

    int sum=0;

    for (int i=2; i<=(max-2); i++) {
        if (is_prime(i))
            if (is_prime(i+2))
                sum++;
    }

    cout<<sum;
    return 0;
}
