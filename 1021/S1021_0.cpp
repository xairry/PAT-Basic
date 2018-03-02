#include <iostream>
#include <string>

using namespace std;

int count_char_in_string(string, char);

int main() {
    string number;
    cin>>number;

    for (int i=0; i<10; i++) {
        int n;
        n = count_char_in_string(number, to_string(i)[0]);
        if (n > 0) {
            cout<<i<<":"<<n<<endl;
        }
    }
    return 0;
}

int count_char_in_string(string s, char c) {
   int s_length = s.length();
   int c_n=0;
   for (int i=0; i<s_length; i++) {
       if (s[i] == c)
           c_n++;
   }

   return c_n;
}
