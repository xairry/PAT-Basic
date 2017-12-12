#include <cstdio>
#include <algorithm>
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main() {
	int n=0,m=0,jin=0,ge=0,temp=0,snum=0,fnum=0;
	cin>>n>>m;
	bool a[10000];
	memset(a,false,sizeof(a));
	for(int i=0;i<m;i++){
		cin>>jin;
		a[jin]=true;
	}
	for(int i=0;i<n;i++){
		char name[10];
		
		bool flag=false;
		cin>>name>>ge;
		for(int j=0;j<ge;j++){
			cin>>temp;
			if(a[temp]){
				if(!flag){
					cout<<name<<":";
					flag=true;
				}
				cout<<" "<<setfill('0')<<setw(4)<<temp;
				fnum++;
			}
		}
		if(flag){
			cout<<endl;
			snum++;
		}
	}
	cout<<snum<<" "<<fnum;
	return 0;
}
