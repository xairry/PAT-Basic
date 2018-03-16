#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

void read_symbol(vector <string> &v, int &n) {
    char ch_temp;
    string s;
    scanf("%c", &ch_temp);
    do {
        if (ch_temp != ' ') {
            if (ch_temp == ']') {
                v.push_back(s);
                n++;
            } else if (ch_temp != '[') {
                s = s + ch_temp;
            } else if (ch_temp == '[') {
                s = "";
            }
        }
        scanf("%c", &ch_temp);
    } while (ch_temp != '\n');
}

int main() {

    // symbols 
    vector <string> hand;
    vector <string> eye;
    vector <string> mouse;
    int n_hand = 0, n_eye = 0, n_mouse = 0;

    read_symbol(hand, n_hand);
    read_symbol(eye, n_eye);
    read_symbol(mouse, n_mouse);
    
    // test the symbol reading
//    vector<string>::iterator vi = eye.begin();
//    while (vi != eye.end()) {
//        cout<<*vi;
//        vi++;
//    }

    // input read number
    int n;
    scanf("%d", &n);
    
    string output = "";

    for (int i=0; i<n; i++) {
        int id;
        for (int j=0; j<5; j++) {
            scanf("%d", &id);
            // the input symbol id start from 1
            id--;
            // if the input is 0, output invalid
            if (id < 0) {
                output = "Are you kidding me? @\\/@";
                break;
            }
            if (j == 0 || j == 4) {
                if (id < n_hand) {
                    output = output + hand[id];
                } else {
                    output = "Are you kidding me? @\\/@";
                    break;
                }
            } else if (j == 1 || j == 3) {
                if (id < n_eye) {
                    if (j == 1) output = output + '(';
                    output = output + eye[id];
                    if (j == 3) output = output + ')';
                } else {
                    output = "Are you kidding me? @\\/@";
                    break;
                }
            } else if (j == 2) {
                if (id < n_mouse) {
                    output = output + mouse[id];
                } else {
                    output = "Are you kidding me? @\\/@";
                    break;
                }
            }
        }
        cout<<output<<endl;
        output = "";
    }


    return 0;
}
