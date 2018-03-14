#include<iostream>
#include <stdio.h>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	double sl=0,tmp=0;
	scanf("%d", &n);
	for (int i = 1; i <=n; i++) {
		scanf("%lf", &tmp);
		sl +=  (i*tmp)*(n+1-i);
	}
	printf("%.2f\n",sl);
	
	return 0;
}


