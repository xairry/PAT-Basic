#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;
int transform(int input, int from, int to, int replace);
int main() {
    int n_row, n_col, from, to, replace;
    scanf("%d%d%d%d%d",&n_row,&n_col,&from,&to,&replace);
	//cin>>n_row>>n_col>>from>>to>>replace;
    int i,j,output;
    for (i=0; i<n_row; i++) {
        for (j=0; j<n_col; j++) {
            int num;
            scanf("%d", &num);
			//cin>>num;
            output=transform(num, from, to, replace);
            cout<<setw(3)<<setfill('0')<<output;
            if (j<n_col-1)
                cout<<" ";
        }
        if (i<n_row-1)
            cout<<endl;
    }
    return 0;
}

int transform(int input, int from, int to, int replace) {
    if (input >= from & input <= to)
        input = replace;
	return input;
}

