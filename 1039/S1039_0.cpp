#include <cstdio>
#include <iostream>

using namespace std;

const int maxn=100;

int main() {
    int * selling_h = new int[maxn];
    int * wanting_h = new int[maxn];

    char temp;
    scanf("%c", &temp);
    do {
        selling_h[temp - '0']++;
        scanf("%c", &temp);
    } while (temp != '\n');

    scanf("%c", &temp);
    do {
        wanting_h[temp - '0']++;
        scanf("%c", &temp);
    } while (temp != '\n');

    // calculate the number
    int lack=0, flow=0, satisfied=1;
    for (int i=0; i<maxn; i++) {
        if (selling_h[i] >= wanting_h[i]) {
            flow += selling_h[i] - wanting_h[i];
        } else {
            lack += wanting_h[i] - selling_h[i];
        }
    }

    if (lack == 0) {
        cout<<"Yes "<<flow;
    } else {
        cout<<"No "<<lack;
    }

    return 0;
}
