#include <iostream>
#include <string>

using namespace std;

bool is_pass(string);

int main() {
    int input_number;
    string input;
    cin>>input_number;

    for (int i=0; i<input_number; i++) {
        cin>>input;

        if (is_pass(input)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

bool is_pass(string str) {
    int str_length = str.length();
    int p_loc = -1;
    int t_loc = -1;
    int a_number = 0;

    for (int i=0; i<str_length; i++) {
        if (str[i] == 'A') {
            a_number++;
        } else if (str[i] == 'P') {
            p_loc = i;
        } else if (str[i] == 'T') {
            t_loc = i;
        }
    }

    if (
            // the string only include 'A' and two other characters
            (a_number + 2 == str_length) &  
            // there is 'P' and 'T' in string
            (p_loc != -1 & t_loc != -1) &  
            // the number of 'A' after 'T' is the product of the number of 'A' before and after 'P'
            (p_loc * (t_loc - p_loc - 1) == str_length - t_loc - 1) &  
            // there must least one 'A' between 'P' and 'T'
            (t_loc - p_loc > 1)) {
        return true;
    } else {
        return false;
    }
}
