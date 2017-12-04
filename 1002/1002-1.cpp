#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int len = s.length();
    int *a = new int [len];
    int sum = 0;
    string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for (int i = 0; i < len; i++) {
        a[i] = s[i] - '0';
        sum = sum + a[i];
    }
    int *b = new int [len];
    int j = 0;
    if (sum == 0) {
        cout << "ling";
    }
    else {
        while (sum != 0) {
            b[j++] = sum % 10;
            sum = sum / 10;
        }
    }
    for (int i = j - 1;i >= 1; i--) {
        cout << str[b[i]] << " ";
    }
    cout << str[b[0]];
    delete [] a;
    delete [] b;
    return 0;
}
