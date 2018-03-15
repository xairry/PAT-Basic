#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

typedef struct {
    int num;
    int loc;
    int rank;
} v;

bool cmp(v v1, v v2) {
    if (v1.num < v2.num) 
        return true;
    else 
        return false;
}

int main() {

    // read data
    int n;
    scanf("%d", &n);
    v * vs = new v[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &vs[i].num);
        vs[i].loc = i;
    }

    // get the rank
    sort(vs, vs+n, cmp);
    for (int i=0; i<n; i++) {
        vs[i].rank = i;
    }

    // output
    vector<int> result_v;
    int n_output = 0;
    int max_loc_left = 0;
    for (int i=0; i<n; i++) {
        if (max_loc_left < vs[i].loc) max_loc_left = vs[i].loc;
        if (vs[i].loc == vs[i].rank) {
            if (max_loc_left <= vs[i].loc) {
                n_output++;
                result_v.push_back(vs[i].num);
            }
        }
    }

    // the output number
    printf("%d\n", n_output);

    // the result digitals
    for (int i=0; i<n_output; i++) {
        printf("%d", result_v[i]);
        if (i != n_output - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
