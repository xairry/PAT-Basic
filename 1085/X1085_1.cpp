#include<stdio.h>
#include<vector>
#include<map>
#include<string>
#include<cstring>
#include<cctype>
#include<set>
#include<iostream>
#include<algorithm>
using namespace std;

struct Stu{
	string id;
	int sc;
	string sa;
};

struct Sch{
	string sa;
	int sc;
	int stucnt;
	
};

bool cmp(Sch a,Sch b){
 	if(a.sc != b.sc){
 		return a.sc > b.sc;
	 }else if(a.stucnt != b.stucnt){
	 return a.stucnt < b.stucnt;
 }else{
 	return a.sa < b.sa;
 }
}
int main(){
	int N;
	scanf("%d",&N);
	Stu stu;
	Sch sch;
	vector<Stu> vstu;
	vector<Sch> vsch;
	set<string> st;
	
	for(int i=0;i<N;i++){
		cin>>stu.id>>stu.sc>>stu.sa;
		for(int j=0;j<stu.sa.length();j++){
			stu.sa[j] = tolower(stu.sa[j]);
		}
		st.insert(stu.sa);
		vstu.push_back(stu);
	}
	
	set<string>::iterator it1=st.begin();
	for(it1;it1!=st.end();it1++){
		int cnt = 0;
		int sum = 0;
		vector<Stu>::iterator it2 = vstu.begin();
		sch.sa=(*it1);
		for(it2;it2!=vstu.end();it2++){
		
			if(		(*it2).sa==(*it1)		){
				cnt++;
				if((*it2).id[0] == 'A') sum+= (*it2).sc;
				if((*it2).id[0] == 'B') sum+= (*it2).sc*2/3;
				if((*it2).id[0] == 'T') sum+= (((*it2).sc*3)>>1);
			 }
		
		}
		sch.sc = sum;
		sch.stucnt = cnt;
		vsch.push_back(sch);
		
	}
	cout<<st.size()<<endl;
	sort(vsch.begin(),vsch.end(),cmp);
	vector<Sch>::iterator it3 = vsch.begin();
	int xuhao=1;
	for(it3;it3!=vsch.end();it3++){
		if((*it3).sc != (*(it3-1)).sc){
			xuhao =( (it3)-vsch.begin() +1);
		}
		cout<<xuhao<<" "<<(*it3).sa<< " "<<(*it3).sc<<" "<<(*it3).stucnt<< endl;
	}
	
	
	
return 0;
}
