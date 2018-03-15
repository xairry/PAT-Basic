#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

char encode(char char_a, char char_b, int i) {

    char char_c;
    // is odd?
    if (i % 2 == 0) {
        int d = char_b - char_a;
        if (d < 0) d = 10 + d;
        char_c = '0' + d;
    } else {
        int d = (char_b + char_a - '0' - '0') % 13;
        if (d == 10) {
            char_c = 'J';
        } else if (d == 11) {
            char_c = 'Q';
        } else if (d == 12) {
            char_c = 'K';
        } else {
            char_c = '0' + d;
        }
    }

    return char_c;
}

int main() {

    string a, b;

    cin>>a>>b;

    int d_n_d = b.length() - a.length();
    // if the b longer than a
    if (d_n_d > 0) {
        // print the longer part
        for (int i = 0; i<d_n_d; i++) {
            printf("%c", b[i]);
        }
        // print the remain
        for (int i=0; i<b.length() - d_n_d; i++) {
            // b start at i + d_n_d
            // i+b.length()-d_n_d be the digital rank
            printf("%c", encode(a[i], b[i+d_n_d], i+(b.length() - d_n_d)));
        }
    } else {
        for (int i=0; i<b.length(); i++) {
            // i+b.length() be the digital rank
            // the a start at i - d_n_d (d_n_d < 0)
            printf("%c", encode(a[i-d_n_d], b[i], i+b.length()));
        }
    }

    return 0;
}
