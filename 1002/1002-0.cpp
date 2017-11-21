#include <iostream>
#include <string.h>
using namespace std;

char  pronunciation[11][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu", "shi"};

int sum_digital_in_number(string number);
void say_digital_in_number(int number);

int main() {
    string input;
    int sum = 0;

    cin>>input;
    sum = sum_digital_in_number(input);
    say_digital_in_number(sum);

    return 0;
}

int sum_digital_in_number(string number) {
    int number_length = number.length();
    int sum = 0;

    for (int i=0; i<number_length; i++) {
        sum = sum + (number[i] - '0');
    }

    return sum;
}

void say_digital_in_number(int number) {
    string intStr = to_string(number);
    int string_length = intStr.length();

    for (int i=0; i<string_length; i++) {
        int j = intStr[i] - '0';
        cout<<pronunciation[j];

        if (i < string_length - 1) {
            cout<<" ";
        }
    }
}
