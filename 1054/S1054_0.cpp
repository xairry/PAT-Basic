#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int test(string s) {

    
    int dot_apearted = 0, n_num_after_dot = 0;;

    for (int i=0; i<s.length(); i++) {
        // only one dot
        if (
                // only contain '-' 'number' and '.'
                ((s[i] > '9' || s[i] < '0') && s[i] != '.' && s[i] != '-') ||
                // if '.' in the s, most 2 number behind it
                (n_num_after_dot >= 2) ||
                // - only can at the beginning
                (s[i] == '-' && i != 0)   ||
                // only one dot and dot not at the beginning or last
                (s[i] == '.' && (dot_apearted))
//                (s[i] == '.' && (i == 0 || i == s.length() - 1))
           ) {
            return 0;
            break;
        }
        if (dot_apearted) n_num_after_dot++;
        if (s[i] == '.') dot_apearted = 1;
        // number is less than 1000 and greater than -1000
    }

    float ftemp;
    sscanf(s.c_str(), "%f", &ftemp);
    if (ftemp >= -1000 & ftemp <= 1000) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int N, n_valid = 0;
    float sum = 0;
    cin>>N;

    string s_temp;
    float ftemp;
    for (int i=0; i<N; i++) {
        cin>>s_temp;
        if (test(s_temp)) {
            sscanf(s_temp.c_str(), "%f", &ftemp);
            sum += ftemp;
            n_valid++;
        } else {
            cout<<"ERROR: "<<s_temp<<" is not a legal number"<<endl;
        }
    }


    if (n_valid == 0) {
        cout<<"The average of 0 numbers is Undefined";
    } else {
        float mean = sum / (float) n_valid;
        char * s_mean = new char[100];
        sprintf(s_mean, "%.2f", mean);
        if (n_valid == 1) 
            cout<<"The average of "<<n_valid<<" number is "<<s_mean;
        else 
            cout<<"The average of "<<n_valid<<" numbers is "<<s_mean;
    }

    return 0;
}
