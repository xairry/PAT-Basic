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

struct Shot{
	int id;
	int x;
	int y;
	double score;
};
bool cmp(Shot a,Shot b){
	if(a.score!=b.score){
		return a.score<b.score;
	}
}
int main(){
	
	int N;
	scanf("%d",&N);
	Shot ss;
	vector<Shot> ves;
	for(int i = 0; i < N; i++){
		scanf("%d %d %d",&ss.id,&ss.x,&ss.y);
		ss.score = sqrt(abs(ss.x*ss.x) + (ss.y*ss.y));
		ves.push_back(ss);
	}
	sort(ves.begin(),ves.end(),cmp);
	vector<Shot>::iterator it = ves.begin();
	
	printf("%04d %04d\n",(*it).id,(*(it+N-1)).id);
	
 return 0;
}

	



