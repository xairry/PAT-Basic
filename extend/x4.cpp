#include <stdio.h>
#include <string>
#include<cstring>
#include<vector>
#include<map>
#include<queue>
#include<iostream>
using namespace std;

int a[10000][1];
int main() {
	int n,tmp,cnt = 1,flag=0,flag1=0;
	int max=0,mintmp=30000;
	int min[10000] = {0};
	scanf("%d",&n);
	//int tmpa[n];
	queue<int> qstu;
	
	
	for(int i = 0; i < n; i++){
		scanf("%d",&tmp);
		qstu.push(tmp);
	}
	a[0][0] = qstu.front();
	qstu.pop();
	max = a[0][0];

	
//	printf("%d",a[0][0]);
	while(!qstu.empty()){
		for(int i = 0; i<cnt; i++){
			if(a[i][0]>max) max = a[i][0];
			if(qstu.front() < a[i][0]) 
				{
				min[i] = a[i][0] - qstu.front();
				flag1=1;
			}
			if(min[i] < mintmp){
				mintmp = min[i];
				flag = i;
			}
		}

		
		if(qstu.front()>max){
			a[cnt][0] = qstu.front();
			qstu.pop();
			cnt++;
			max=0;
		}else if(flag1){
			a[flag][0] = qstu.front();
			qstu.pop();
			max = 0;
		}
	
	}
	printf("%d",cnt);
return 0;
}
