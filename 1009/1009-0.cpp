#include <stdio.h>


const int maxn = 81;
char s[maxn];

int main() {

    char c;
    int n=0;
    while (scanf("%c", &c)) {
        if (c == '\n') break;
        s[n] = c;
        n++;
    }

    int right = n-1;
    for (int i=n-1; i>=0; i--) {
        if (s[i] == ' ') {
            for (int j = i+1; j<=right; j++) {
                printf("%c", s[j]);
            }
            printf(" ");
            right = i - 1;
        }
    }

    for (int j=0; j<=right; j++) 
        printf("%c", s[j]);


    return 0;
}
