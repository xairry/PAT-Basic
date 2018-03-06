#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<stack>
#include<string>
#include<vector>
#include<set>
using namespace std;
struct stu{
	string id;
	int test;
	int exam;
};
int main() {
	int n,test,exam,cha,ch;
	string str;
	stu ks;
	cin>>n;
	vector<stu> student;
	for(int i=0; i <n;i++){
		cin>>str>>test>>exam;
		ks.id = str;
		ks.test = test;
		ks.exam = exam;
		student.push_back(ks);
	}
//	for(int i = 0;i < n;i++){
//		cout<<student[i].id<<student[i].test<<student[i].exam<<endl;
//	}
	cin>>cha;
	for(int i=0; i <cha;i++){
		cin>>ch;
		for(int i=0; i <n;i++){
		if(student[i].test == ch){
			cout<<student[i].id<<" "<<student[i].exam<<endl;
		}
		}
	}
	return 0;
	
} 
