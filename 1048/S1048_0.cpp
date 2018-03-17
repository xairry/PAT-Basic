#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

char code[13] = {'0', '1', '2','3','4','5','6','7','8','9','J','Q','K'};

char encode(char char_a, char char_b, int i) {

    char char_c;
    // is odd?
    if (i % 2 == 0) {
        int d = char_b - char_a;
        if (d < 0) d = 10 + d;
        char_c = '0' + d;
    } else {
        int d = (char_b + char_a - '0' - '0') % 13;
        char_c = code[d];
    }

    return char_c;
}

int main() {

    string a, b, c = "";
    cin>>a>>b;

    // get the max length between a and b
    // fill the gap with 0!!!
    int n;
    if (a.length() > b.length()) {
        n = a.length();
    } else {
        n = b.length();
    }
    
    for (int i=0; i<n; i++) {
        int rank = i+1;
        char a_value;
        char b_value;
        if (i < a.length()) {
            a_value = a[a.length() - i - 1];
        } else {
            a_value = '0';
        }
        if (i < b.length()) {
            b_value = b[b.length() - i - 1];
        } else {
            b_value = '0';
        }
        c = encode(a_value, b_value, rank) + c;
    }
    cout<<c;
    
    return 0;
}
