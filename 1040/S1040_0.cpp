#include <cstdio>
#include <iostream>

using namespace std;

const int maxn = 100000;

int get_number(char * s, int start, int end, char c) {
    int n=0;
    for (int i=start; i<end; i++) {
        if (s[i] == c) n++;
    }
    return n;
}

int main() {

    char temp;
    char * s = new char[maxn];
    scanf("%c", &temp);
    int len = 0, n_t = 0;
    do {
        s[len] = temp;
        if (temp == 'T') {
            n_t++;
        }
        len++;
        scanf("%c", &temp);
    } while (temp != '\n');

    // get the location of A
    int sum=0;
    int n_p = 0; 
    for (int i=0; i<len; i++) {
        if (s[i] == 'P') {
            n_p++;
        } else if (s[i] == 'T') {
            n_t--;
        } else if (s[i] == 'A') {
            // calculate the number
            sum += n_p * n_t % 1000000007;
            sum %= 1000000007;
        }
    }

    cout<<sum;

    return 0;
}

