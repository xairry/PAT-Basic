#include <cstdio>

using namespace std;

const int maxn = 10000;

int main() {

    char temp;
    char * s = new char[maxn];

    int * c_hash = new int[100];
    for (int i=0; i<100; i++) c_hash[i] = 0;

    scanf("%c", &temp);
    int n = 0;
    do {
        s[n] = temp;
        c_hash[temp - '0']++;
        n++;
        scanf("%c", &temp);
    } while (temp != '\n');

    while (c_hash['P' - '0'] > 0 || c_hash['A' - '0'] > 0 || c_hash['T' - '0'] > 0 || c_hash['e' - '0'] > 0 || c_hash['s' - '0'] > 0 || c_hash['t' - '0'] > 0) {
        if (c_hash['P' - '0'] > 0) {
            printf("P");
            c_hash['P' - '0']--;
        }
        if (c_hash['A' - '0'] > 0) {
            printf("A");
            c_hash['A' - '0']--;
        }
        if (c_hash['T' - '0'] > 0) {
            printf("T");
            c_hash['T' - '0']--;
        }
        if (c_hash['e' - '0'] > 0) {
            printf("e");
            c_hash['e' - '0']--;
        }
        if (c_hash['s' - '0'] > 0) {
            printf("s");
            c_hash['s' - '0']--;
        }
        if (c_hash['t' - '0'] > 0) {
            printf("t");
            c_hash['t' - '0']--;
        }
    }

    return 0;
}
