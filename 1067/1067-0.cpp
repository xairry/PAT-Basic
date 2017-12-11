#include <iostream>
#include <string>

using namespace std;

int main() {

    string correct_pw;
    int max_time;

    cin>>correct_pw>>max_time;

    string input;
    for (int i=0; i<max_time; i++) {

        cin>>input;
        
        if (input == correct_pw) {
            cout<<"Welcome in";
            while (input != "#") {
                cin>>input;
            }
            return 0;
        } else {
            cout<<"Wrong password: "<<input<<endl;
        }
    }

    cout<<"Account locked";
    while (input != "#") {
        cin>>input;
    }
    
    return 0;
}
