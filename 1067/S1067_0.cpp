#include <iostream>
#include <string>

using namespace std;

int main() {

    string correct_pw;
    int max_time;

    cin>>correct_pw>>max_time;
    getchar();

    string input;

    getline(cin, input);
    while (input != "#") {
        if (input == correct_pw) {
            cout<<"Welcome in";
            break;
        } else {
            cout<<"Wrong password: "<<input<<endl;;
            max_time--;
            if (max_time < 1) {
                cout<<"Account locked"<<endl;;
                break;
            }
        }
        getline(cin, input);
    } 
    while (input != "#") {
        getline(cin, input);
    }

    return 0;
}
