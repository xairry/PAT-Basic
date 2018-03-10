#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<stack>
#include<string>
#include<vector>
#include<set>
using namespace std;
void zhao(int pg,int ps,int pk,int ag,int as,int ak){
	int tg,ts,tk;
		while(pk > ak){
			as --;
			ak +=29;
		}
		tk = ak - pk;
		while(ps > as){
			ag --;
			as += 17;
		}
		ts = as - ps;
		tg = ag - pg;
		printf("%d.%d.%d",tg,ts,tk);

}
void zhao1(int pg,int ps,int pk,int ag,int as,int ak){
	int tg,ts,tk;
		while(pk < ak){
			ps --;
			pk +=29;
		}
		tk = pk - ak;
		while(ps < as){
			pg --;
			ps += 17;
		}
		ts = ps - as;
		tg = pg - ag;
		printf("-%d.%d.%d",tg,ts,tk);

}
int main(){

	int pg,ps,pk,ag,as,ak,tg,ts,tk; 
	scanf("%d.%d.%d %d.%d.%d",&pg,&ps,&pk,&ag,&as,&ak);
	if(pg*17*29+ps*29+pk <= ag*17*29+as*29+ak){
		zhao( pg, ps, pk, ag, as, ak);
	}else{
		zhao1( pg, ps, pk, ag, as, ak);
	}
	
	
	return 0;
	
} 
