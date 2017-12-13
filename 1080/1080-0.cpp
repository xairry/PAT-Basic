#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

struct stu {
	string id;
	int G1 = -1;
	int G2 = -1;
	int G3 = -1;
	int G;
};


bool cmp(stu a, stu b) {
    if (a.G != b.G) 
        return a.G > b.G;
    else 
        return a.id < b.id;
}

int main() {
	int P, N, M;
	cin >> P >> N >> M;

    stu * astu = new stu[100000];	

	map<string, stu> mstu;
	char id[20];
	int cent;

	for (int i = 0; i < P; i++) {
		scanf("%s %d", id, &cent);
		mstu[id].G1 = cent;
	}
	for (int i = 0; i < N; i++) {
		scanf("%s %d", id, &cent);
		mstu[id].G2 = cent;
	}
	for (int i = 0; i < M; i++) {
		scanf("%s %d", id, &cent);
		mstu[id].G3 = cent;
	}

	int n_stu = 0;
	for (map<string, stu>::iterator it = mstu.begin(); it != mstu.end(); it++) {
		astu[n_stu] = it->second;
		astu[n_stu].id = it->first;
		if (astu[n_stu].G2 > astu[n_stu].G3) {
			astu[n_stu].G = round(0.4 * astu[n_stu].G2 + 0.6 * astu[n_stu].G3);
		}
		else {
			astu[n_stu].G = astu[n_stu].G3;
		}
        n_stu++;
	}

	sort(astu, astu + n_stu, cmp);

	for (int i = 0; i < n_stu; i++) {
		if (astu[i].G1 >= 200 && astu[i].G >= 60) {
			printf("%s %d %d %d %d\n", astu[i].id.c_str(), astu[i].G1, astu[i].G2, astu[i].G3, (int) round(astu[i].G));
		}
	}

	return 0;
}
