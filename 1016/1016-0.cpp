#include <iostream>
#include <string>

using namespace std;

string cat_char_in_string(string, string);

int main() {
    string a, b;
    string da, db;
    cin>>a>>da>>b>>db;

    string pa, pb;
    pa = cat_char_in_string(a, da);
    pb = cat_char_in_string(b, db);

    cout<<stoi(pa) + stoi(pb);

    return 0;
}

string cat_char_in_string(string s, string c) {
    int s_length = s.length();
    int n = 0;
    string result;
    for (int i=0; i<s_length; i++) {
        if (s[i] == c[0]) {
            result = result + c;
            n++;
        }
    }
    if (n == 0)
        result = "0";
    return result;
}
