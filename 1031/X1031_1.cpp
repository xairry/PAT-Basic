#include<iostream>
using namespace std;
bool cre(string str){
	int temp=0;
	int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	string c="10X98765432";
	for(int i=0;i<17;i++){
		if(str[i]<'0'||str[i]>'9'){
			return false;
		}
		temp = temp + (str[i]-'0')*a[i];
	}
	temp = temp%11;
	if(str[17]==c[temp]){
		return true;
	}else{
		return false;
	}
}
int main(){
	 int n;
    cin>>n;
	int count = 0;
    for (int i=0; i<n; i++) {
        string z;
        cin>>z;
        if (!cre(z)) {
            count++;
            cout<<z<<endl;
        }
    }

    if (count == 0) 
        cout<<"All passed";

    return 0;
}
