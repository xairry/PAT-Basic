#include <stdio.h>
#include <algorithm>

using namespace std;

const int maxn = 51;

struct num {
    int num;
    int used;
} nums[maxn];

bool cmp(num a, num b) {
    return a.num < b.num;
}

int main() {

    int n_num;
    int num = 0;
    int n=0;
    while (scanf("%d", &n_num) != EOF) {
        for (int i=0; i<n_num; i++) {
            nums[n].num = num;
            nums[n].used = 0;
            n++;
        }
        num++;
    }

    sort(nums, nums+n, cmp);

    for (int i=0; i<n; i++) {
        if (nums[i].num != 0) {
            printf("%d", nums[i].num);
            nums[i].used = 1;
            break;
        }
    }

    for (int i=0; i<n; i++) {
        if (nums[i].used != 1) 
            printf("%d", nums[i].num);
    }
}
