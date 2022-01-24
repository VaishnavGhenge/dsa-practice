#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string str;
	
	cin >> t;
	while(t--)
	{
	    cin >> str;
	    int len = str.length();
	    map<char, int> count1;
	    map<char, int> count2;
	    string a, b;
	    if(len % 2 == 0)
	    {
	        a = str.substr(0, (len/2));
	        b = str.substr((len/2), len);

	        for(int i = 0; i < len/2; i++)
	        {
	            count1[a[i]]++;
	            count2[b[i]]++;
	        }
	        
	        bool is = 1;
	        for(int i = 0; i < len/2; i++)
	        {
	            if(count1[a[i]] != count2[a[i]])
	            {
	                is = 0;
	                break;
	            }
	        }
	        
	        if(is)
	        {
	            cout << "YES" << endl;
	        }
	        else 
	        {
	            cout << "NO" <<endl;
	        }
	    }
	    else
	    {
	        a = str.substr(0, (int)len/2+1);
	        b = str.substr((int)len/2, len);
	        
	        for(int i = 0; i <= (int)len/2; i++)
	        {
	            count1[a[i]]++;
	            count2[b[i]]++;
	        }
	        
	        bool is = 1;
	        for(int i = 0; i <= (int)len/2; i++)
	        {
	            if(count1[a[i]] != count2[a[i]])
	            {
	                is = 0;
	                break;
	            }
	        }
	        
	        if(is)
	        {
	            cout << "YES" << endl;
	        }
	        else 
	        {
	            cout << "NO" <<endl;
	        }
	    }
	}
	
	return 0;
}
