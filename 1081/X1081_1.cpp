#include<iostream>
#include <stdio.h>
#include <string>
#include<vector>
#include<algorithm>
#include<stack>
#include<set>
#include<map>
#include<cmath>
#include<cctype>
using namespace std;
int checknon(string a){
	int len=a.length();
	int flag=0;
	for(int i=0;i<len;i++){
		if(
			(a[i]>='a' && a[i]<='z' )
		||	(a[i]>='A' && a[i]<='Z')
		|| 	(a[i]=='.')
		||	(a[i]>='0' && a[i]<='9')
		){
			
		}
		else{
			flag =1;
		}
	}
	if(flag){
		return 1;
	}
	return 0;
}
int checknc(string a){
	int len=a.length();
	int flag=0,flag1=0;
	for(int i=0;i<len;i++){
		if(a[i]>='0' && a[i]<='9'){
			flag = 1;
		}
		if((a[i]>='a' && a[i]<='z' )||(a[i]>='A' && a[i]<='Z')){
			flag1 =2;
		}
	}
	if((flag==1)&&(flag1==2)){
		return 3;
	}
	if((flag==1)&& (flag1==0)){
		return 1;
	}
	if((flag1==2) && (flag==0)){
		return 2;
	}
	return 0;
	

}


int main(){
	
	int N;
	cin>>N;
	getchar();
	string str;
	for(int i=0;i<N;i++){
		getline(cin,str);
		if(str.length()<6){
			cout<<"Your password is tai duan le."<<endl; continue;
		}else if(checknon(str)){
			cout<<"Your password is tai luan le."<<endl; continue;
		}else if(checknc(str)==1){
			cout<<"Your password needs zi mu."<<endl; continue;
		}else if(checknc(str)==2){
			cout<<"Your password needs shu zi."<<endl; continue;
		}else if(checknc(str)==3){
			cout<<"Your password is wan mei."<<endl; continue;
		}
	}

	

    return 0;
}

	



