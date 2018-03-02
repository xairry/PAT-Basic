#include <cstdio>
#include <set>
using namespace std;
int getFriendNum(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() {
    set<int> s;
    int n, num;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        s.insert(getFriendNum(num));
    }
    printf("%d\n", s.size());
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    //for(auto it = s.begin(); it != s.end(); it++) 
	{
        if(it != s.begin()) printf(" ");
        printf("%d", *it);
    }
    return 0;
}
