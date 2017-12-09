#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int n,tid,mid,score;
	cin>>n;
	int team[1001] = {0};
	for(int i=0;i<n;i++){
		scanf("%d-%d %d",&tid,&mid,&score);
		team[tid] +=score;
	}
	int max = 0;
	for(int i=0;i<1001;i++){
		if(team[i]>team[max]){
			max=i;
		}
	}
	cout<<max<<" "<<team[max];
	return 0;
}
