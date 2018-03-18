// PAT1.1.cpp : 定义控制台应用程序的入口点。
//

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;



int main() {
    int N;
    cin>>N;
    getchar();
    string s = "";

    for (int i=0; i<N; i++) {
        getline(cin, s);
        // cout<<s<<endl;
        if (s.length() < 6) {
           cout<<"Your password is tai duan le."<<endl;
           continue;
        }

		int ch_mark = 0, num_mark = 0, invalid = 0;
        for (int j=0; j<s.length() && invalid == 0; j++) {
			
            if ((s[j] >= '0' && s[j] <= '9')) {
				num_mark = 1;
			} else if ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z')) {
				ch_mark = 1;
			} else if (s[j] == '.') {
            } else {
				cout<<"Your password is tai luan le."<<endl;
				invalid = 1;
            }
			
        }
        if (invalid == 0) {
			if (num_mark == 0) {
				cout<<"Your password needs shu zi."<<endl;
			} else if (ch_mark == 0) {
				cout<<"Your password needs zi mu."<<endl;
			} else {
				cout<<"Your password is wan mei."<<endl;
			}  
		}
    }
    getchar;

    return 0;
}
// check if the input greater than 6, 
// if only contin character, number and point
// need character and number
// check the length
// Read into a string, for each:
        // if character, ch_mark = 1
        // if numeric, num_mark = 1
// If ch_mark * num_mark == 1 -> pass
