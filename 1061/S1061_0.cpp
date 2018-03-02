#include <iostream>
#include <string>

using namespace std;

int main() {
    int n_question, n_students;

    cin>>n_students>>n_question;

    int * weight = new int[n_question];
    int * answers = new int[n_question];

    for (int i=0; i<n_question; i++)
        cin>>weight[i];

    for (int i=0; i<n_question; i++)
        cin>>answers[i];

    for (int i=0; i<n_students; i++) {
        int cent = 0;
        for (int j=0; j<n_question; j++) {
            int answer;
            cin>>answer;
            if (answers[j] == answer)
                cent += weight[j];
        }

        cout<<cent<<endl;
    }

    return 0;
}
