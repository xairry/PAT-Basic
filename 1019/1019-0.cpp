#include <stdio.h>
#include <algorithm>
using namespace std;

const int Kaprekar = 6174;

bool com_dec(char a, char b) {
    return a > b;
}

bool com_inc(char a, char b) {
    return b > a;
}


int sort_dec(int num) {
    char s[5];
    sprintf(s, "%04d", num);
    sort(s, s + 4, com_dec);
    sscanf(s, "%d", &num);

    return num;
}

int sort_inc(int num) {
    char s[5];
    sprintf(s, "%04d", num);
    sort(s, s + 4, com_inc);
    sscanf(s, "%d", &num);

    return num;
}


int main() {
    int x1, x2, x3; 
    scanf("%d", &x3);
    do {
        x1 = sort_dec(x3);
        x2 = sort_inc(x3);
        x3 = x1 - x2;
        printf("%04d - %04d = %04d", x1, x2, x3);
        if (x3 != Kaprekar) 
            printf("\n");
    } while (x3 != Kaprekar && x3 != 0);
}
