#include<cstring>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<iostream>
#include<sstream>
using namespace std;
int *num = new int[100000];
int main() {
	int d,N;
	string a,c;
	scanf("%d %d",&d,&N);
//	a+=(d+'0');
	int cntn=0;
	while(d!=1){
		num[cntn] = d%10;
		d =d/10;
		cntn++;
	}
	num[cntn]=1;
	for(int i=cntn;i>=0;i--){
		a+=(num[i]+'0');
	}
//cout<<a<<endl;
	for(int i=1;i<N;i++)
		{
		int len=a.size();
		int cnt=1;
		for(int j=0;j<len;j++){
			if(j+1==len){
					c+=(a[j]);
					c+=(cnt+'0');
					break;
				}
			if(a[j]==a[j+1]){
				cnt++;
				continue;
			}else if(a[j]!=a[j+1]){
				c+=(a[j]);
				c+=(cnt+'0');
				cnt = 1;
				continue;
			}
		}
		a.clear();
		a+=c;
		c.clear();
	}
		cout<<a;
return 0;
}
