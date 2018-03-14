#include <iostream>
#include <cstdio>

using namespace std;

typedef struct fraction {
    long long denominator;
    long long numerator;
    long long sig;
} fra;

long long get_lcd(long long n1, long long n2) {
    // choose the bigger
    long long numerator, denominator, remain;
    if (n1 > n2) {
        numerator = n1; denominator = n2;
    } else {
        numerator = n2; denominator = n1;
    }

    // divid get the remain
    do {
        //        cout<<numerator<<"\t"<<denominator<<endl;
        remain = numerator % denominator;
        if (remain > denominator) {
            numerator = remain;
        } else {
            numerator = denominator;
            denominator = remain;
        }
    } while (remain != 0);
    return numerator;
}

fra reduce_frac(fra frac) {
    // reduce the fractions
    long long lcd;
    // reduce the fist fraction
    if (frac.numerator < 0) {
        frac.sig = -1;
    } else {
        frac.sig = 1;
    }
    frac.numerator = frac.numerator * frac.sig;
    if (frac.numerator != 0) {
        lcd = get_lcd(frac.numerator, frac.denominator);
        frac.numerator = frac.numerator / lcd;
        frac.denominator = frac.denominator / lcd;
    }

    return frac;
}

void print_frac(fra frac) {
    if (frac.sig < 0) cout<<"(-";
    if (frac.numerator == 0) {
        cout<<"0";
    } else {
        if (frac.numerator >= frac.denominator) {
            cout<<(frac.numerator / frac.denominator);
            if (frac.numerator % frac.denominator != 0)
                cout<<" ";
        } 
        if (frac.numerator % frac.denominator != 0) {
            cout<<(frac.numerator % frac.denominator)<<"/"<<frac.denominator;
        }
    } 
    if (frac.sig < 0) cout<<")";
}

void manipulate(fra f1, fra f2, char op) {
    fra f3;
    print_frac(f1);
    printf(" %c ", op);
    print_frac(f2);
    if (op == '+') {
        f3.numerator = f1.sig * f1.numerator * f2.denominator + f2.sig * f2.numerator * f1.denominator;
        f3.denominator =  f1.denominator * f2.denominator;
    } else if (op == '-') {
        f3.numerator = f1.sig * f1.numerator * f2.denominator - f2.sig * f2.numerator * f1.denominator;
        f3.denominator =  f1.denominator * f2.denominator;
    } else if (op == '*') {
        f3.numerator = f1.sig * f2.sig * f1.numerator * f2.numerator;
        f3.denominator =  f1.denominator * f2.denominator;
    } else if (op == '/') {
        f3.numerator = f1.sig * f2.sig * f1.numerator * f2.denominator;
        f3.denominator =  f1.denominator * f2.numerator;
    }
    cout<<" = ";
    if (f3.denominator == 0) {
        cout<<"Inf";
    } else {
        f3 = reduce_frac(f3);
        print_frac(f3);
    }
    cout<<endl;
}

int main() {
    // input
    // input first and second fraction
    fra f1, f2, f3;
    char a;
    cin>>f1.numerator>>a>>f1.denominator>>f2.numerator>>a>>f2.denominator;

    // reduce the fractions
    f1 = reduce_frac(f1);
    f2 = reduce_frac(f2);

    // plus
    manipulate(f1, f2, '+');
    // minus
    manipulate(f1, f2, '-');
    // multiplication
    manipulate(f1, f2, '*');
    // division
    manipulate(f1, f2, '/');
    return 0;
}
