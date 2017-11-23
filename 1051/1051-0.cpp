#include <iostream>
//#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    double r1, r2, p1, p2;
    cin>>r1>>p1>>r2>>p2;

    double real, i;

    real = r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2));
    i = r1 * r2 * (sin(p1) * cos(p2) + sin(p2) * cos(p1));

    real = (abs(real) + 0.005) * real / abs(real);
    i = (abs(i) + 0.005) * i / abs(i);

//    cout<<fixed<<setprecision(2);
//    cout<<real<<i<<"i"<<endl;
    printf("%.2lf%.2lfi", real, i);

    return 0;
}
