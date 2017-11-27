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

 //   real = (fabs(real) + 0.005) * real / fabs(real);
 //   i = (fabs(i) + 0.005) * i / fabs(i);

//    cout<<fixed<<setprecision(2);
//    cout<<real<<i<<"i"<<endl;
	if(real<0 && real+0.001 >0){
		printf("0.00");	//real<0且大于0.001的时候四舍五入是0，要单独处理 
	}else{
		printf("%.2lf",real);
	}
	if(i>=0){
	printf("%+.2lfi", i);
	}else if(i<0 && i+0.001>0)
	{
	printf("+0.00i");//i同理 
	}
	else
		printf("%.2lfi",i);

	return 0;
}
