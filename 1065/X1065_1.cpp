#include<cstring>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<cstring>
#include<iostream>
#include<map>
#include<set>
using namespace std;

int main() {
	map<int,int> mp;
	int tmp1 = 0,tmp2 = 0;
	int n,m,cnt;
	scanf("%d",&n);
	vector<int> dog;
	vector<int> guest;
	for(int i=0;i<n;i++){
		scanf("%d %d",&tmp1,&tmp2);
		mp.insert(pair<int,int>(tmp1,tmp2));
		mp.insert(pair<int,int>(tmp2,tmp1));
	}
	
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&tmp1);
		map<int,int>::iterator it=mp.find(tmp1);
		
		if(it==mp.end()){
		dog.push_back(tmp1);
		cnt++;
		}else{
			guest.push_back(tmp1);
		}
	}
	for(int i=0;i<guest.size();i++){
		vector<int>::iterator it=find(guest.begin(),guest.end(),mp[ guest[i] ]);
		if(it==guest.end()){
			dog.push_back(guest[i]);
			cnt++;
		}
	}
	sort(dog.begin(),dog.end());
	printf("%d",cnt);
	if(cnt>0){
	printf("\n");
	for(int i=0;i<cnt;i++){
		if(i!=0)printf(" ");
	printf("%d",dog[i]);
	}
}
	return 0;
}
