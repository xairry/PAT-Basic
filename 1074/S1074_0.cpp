#include <string>
#include <iostream>

using namespace std;

int main() {

    string sb, s1, s2, so = "";

    cin>>sb>>s1>>s2;

    int n, n_base, ns1, ns2;
    ns1 = s1.length();
    ns2 = s2.length();
    if (s1.length() > s2.length()) {
        n = ns1;
    } else {
        n = ns2;
    }
    n_base = sb.length();

    int remain = 0, v1, v2, v3, base;
    for (int i=0; i<n; i++) {
        if (ns1-1-i >= 0)
            v1 = s1[ns1-1-i] - '0';
        else 
            v1 = 0;
        if (ns2-1-i >= 0)
            v2 = s2[ns2-1-i] - '0';
        else 
            v2 = 0;

        v3 = v1 + v2 + remain;

        if (i>19) {
            base = 10;
        } else {
            base = sb[n_base-1-i] - '0';
            if (base == 0)
                base = 10;

        }

        
        char ch = '0' + (v3 % base);

        if ((ch != '0' && i != n-1) || ch != '0' || remain != 0 || i == 0)
            so = ch + so;
        
        remain = v3 / base;
    }

    if (remain > 0) {
        char ch = remain + '0';
        so = ch + so;
    }

    cout<<so;

    return 0;
}
// store number in string
// for each number:
// from last to front:
//   v1 + v2 + remain = v3
//   if the i > 19 base = 10, else pop the base
//   v3 % base, remain = v3 / base,
//   add the result into a string

