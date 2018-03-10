#include <stdio.h>
#include <map>
using namespace std;

int main() {
    map <char, int> result1, result2;
    result1['C'] = result1['B'] = result1['J'] = 0;
    result2['C'] = result2['B'] = result2['J'] = 0;

    int n;
    scanf("%d\n", &n);

    int win1, equ1, los1, win2, equ2, los2;
    win1 = equ1 = los1 = win2 = equ2 = los2 = 0;

    char c1, c2;
    for (int i=0; i<n; i++) {
        if (i < n -1)
            scanf("%c %c\n", &c1, &c2);
        else 
            scanf("%c %c", &c1, &c2);

        if (c1 == 'C' && c2 == 'J') {
            result1[c1]++;
            win1++;
            los2++;
        } else if (c1 == 'J' && c2 == 'B') {
            result1[c1]++;
            win1++;
            los2++;
        } else if (c1 == 'B' && c2 == 'C') {
            result1[c1]++;
            win1++;
            los2++;
        } else if (c1 == c2) {
            equ1++;
            equ2++;
        } else {
            result2[c2]++;
            win2++;
            los1++;
        }
    }

    printf("%d %d %d\n", win1, equ1, los1);
    printf("%d %d %d\n", win2, equ2, los2);

    char maxc1 = '\0';
    int maxn1 = -1;
    for (map<char, int>::iterator it = result1.begin(); it != result1.end(); it++) {
        if (maxn1 < it->second) {
            maxn1 = it->second;
            maxc1 = it->first;
        } else if (maxn1 == it->second) {
            if (maxc1 > it->first) maxc1 = it->first;
        }
    }
    printf("%c", maxc1);

    printf(" ");

    char maxc2 = '\0';
    int maxn2 = -1;
    for (map<char, int>::iterator it = result2.begin(); it != result2.end(); it++) {
        if (maxn2 < it->second) {
            maxn2 = it->second;
            maxc2 = it->first;
        } else if (maxn2 == it->second) {
            if (maxc2 > it->first) maxc2 = it->first;
        }
    }
    printf("%c", maxc2);

    return 0;
}
