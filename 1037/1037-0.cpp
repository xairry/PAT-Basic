#include <iostream>

using namespace std;

int main() {
    long p_g, p_s, p_k,
         a_g, a_s, a_k,
         r_g, r_s, r_k;

    scanf("%ld.%ld.%ld %ld.%ld.%ld", &p_g, &p_s, &p_k, &a_g, &a_s, &a_k);

    p_k = p_g * 17 * 29 + p_s * 29 + p_k;
    a_k = a_g * 17 * 29 + a_s * 29 + a_k;

    r_k = a_k - p_k;

    string sign = "";
    if (r_k < 0) 
        sign = "-";

    r_k = abs(r_k);

    r_s = r_k / 29;
    r_k = r_k % 29;
    r_g = r_s / 17;
    r_s = r_s % 17;

    cout<<sign<<r_g<<"."<<r_s<<"."<<r_k;

    return 0;
}
