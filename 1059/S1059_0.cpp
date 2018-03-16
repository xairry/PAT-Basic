#include <map>
#include <string>
#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

const int prime_n = 10005;

// people struct 
typedef struct {
    // id as key
    // prize
    int prize;
    // searched
    int searched;
} people;

int main() {
    int N, K;
    scanf("%d", &N);

    // prime table
    int * prime_table = new int[prime_n];
    memset(prime_table, 0, prime_n);
    for (int i=2; i<prime_n; i++) {
        if (prime_table[i] == 0) {
            int a = 2;
            int base = i;
            int loc = i * a;
            while (loc < prime_n) {
                prime_table[loc] = 1;
                a++;
                loc = base * a;
            }
        }
    }

    // hash
    map<string, people> hash;

    // read into hash
    for (int i=0; i<N; i++) {
        char * s = new char[5];
        people p;
        // init search 
        p.searched = 0;

        // set prize
        if (i == 0) {
            p.prize = 1;
        } else if (prime_table[i+1] == 0) {
            p.prize = 2;
        } else p.prize = 3;

        scanf("%s", s);
        string ss = s;
        hash[ss] = p;
    }

    scanf("%d", &K);
    // search
    for (int i=0; i<K; i++) {

//        char * temp = new char[5];
//        scanf("%s", temp);

        map<string, people>::iterator hi;
        string ss;
        cin>>ss;
        hi = hash.find(ss);

        // if no result
        if (hi == hash.end()) {
            printf("%s: Are you kidding?\n", ss.c_str());
        } else {
            if (hi->second.searched == 1) {
                printf("%s: Checked\n", ss.c_str());
            } else {
                // marked searched
                hi->second.searched = 1;

                // output
                int prize = hi->second.prize;
                if (prize == 1) {
                    printf("%s: Mystery Award\n", ss.c_str());
                } else if (prize == 2) {
                    printf("%s: Minion\n", ss.c_str());
                } else {
                    printf("%s: Chocolate\n", ss.c_str());
                }
            }
        }
    }
}


