#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main() {
	int n,a1=0,a2=0,a3=0,a5=0;
	float a4=0.0;
	int temp4=0;
	cin>>n;
	vector<int> a(n);
	int k[5]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		if((a[i]%10)==0){
			a1+=a[i];
			k[0]++;
		}
		else if((a[i]%5)==1){
			a2+=a[i];
			a2= -a2;
			k[1]++;
		}else if((a[i]%5)==2){
			a3++;
			k[2]++;
		}else if((a[i]%5)==3){
			a4=a4+a[i];
			k[3]++;
			temp4++;
		}else if((a[i]%5)==4){
			if(a[i]>a5){
				a5 = a[i];
				k[4]++;
			}
		}
		
	}
	a2=-a2;
	a4=a4/temp4;
	if(k[0]==0)
		cout<<"N ";
	else
		cout<<a1<<" ";
	if(k[1]==0)
		cout<<"N ";
	else
		cout<<a2<<" ";
	if(k[2]==0)
		cout<<"N ";
	else
		cout<<a3<<" ";
	if(k[3]==0)
		cout<<"N ";
	else
		printf("%.1f ",a4);
	if(k[4]==0)
		cout<<"N ";
	else
		cout<<a5;
}
