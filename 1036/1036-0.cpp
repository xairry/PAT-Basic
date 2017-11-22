#include <iostream>
#include <string>

using namespace std;

void draw_horizontal(int, char);
void draw_vertical(int, char);

int main() {
    int n;
    char a;

    cin>>n>>a;

    draw_horizontal(n, a);
    for (int i; i<((n + 1)/2 - 2); i++) 
        draw_vertical(n, a);
    draw_horizontal(n, a);

    return 0;
}

void draw_horizontal(int n, char a) {
    for (int i; i<n; i++)
        cout<<a;

    cout<<endl;
}

void draw_vertical(int n, char a) {
    cout<<a;
    for (int i; i<(n-2); i++)
        cout<<' ';
    cout<<a<<endl;
}


