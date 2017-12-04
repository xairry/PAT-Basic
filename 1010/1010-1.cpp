#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main() {
	int a,b;
	bool ha=true;
	while(cin>>a>>b){
		if(b==0)continue;
		if(!ha)cout<<" ";
			else
				ha=false;
		cout<<a*b<<" "<<b-1;
	}
	if(ha){
		cout<<"0 0";
	}
	return 0;
}
