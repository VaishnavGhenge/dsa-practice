#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    int k = 5, zeros = 0;
	    
	    while((n/k) > 0)
	    {
	        zeros += (n/k);
	        k *= 5;
	    }
	    printf("%d\n", zeros);
	}
	return 0;
}
