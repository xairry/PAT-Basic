#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test(int);
int is_odd(int);

int main() {
    int input;
    scanf("%d", &input);

    int n_step = 0;
    n_step = test(input);

    printf("%d", n_step);

    return 0;
}

int test(int input) {
    int output = 0;

    while (input != 1) {
        if (is_odd(input) == 1)
            input = input / 2;
        else
            input = (input * 3 + 1) / 2;
        output++; 
    }

    return output;
}

int is_odd(int input) {
    int output = 0;
    if (input % 2 == 0) 
        output = 1;

    return output;
}
