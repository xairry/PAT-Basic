#include <string>
#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

int main() {

    int M, N, S, count = 0, prize_count = 0;

    scanf("%d%d%d", &M, &N, &S);
    getchar();

    set<string> sets;

    string input;
    set<string>::iterator it;
    for (int i=0; i<M; i++) {
        getline(cin, input);
        if (i >= S-1) {
            if ((count % N) == 0) {
//                cout<<input<<"_"<<endl;
                it = sets.find(input);
                if (it == sets.end()) {
                    sets.insert(input);
                    cout<<input<<endl;
                    count++;
                    prize_count++;
                }
            } else {
                count++;
            }
        }
    }
    if (prize_count < 1) cout<<"Keep going..."<<endl;

    return 0;
}

// use set to mark the people, use count to count people, use prize_count to count the prize number
// count start ++ at i (i = S-1)
// (count % N) == 0 -> test if marked 
//   -> if no marked -> prize and count++
//   -> if marked -> next people

