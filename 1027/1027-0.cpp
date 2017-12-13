#include <iostream>

using namespace std;

long sum(int n) {
    return (4 + 2 * n) * n;
}


int main() {
    int n_all;
    char c;
    cin>>n_all>>c;

    int n_height = 1;

    while (n_all - sum(n_height) - 1 > 0) {
        n_height++;
    }

    n_height--;

    for (int i=0; i<=n_height; i++) {
        int n_string = 2 * (n_height - i) + 1;
        string s = string(n_string, c);
        string s_blank = string(i, ' ');
        cout<<s_blank;
        cout<<s<<endl;
    }

    // start from 3 characters
    for (int i=1; i<=n_height; i++) {
        int n_string = 2 * i + 1;
        string s = string(n_string, c);
        string s_blank = string(n_height - i, ' ');
        cout<<s_blank;
        cout<<s<<endl;;
    }

    cout<<(n_all - sum(n_height) - 1);

    return 0;
}


