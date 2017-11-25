#include <iostream>
#include <string>

using namespace std;

string transform(int input, int from, int to, int replace);

int main() {
    int n_row, n_col, from, to, replace;
    cin>>n_row>>n_col>>from>>to>>replace;
    for (int i=0; i<n_row; i++) {
        for (int j=0; j<n_col; j++) {
            int num;
            scanf("%d", &num); // using the cin will take too much time
//            cin>>num;
            cout<<transform(num, from, to, replace);
            if (j<n_col-1)
                cout<<" ";
        }
        if (i<n_row-1)
            cout<<endl;
    }

    return 0;
}

string transform(int input, int from, int to, int replace) {
    if (input >= from & input <= to)
        input = replace;

    string output;
    output = to_string(input);

    int n_zero = 3 - output.length();
    string zero(n_zero, '0');

    return zero+output;
}
