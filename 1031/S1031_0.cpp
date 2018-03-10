#include <iostream>
#include <string>

using namespace std;

bool check_id(string);

int main() {
    int n;
    cin>>n;

    int n_invalid = 0;
    for (int i=0; i<n; i++) {
        string id;
        cin>>id;
        if (!check_id(id)) {
            n_invalid++;
            cout<<id<<endl;
        }
    }

    if (n_invalid == 0) 
        cout<<"All passed";

    return 0;
}

bool check_id(string id) {
    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    string M = "10X98765432";
    int sum=0;

    for (int i=0; i<17; i++) {
        if (id[i] < '0' || id[i] > '9')
            return false;
        sum+=(id[i] - '0') * weight[i];
    }

    if (id[17] == M[sum % 11]) {
        return true;
    } else {
        return false;
    }
}
