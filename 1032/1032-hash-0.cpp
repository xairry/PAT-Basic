#include <iostream>
#include <map>
#include <string>

using namespace std;

// TODO use linker to pass this question
int main() {
    map<int, int> schoolmap;
    int n;
    cin>>n;

    // TODO how to get the hash key list?
    // instead use the school_max_id to 
    // record the key list;
    int school_max_id = 0;

    for (int i=0; i<n; i++) {
        int school;
        int cent;
        cin>>school>>cent;
        if (schoolmap.find(school) != schoolmap.end()) {
            schoolmap[school] = cent + schoolmap[school];
        } else {
            schoolmap[school] = cent;
            if (school > school_max_id)
                school_max_id = school;
        }
    }

    int max_cent = 0;
    int max_school = 1;
    for (int i=1; i<=school_max_id; i++) {
        if (schoolmap[i] > max_cent) {
            max_cent = schoolmap[i];
            max_school = i;
        }
    }

    cout<<max_school<<" "<<max_cent;
        
    return 0;
}
