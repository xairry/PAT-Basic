#include <string>
#include <stdio.h>
#include<iostream>
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
    int young_age = 2000000, old_age = 0;

    // now
    int now_year = 2014, now_month = 9, now_day = 6;
    long long now = 2014 * 10000 + now_month * 100 + now_day;

    for (int i=0; i<n; i++) {
        scanf("%s %d/%d/%d", t_name, &t_year, &t_month, &t_day); 
        // if invalid
        long long age = now - (t_year * 10000 + t_month * 100 + t_day);
        if (age > 2000000 || age < 0) {
            continue;
        }

        // if valid
        valid_n++;

        // young
        if (young_age >= age) {
            young_age = age;
            young_name = t_name;
        }

        // old
        if (old_age <= age) {
            old_age = age;
            old_name = t_name;
        }
    }
<<<<<<< HEAD
	
	printf("%d",valid_n);
	if(valid_n != 0	)printf(" %s %s",old_name.c_str(), young_name.c_str());
    //printf("%d %s %s", valid_n, old_name.c_str(), young_name.c_str());
=======

    printf("%d", valid_n);
    // if there is not valid input, do not output "white space".
    if (valid_n != 0) 
        printf(" %s %s", old_name.c_str(), young_name.c_str());
>>>>>>> 21ea9ad6a04d23b6b0df977818f711b7585a6ef2

    return 0;
}
