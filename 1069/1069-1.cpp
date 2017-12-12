#include<iostream>
#include<map>
using namespace std;
int main(){
	int m,n,s;
	cin>>m>>n>>s;
	string str;
	bool flag=0;
	map<string,int> ma;
	for(int i=1;i<=m;i++){
		cin>>str;
		if(ma[str]==1)
			s=s+1;
		if(i==s&&ma[str]==0){
			ma[str]=1;
			cout<<str<<endl;
			flag=true;
			s+=n;
		}
	}
	if(flag==false)cout<<"Keep going...";
	return 0;
}
