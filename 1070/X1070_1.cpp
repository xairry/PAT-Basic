#include<iostream>
#include <stdio.h>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, sl;
	scanf("%d", &n);
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &vec[i]);
	}
	sort(vec.begin(),vec.end());
	int result=vec[0];
	//cout << tmp<<endl;
	int si = vec.size();
	for (int i = 1; i < si; i++) {
		//cout << vec[i]<<" ";
		result = (result + vec[i]) / 2;
	}
	printf("%d", result);
	
	return 0;
}


