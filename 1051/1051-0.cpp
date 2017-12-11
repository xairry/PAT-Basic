#include <iostream>
//#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;                             

double round2(double);

int main() {
    double r1, r2, p1, p2;
    cin>>r1>>p1>>r2>>p2;

    double real, i;

    real = r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2));
    i = r1 * r2 * (sin(p1) * cos(p2) + sin(p2) * cos(p1));

<<<<<<< HEAD
 //   real = (fabs(real) + 0.005) * real / fabs(real);
 //   i = (fabs(i) + 0.005) * i / fabs(i);

//    cout<<fixed<<setprecision(2);
//    cout<<real<<i<<"i"<<endl;
	if(real<0 && real+0.001 >0){
		printf("0.00");	//real<0«“¥Û”⁄0.001µƒ ±∫ÚÀƒ…·ŒÂ»Î «0£¨“™µ•∂¿¥¶¿Ì 
	}else{
		printf("%.2lf",real);
	}
	if(i>=0){
	printf("%+.2lfi", i);
	}else if(i<0 && i+0.001>0)
	{
	printf("+0.00i");//iÕ¨¿Ì 
	}
	else
		printf("%.2lfi",i);
=======
    if (real<0 && real > -0.001) {
        printf("0.00");	//real<0‰∏îÂ§ß‰∫é0.001ÁöÑÊó∂ÂÄôÂõõËàç‰∫îÂÖ•ÊòØ0ÔºåË¶ÅÂçïÁã¨Â§ÑÁêÜ
    } else {
        printf("%.2lf",real);
    }
    if (i>=0) {
        printf("%+.2lfi", i);
    } else if (i<0 && i > -0.001) {
        printf("+0.00i");//iÂêåÁêÜ
    } else {
        printf("%.2lfi",i);
    }
>>>>>>> f3da027fc25a982416075edcc56dd7d722c16224

	return 0;
}

