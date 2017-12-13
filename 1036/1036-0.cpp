#include <iostream>
using namespace std;
int main() {
<<<<<<< HEAD
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
        for (int k = row - i; k >= 1; k--)
            cout << " ";
        for (int j = i * 2 + 1; j >= 1; j--)
            cout << c;
        cout << endl;
    }
    for (int i = 0; i < row; i++)
        cout << " ";
    cout << c << endl;
    for (int i = 1; i <= row; i++) {
        for (int k = row - i; k >= 1; k--)
            cout << " ";
        for (int j = i * 2 + 1; j >= 1; j--)
            cout << c;
        cout << endl;
    }
    cout << (N - (2 * row * (row + 2) + 1));
    return 0;
}
=======
    int n;
    char a;

    cin>>n>>a;

    draw_horizontal(n, a);
    for (int i=0; i<((n + 1)/2 - 2); i++) {
        draw_vertical(n, a);
    }
    draw_horizontal(n, a);

    return 0;
}

void draw_horizontal(int n, char a) {
    for (int i=0; i<n; i++)
        cout<<a;
    cout<<endl;
}

void draw_vertical(int n, char a) {
    cout<<a;
    for (int i=0; i<(n-2); i++)
        cout<<' ';
    cout<<a<<endl;
}


>>>>>>> 79cf3c7923eb2914b9d8e7b2d04440d8ada3a041
