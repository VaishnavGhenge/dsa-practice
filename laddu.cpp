#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);

	while(t--) {
		int act, laddus = 0;
		string origin;

		cin >> act >> origin;
		while(act--) {
			string activity;
			cin >> activity;

			if(activity == "CONTEST_WON") {
				int rank, bonus = 0;
				scanf("%d", &rank);

				bonus = (rank < 20) ? 20-rank : 0;
				laddus += 300 + bonus;
			} else if(activity == "TOP_CONTRIBUTOR") {
				laddus += 300;
			} else if(activity == "BUG_FOUND") {
				int severity;
				scanf("%d", &severity);

				laddus += severity;
			} else if(activity == "CONTEST_HOSTED") {
				laddus += 50;
			}
		}

		if(origin == "INDIAN") {
			printf("%d\n", (laddus/200));
		} else if(origin == "NON_INDIAN") {
			printf("%d\n", (laddus/400));
		}
	}
	
	return 0;
}