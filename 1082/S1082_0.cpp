

#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

typedef struct {
        int id;
        int x;
        int y;
        int d2;
} person;

int cmp(person a, person b) {
    if (a.d2 > b.d2) {
      return 1;
    } else {
      return 0;
    }
}     

int main() {
    int N;
    scanf("%d", &N);
    person * persons = new person[N];
    for (int i=0; i<N; i++) {
        scanf("%d%d%d", &persons[i].id, &persons[i].x, &persons[i].y);
        persons[i].d2 = persons[i].x * persons[i].x + persons[i].y * persons[i].y;
    }
    sort(persons, persons+N, cmp);
    
    printf("%04d %04d", persons[N-1].id, persons[0].id);

    return 0;
}
       

// find out the most near and most far
// x^2 + y^2 = z^2
// read each result, store it in a structure
// calculate the distance
// sort it and get the result
