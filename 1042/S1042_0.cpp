#include <iostream>

using namespace std;


int main() {

    int count[24];

    for (int i=0; i<24; i++) {
        count[i] = 0;
    }

    char a;

    while (a != '\n') {
        scanf("%c", &a);
        if (a >= 'A' & a <= 'Z') {
            count[a-'A']++;
        } else if (a >= 'a' & a <= 'z') {
            count[a-'a']++;
        }
    }

    int max = 0;
    int j = 0;
    for (int i=0; i<24; i++) {
        if (max < count[i]) {
            max = count[i];
            j = i;
        }
    }

    printf("%c %d", 'a' + j, max);

    return 0;
}
