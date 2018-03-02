#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];}
	if(m!=n&&m!=0){
		if(m>n) m=m-n;
		reverse(a.begin(),a.begin()+n);
		reverse(a.begin(),a.begin()+m);
		reverse(a.begin()+m,a.begin()+n);
	}
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<" ";
		
	}cout<<a[n-1];
	
	
}
