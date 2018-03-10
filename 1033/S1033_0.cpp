#include <set>
#include <iostream>
#include <string>

using namespace std;

int main() {

    // read in the error character 
    bool shift_bad = false;
    string s_bad;
    set<char> bad_set;

<<<<<<< HEAD
    //cin>>s_bad;
    getline(cin,s_bad);
=======
    getline(cin, s_bad);
>>>>>>> 21ea9ad6a04d23b6b0df977818f711b7585a6ef2
    for (int i=0; i<s_bad.length(); i++) {
        if (s_bad[i] == '+') {
            shift_bad = true;
        } else {
            bad_set.insert(s_bad[i]);
        }
    }

    // read in the string
    string input_string;
    //cin>>input_string;
    getline(cin,input_string);

    // checker every character and print
    char c_output;
    char c2check;

    for (int i=0; i<input_string.length(); i++) {
        c_output = input_string[i];
        c2check = c_output;

        // check the case 
        if (c_output <= 'Z' && c_output >= 'A') {
            // if shift is bad the uppper case will not output
            if (shift_bad)
                continue;
        } else if (c_output <= 'z' && c_output >= 'a') {
            // make the character upper case
            c2check = c2check - 'a' + 'A';
        }

        // if the key is broken
        set<char>::iterator it = bad_set.find(c2check);

        if (it == bad_set.end()) {
            printf("%c", c_output);
        }
    }

    return 0;
}
