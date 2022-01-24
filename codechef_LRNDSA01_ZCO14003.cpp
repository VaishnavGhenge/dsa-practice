#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	vector<long long> arr;
	scanf("%lld", &t);
	
	for(long long i = 0; i < t; i++)
	{
	    long long n;
	    scanf("%lld", &n);
	    arr.push_back(n);
	}
	
	sort(arr.begin(), arr.end());
	
	long long max = 0;
	for(long long i = 0; i < t; i++)
	{
	    long long sum = arr[i] * (t-i);
	    if(sum > max)
	    {
	        max = sum;
	    }
	}
	
	printf("%lld", max);
	return 0;
}
