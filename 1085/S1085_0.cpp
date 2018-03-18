#include <map>
#include <string>
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef struct {
    int n;
    double cent_f;
    int cent;
    string name;
} sch; 

int cmp(sch a, sch b) {
    if (a.cent > b.cent) {
        return 1;
    } else if (a.cent < b.cent) {
        return 0;
    } else if (a.n > b.n) {
        return 0;
    } else if (a.n < b.n) {
        return 1;
    } else if (a.name < b.name) {
        return 1;
    } else {
        return 0;
    }
}

string to_lower(string a) {
    for (int i=0; i<a.length(); i++) {
        if (a[i] < 'a') {
            a[i] = a[i] + 'a' - 'A';
        }
    }
    return a;
}

int main() {

    int N;
    scanf("%d", &N);
    map<string, sch> hash;
    map<string, sch>::iterator it;

    string id, school;
    int n_school = 0;
    double cent_f;
    for (int i=0; i<N; i++) {
        cin>>id>>cent_f>>school;
        //cout<<to_lower(school)<<"_"<<endl;
        school = to_lower(school);
        it = hash.find(school);
        if (it == hash.end()) {
            hash[school].n = 0;
            hash[school].cent_f = 0;
            hash[school].name = school;
            n_school++;
        }
        if (id[0] == 'B') {
            cent_f = cent_f / 1.5;
        } else if (id[0] == 'T') {
            cent_f = cent_f * 1.5;
        }

        //    cent = (int) cent_f;

        hash[school].cent_f += cent_f;
        hash[school].n++;
    }

    sch * sch_array = new sch[n_school];
    int s_i=0;
    for (it = hash.begin(); it != hash.end(); it++) {
        sch_array[s_i] = it->second;
        sch_array[s_i].cent = (int) sch_array[s_i].cent_f;
        s_i++;
        //cout<<it->second.name<<endl;
        //cout<<sch_array[s_i - 1].name<<endl;
    }

    sort(sch_array, sch_array+n_school, cmp);

    //cout<<n_school<<endl;

    printf("%d\n", n_school);

    int last_cent = -1;
    int rank = 1;
    for (int i=0; i<n_school; i++) {
        sch sch_current = sch_array[i];
        int current_cent = sch_current.cent;
        if (current_cent != last_cent) {
            rank = i+1;
        }

        printf("%d %s %d %d\n", rank, sch_current.name.c_str(), sch_current.cent, sch_current.n);
        last_cent = current_cent;
    }

    //int cc;
    //scanf("%d", &cc);

    return 0;
}

// school structure:
// school structure hash
// read the person
// transform the school name to lowercase
// if the school name in the hash? if not initiate the structure
// test the type, get the weighted cent, add the cent
// school percent number ++
// sort by cent (>) -> person number (>) -> school name (<) 
