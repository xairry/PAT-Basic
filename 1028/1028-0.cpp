#include <string>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    scanf("%d\n", &n);

    // temp variables
    int valid_n = 0;
    char t_name[6];
    int t_year, t_month, t_day;

    // young and old
    string young_name, old_name;
    int young_age = 2100000, old_age = 0;

    // now
    int now_year = 2014, now_month = 9, now_day = 6;
    long long now = 2014 * 10000 + now_month * 100 + now_day;

    for (int i=0; i<n; i++) {
        scanf("%s %d/%d/%d", t_name, &t_year, &t_month, &t_day); 
        // if invalid
        long long age = now - (t_year * 10000 + t_month * 100 + t_day);
        if (age > 2000000 || age < 0 || t_month > 12 || t_day > 31) {
            continue;
        }

        // if valid
        valid_n++;

        // young
        if (young_age > age) {
            young_age = age;
            young_name = t_name;
        }

        // old
        if (old_age < age) {
            old_age = age;
            old_name = t_name;
        }
    }

    printf("%d %s %s\n", valid_n, old_name.c_str(), young_name.c_str());

    return 0;
}
