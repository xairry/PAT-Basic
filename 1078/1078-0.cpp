#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    // challenge type
    char type;
    // read type
    type = getchar();
    // read \n
    getchar();


    if (type == 'C') {
        // compress
        // current char
        char now;
        // last char
        char last;
        last = getchar();
        // char count
        int count = 1;

        do {
            now = getchar();
            // if current is not last -- new character
            if (now != last) {
                // check the repeat of last
                if (count > 1) {
                    // if repeat: print the number and the last char
                    printf("%d%c", count, last);
                    // reset the count;
                    count = 1;
                }
                else {
                    // if not repeat, just output the char
                    printf("%c", last);
                }
                // reset last;
                last = now;
            } 
            else {
                // if current is last
                count++;
            }
        } while (now != '\n');
    }
    else if (type == 'D') {
        // decompress
        // the now char
        int count = 0;
        char now;
        now = getchar();
        while (now != '\n') {
            // if the now is number
            if (now <= '9' && now >= '0') {
                // add the count
                int num_now = now - '0';
                count = count * 10 + num_now;
            }
            else {
                // now is char: output the char with the repeats of count
                if (count == 0) count = 1;  // if no repeat just output 1
                for (int i = 0; i < count; i++) {
                    printf("%c", now);
                }
                // reset count
                count = 0;
            }
            now = getchar();
        }
    }
    return 0;
}

