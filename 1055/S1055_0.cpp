#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

typedef struct {
    char * name;
    int height;
    int row;
    int loc;
} person;

int cmp1(person a, person b) {
    if (a.height > b.height)
        return 1;
    else if (a.height < b.height)
        return 0;
    if (strcmp(a.name, b.name) < 0)
        return 1;
    else 
        return 0;
}

int cmp2(person a, person b) {
    if (a.row > b.row) 
        return 1;
    else if (a.row < b.row) 
        return 0;
    if (a.loc < b.loc)
        return 1;
    else 
        return 0;
}

int main() {

    // read person
    int N, K;
    scanf("%d %d", &N, &K);

    person * person_v = new person[N];

    for (int i=0; i<N; i++) {
        person_v[i].name = new char[10];
        scanf("%s %d", person_v[i].name, &person_v[i].height);
    }

    // sort person 
    sort(person_v, person_v+N, cmp1);

    // get the row number
    int row_length = N / K;

    // for each row align 
    // last line number
    int n_last = N - row_length * (K-1);
    // middle of last line
    int mid = n_last / 2 + 1;
    int il = mid - 1, ir = mid;
    int isright = 1, row_current = K, row_length_now = n_last;
    // for each person
    for (int i=0; i<N; i++) {
        person_v[i].row = row_current;
        if (isright) {
            if (ir > row_length_now) {
                row_length_now = row_length;
                mid = row_length_now / 2 + 1;
                il = mid - 1;
                ir = mid;
                row_current--;
                isright = 1;
                i--;
                continue;
            }
            person_v[i].loc = ir;
            ir++;
            isright = 0;
        } else {
            if (il < 1) {
                row_length_now = row_length;
                mid = row_length_now / 2 + 1;
                il = mid - 1;
                ir = mid;
                row_current--;
                isright = 1;
                i--;
                continue;
            }
            person_v[i].loc = il;
            il--;
            isright = 1;
        }
    }

    // output
    // sort person
    sort(person_v, person_v+N, cmp2);
    int old_row = K;
    int row_remain = n_last;
    for (int i=0; i<N; i++) {
        if (person_v[i].row < old_row) {
            old_row = person_v[i].row;
            row_remain = row_length;
            printf("\n");
        }
        printf("%s", person_v[i].name);
        row_remain--;
        if (row_remain > 0) {
            printf(" ");
        }
        
    }
    return 0;
}
