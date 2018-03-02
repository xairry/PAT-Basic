#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // n and max_cent
    int n, max_cent;
    cin >> n >> max_cent;

    // for each group
    for (int i = 0; i < n; i++) {
        // read teachers chent
        int t_cent;
        cin >> t_cent;
        // read students cent
        int s_cent;
        // get mean for student cent
        int sum = 0, min = max_cent, max = 0, valid_n = 0;
        for (int j = 0; j < n - 1; j++) {
            cin >> s_cent;
            // if valid
            if (s_cent >= 0 && s_cent <= max_cent) {
                // count valid number
                valid_n++;
                // if max
                if (s_cent > max) max = s_cent;
                // if min
                if (s_cent < min) min = s_cent;
                // sum
                sum += s_cent;
            }
        }
        // print result
        cout << round((t_cent + (double)(sum - max - min) / (double)(valid_n - 2)) / 2)<<endl;
    }

    return 0;
}
