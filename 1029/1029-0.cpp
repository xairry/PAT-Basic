#include <stdio.h>
#include <map>
#include <string>
#include <set>
#include <iostream>

using namespace std;

int maxn = 10000;

int main() {
    string s1;
    string s2;

    cin>>s1>>s2;

    char * hash = new char[maxn];
    fill(hash, hash + maxn, 0);

    // set to recored the buttom print history
    set<char> printed;
    

    // fill the hash by the typing 
    for (int i=0; i<s2.size(); i++) {
        // count the number of char
        int key = (int) s2[i];  
        hash[key]++;
    }

    for (int i=0; i<s1.size(); i++) {
        // find the broken button
        if (hash[(int) s1[i]] == 0) {
            // transform to upper-case
            char c = s1[i];
            if (c <= 'z' & c >= 'a') {
                c = c + 'A' - 'a';
            }

            // if was printed
            set<char>::iterator it = printed.find(c);

            if (it == printed.end()) {
                
                // store the error bottom
                printed.insert(c);

                // print the error bottom
                printf("%c", c);
            }
        }
    }
    return 0;
}
