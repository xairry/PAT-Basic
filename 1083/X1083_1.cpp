#include<iostream>
#include <stdio.h>
#include <cstring>
#include<vector>
#include<algorithm>
#include<stack>
#include<set>
#include<map>
#include<cmath>
#include<cctype>
using namespace std;

int main(){
	
	int N;
	scanf("%d",&N);
	int a[N+1],b[N+1],c[N+1];
	memset(c,0,sizeof(c));
	memset(b,0,sizeof(b));
	memset(a,0,sizeof(a));
	for(int i = 1; i <=N ; i++){
		scanf("%d",&a[i]);
		b[i] = abs(a[i] - i);
	}
	for(int i=1;i<=N; i++){
			c[b[i]]++;
	}
	
	for(int i=N;i>1;i--){
		if(c[i]>1)
			printf("%d %d\n",i,c[i]);
	}
	
 return 0;
}

	



