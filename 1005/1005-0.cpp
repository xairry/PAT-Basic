#include <iostream>
using namespace std;


const int maxn = 110;
struct {
    int num;
    int marker;
    bool is_input;
} v[maxn];


int main() {
    int n;
    cin>>n;

    // init table
    for (int i=0; i<maxn; i++) {
        v[i].num = i;
        v[i].marker = 0;
        v[i].is_input = false;
    }

    // marker table
    for (int i=0; i<n; i++) {
        int num;
        cin>>num;

        // only mark the number in the range
        if (num < maxn - 1) {
            v[num].is_input = true;
            v[num].marker++;
        }

        while (num != 1) {
            if (num % 2 == 0) {
                num /= 2;
            } else {
                num = (3 * num + 1) / 2;
            }
            if (num < maxn - 1)
                v[num].marker++;
        }
    }

    // control the printing of space
    int space_control = 0;
    for (int i=0; i<maxn; i++) {
        if (v[i].is_input)
            if (v[i].marker == 1) 
                space_control++;
    }

    for (int i=maxn; i>=0; i--) {
        if (v[i].is_input) {
            if (v[i].marker == 1) {
                space_control--;
                printf("%d", i);
                if (space_control > 0) printf("%s", " ");
            }
        }
    }

    return 0;
}


