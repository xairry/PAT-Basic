#include <iostream>
using namespace std;
int main() {
    int N;
    char c;
    cin >> N >> c;
    int row = 0;
    for (int i = 0; i < N; i++) {
        if ((2 * i * (i + 2) + 1) > N) {
            row = i - 1;
            break;
        }
    }
    for (int i = row; i >= 1; i--) {
        for (int k=1; k<=row-i; k++)
            cout << " ";
        for (int j = i * 2 + 1; j >= 1; j--)
            cout << c;
        cout << endl;
    }
    for (int i = 0; i < row; i++)
        cout << " ";
    cout << c << endl;
    for (int i = 1; i <= row; i++) {
        for (int k=1; k<=row-i; k++)
            cout << " ";
        for (int j = i * 2 + 1; j >= 1; j--)
            cout << c;
        cout << endl;
    }
    cout << (N - (2 * row * (row + 2) + 1));
    return 0;
}