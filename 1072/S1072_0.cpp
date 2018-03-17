#include <string>
#include <cstdio>
#include <set>
#include <iostream>

using namespace std;

int main() {
    int N, M;
    set<string> sets;
    cin>>N>>M;
    for (int i=0; i<M; i++) {
        string input;
        cin>>input;
        sets.insert(input);
    }

    int n_item_searched = 0, n_person_searched = 0;;
    for (int i=0; i<N; i++) {
        string name, item_name;
        cin>>name;
        int n_item, printed = 0;
        cin>>n_item;
        set<string>::iterator it;
        for (int j=0; j<n_item; j++) {
            cin>>item_name;
            it = sets.find(item_name);
            if (it != sets.end()) {
                n_item_searched++;
                if (printed == 0) {
                    cout<<name<<":";
                    printed = 1;
                    n_person_searched++;
                }
                cout<<" "<<item_name;
            }
        }
        if (printed) cout<<endl;
    }
    cout<<n_person_searched<<" "<<n_item_searched<<endl;
    return 0;
}

// Build the item set to mark the items
// Read each student
//   If the item in hash apear, print the student name once 
//     If not mark then mark the printed and print the name of student
//     Print the item.   
