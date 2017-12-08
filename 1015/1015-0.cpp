#include <stdio.h>
#include <algorithm>

using namespace std;

const int maxn = 100000;
typedef struct {
    int id;
    int d;
    int c;
    int score;
} stu;

const int shenren = 1000000;
const int junzi = 100000;
const int yuren = 10000;
const int xiaoren = 1000;
const int exclude = 0;

bool cmp(stu a, stu b) {
    if (a.score != b.score)
        return a.score > b.score;
    else if (a.d != b.d)
        return a.d > b.d;
    else 
        return a.id < b.id;
}

int main() {
    int n, L, H;
    scanf("%d %d %d", &n, &L, &H);

    stu st[n];

    for (int i=0; i<n; i++) {
        scanf("%d %d %d", &st[i].id, &st[i].d, &st[i].c);
        if (st[i].d < L || st[i].c < L) {
            st[i].score = exclude;
            continue;
        }
        int degree = 0;
        if (st[i].d >= H && st[i].c >= H) {
            degree = shenren;
        } else if (st[i].d >= H && st[i].c < H) {
            degree = junzi;
        } else if (st[i].d < H && st[i].c < H && st[i].d >= st[i].c) {
            degree = yuren;
        } else if (st[i].d < H && st[i].d < st[i].c) {
            degree = xiaoren;
        }
        st[i].score = st[i].d + st[i].c + degree;
    }

    sort(st, st + n, cmp);

    int output_n = 0;
    for (int i=0; i<n; i++) {
        if (st[i].score > exclude) {
            output_n++;
        }
    }

    printf("%d\n", output_n);
    for (int i=0; i<output_n; i++) {
        printf("%d %d %d", st[i].id, st[i].d, st[i].c);
        if (i < output_n - 1) printf("\n");
    }

    return 0;
}
