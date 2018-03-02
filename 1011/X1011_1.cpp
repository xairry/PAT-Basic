#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main() {
	int t;
	long int a,b,c;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a>>b>>c;
		if((a+b)>c){
			cout<<"Case #"<<i+1<<": "<<"true"<<endl;
		}else{
			cout<<"Case #"<<i+1<<": "<<"false"<<endl;
		}
	}
	return 0;
}
