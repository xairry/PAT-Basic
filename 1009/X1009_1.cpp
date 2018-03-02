#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main() {
	stack<string> a;
	string str;
	while(cin>>str){
		a.push(str);
	}
	cout << a.top();
	a.pop();
	while(!a.empty()){
		
		cout<<" "<<a.top();
		a.pop();
	}
	return 0;
}
