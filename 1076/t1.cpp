#include <stdio.h>

int main()
{
	// the length of password
	int n;
	scanf("%d", &n);

	// read the answear
	for (int i = 0; i < n; i++) {
		// read the four choice
		for (int j = 0; j < 4; j++) {
			char ans[3];
			scanf("%s", ans);
			if (ans[2] == 'T') {
				if (ans[0] == 'A') printf("1");
				if (ans[0] == 'B') printf("2");
				if (ans[0] == 'C') printf("3");
				if (ans[0] == 'D') printf("4");
			}
		}
	}

    return 0;
}
