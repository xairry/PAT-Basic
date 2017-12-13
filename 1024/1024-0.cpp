#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

const int maxn = 100000;

int main() {

    char sign1, sign2;
    char d[maxn];
    int point_position = 1;
    int e = 0;

    scanf("%c", &sign1);
    char temp;
    bool before_point = true;
    int n_num = 0;
    for (int i=0; i<maxn; i++) {
        scanf("%c", &temp);
        if (temp == 'E') {
            d[n_num] = '\0';
            break;
        }
        if (temp != '.') {
            d[n_num] = temp;
            n_num++;
        }
    }
    scanf("%c", &sign2);
    scanf("%d", &e);

//    cout<<sign1<<"##"<<sign2<<"##"<<d<<"##"<<point_position<<"##"<<e<<endl;

    if (sign1 == '-') printf("-");
    
    if (e == 0) {
        for (int i=0; i<strlen(d); i++) {
            if (i == point_position) printf(".");
            printf("%c", d[i]);
        }
    } else if (sign2 == '-') {
        printf("0.");
        for (int i=0; i<e-1; i++) {
            printf("0");
        }
        printf("%s", d);
    } else {
        if (e >= strlen(d) - 1) {
            int dd;
            sscanf(d, "%d", &dd);
            printf("%d", dd);
            for (int i=0; i<e-strlen(d)+1; i++) {
                printf("0");
            }
        } else {
            char left[maxn];
            char right[maxn];
            for (int i=0; i<e+1; i++) {
                left[i] = d[i];
            }
            for (int i=e+1; i<strlen(d); i++) {
                right[i-e-1] = d[i];
            }
            int left_num;
            sscanf(left, "%d", &left_num);
            printf("%d.%s", left_num, right);
        }
    }

    return 0;
}

