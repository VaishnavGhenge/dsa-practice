#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);

	while(t--) {
		int n, x, c1 = 0;
		string s;
		scanf("%d %d", &n, &x);
		cin >> s;

		vector<int> a;
		for(int i = 0; i < n; i++) {
			if(s[i] == '1') {
				a.push_back(i);
				c1++;
			}
		}

		if(c1 == 0) {
			printf("%d\n", (n/x));
			continue;
		}

		int ans = 0;
		int *p = a.data();
		for(int i = 0; i < c1; i++) {
			string str = s;

			str[*p++] = '0';
			int c0= 0, count = 0;

			for(int k = 0; k < n; k++) {
				c0 = 0;
				if(str[k] == '0') {
					for(int j = k; j < x+k; j++) {
						if(str[j] == '0')
							c0++;
					}
				}

				if(c0 == x) {
					count++;
					k += x-1;
				}
			}

			if(count > ans) {
				ans = count;
			}
		}

		printf("%d\n", ans);
	}
	return 0;
}
