#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <math.h>

using namespace std;


const int maxn = 65;
char days[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main() {
    char s1[maxn], s2[maxn], s3[maxn], s4[maxn];
    char c_day, c_hour;
    int min;

    scanf("%s\n%s\n%s\n%s", s1, s2, s3, s4);

    // day
    int i = 0;
    while (i < maxn) {
        if (s1[i] == s2[i]) {
            if (s1[i] <= 'G' && s1[i] >= 'A') {
                c_day = s1[i];
                i++;
                break;
            }
        }
        i++;
    }

    // hour 
    while (i < maxn) {
        if (s1[i] == s2[i]) {
            if ((s1[i] <= 'N' && s1[i] >= 'A') || (s1[i] >= '0' && s1[i] <= '9')) {
                c_hour = s1[i];
                break;
            }
        }
        i++;
    }

    // min
    i = 0;
    while (i < maxn) {
        if (s3[i] == s4[i] && ((s3[i] <= 'z' && s3[i] >= 'a') || (s3[i] <= 'Z' && s3[i] >= 'A'))) {
            min = i;
            break;
        }
        i++;
    } 

    int hour;
    if (c_hour <= '9' && c_hour >= '0') hour = c_hour - '0';
    else hour = c_hour - 'A' + 1 + 9;

    printf("%s %02d:%02d", days[c_day - 'A'] ,hour, min);

    return 0;
}
