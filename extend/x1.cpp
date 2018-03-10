#include <cstdio>
#include <string>
#include<cstring>
#include<vector>
#include<map>
#include<iostream>
using namespace std;
int main() {
	int n,m,tmp1,tmp2=0,cnt1 = 0,cnt2 = 0;
	scanf("%d %d",&m,&n);
	tmp1 = n;
	
  tmp2 = n-1;
	cnt2++;
	map<int,int> a;

  		while(tmp2!=1){
       
      if(tmp2&1){
				
				tmp2 --;
				cnt2++;
				a.insert(pair<int,int>(tmp2,cnt2));	
			}
        else{
          tmp2 = tmp2>>1;	
          cnt2 ++;
          a.insert(pair<int,int>(tmp2,cnt2));		
        }
				
}
      
      while(tmp1!= 1){
			
			if(tmp1&1){
				tmp1 ++;
				cnt1 ++;
				a.insert(pair<int,int>(tmp1,cnt1));
			}else {
				tmp1 = tmp1>>1;
				cnt1 ++;
				a.insert(pair<int,int>(tmp1,cnt1));
			}
			
		}
map<int,int>::iterator it =  a.find(m);
if(it!=a.end()) printf("%d\n",it->second);
	return 0;
}

