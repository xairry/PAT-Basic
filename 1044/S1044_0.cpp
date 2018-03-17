#include <string>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

string d0[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string d1[13] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int is_num (string s) {
    if (s[0] <= '9') {
        return 1;
    } else {
        return 0;
    }
}

string number2string (string s) {
    int n;
    sscanf(s.c_str(), "%d", &n);
    string output;
    if (n / 13 > 0) {
        if (n % 13 > 0) {
            output = d1[n / 13] + " " + d0[n % 13];
        } else {
            output = d1[n / 13];
        }
    } else {
        output = d0[n % 13];
    }
    return output;
}

int string2number (vector<string> vs) {
    int sum = 0;

    vector<string>::iterator vi = vs.begin();

    while (vi != vs.end()) {
        for (int i=0; i<13; i++) {
            if (d1[i] == *vi) {
                sum += i * 13;
                break;
            }
            if (d0[i] == *vi) {
                sum += i;
                break;
            }
        }
        vi++;
    }

    return sum;
}

void split_by(string &s, vector<string> &vs, char ch) {
    size_t init_pos = 0, current_pos = s.find(ch);
    while (current_pos != EOF) {
        vs.push_back(s.substr(init_pos, current_pos - init_pos));
        init_pos = current_pos + 1;
        current_pos = s.find(ch, init_pos);
    }
    vs.push_back(s.substr(init_pos, s.length() - init_pos));
}

int main() {
    
    // input n
    int n;
    cin>>n;
    getchar();

    for (int i=0; i<n; i++) {
        string s;
        getline(cin, s);
        vector<string> vs;
        split_by(s, vs, ' ');

        if (is_num(vs[0])) {
            cout<<number2string(vs[0])<<endl;
        } else {
            cout<<string2number(vs)<<endl;
        }
    }

    return 0;
}
