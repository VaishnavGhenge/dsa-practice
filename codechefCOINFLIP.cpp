#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);

	while(t--) {
		int g;
		scanf("%d", &g);

		while(g--) {
			int i, n, q;
			scanf("%d %d %d", &i, &n, &q);

			if(n%2 == 0) {
				printf("%d\n", (n/2));
			} else {
				if(i == 1) {
					if(q == 1) {
						printf("%d\n", (n/2));
					} else if(q == 2) {
						printf("%d\n", (n/2)+1);
					}
				} else if(i == 2) {
					if(q == 1) {
						printf("%d\n", (n/2)+1);
					} else if(q == 2) {
						printf("%d\n", (n/2));
					}
				}
			}
		}
	}
	return 0;
}