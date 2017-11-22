#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string name;
    string id;
    int grade;
} student;

int main() {
    student top, bottom;
    top.grade = 0;
    bottom.grade = 200;

    int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        student temp;
        cin>>temp.name>>temp.id>>temp.grade;

        if (temp.grade > top.grade) {
            top = temp;
        } 
        if (temp.grade < bottom.grade) {
            bottom = temp;
        }
    }

    cout<<top.name<<" "<<top.id<<endl;
    cout<<bottom.name<<" "<<bottom.id<<endl;

    return 0;
}
