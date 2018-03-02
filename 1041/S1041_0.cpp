#include <iostream>
#include <string>

using namespace std;

typedef struct {
    string id;
    int test_location;
    int site_location;
} person;

void find_person(person*, int, int);

int main() {
    int n_person;
    cin>>n_person;

    person * person_list = new person[n_person];

    for (int i=0; i<n_person; i++) {
        cin>>person_list[i].id>>person_list[i].test_location>>person_list[i].site_location;
    }

    int n_query;
    cin>>n_query;

    for (int i=0; i<n_query; i++) {
        int query_test_location;
        cin>>query_test_location;

        find_person(person_list, n_person, query_test_location);
    }

    return 0;
}

void find_person(person * person_list, int n_person, int query) {
    for (int i=0; i<n_person; i++) {
        if (query == person_list[i].test_location) {
            cout<<person_list[i].id<<" "<<person_list[i].site_location<<endl;
            break;
        }
    }
}
