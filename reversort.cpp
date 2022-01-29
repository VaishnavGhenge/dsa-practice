#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    int lim = t;
    
    while(t--) {
        int n;
        scanf("%d", &n);
        vector<int> v(n);
        
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        int cost = 0;
        for(int i = 0; i < n-1; i++) {
            int min = v[i];
            int pos = i;
            
            for(int j = i; j < n; j++) {
                if(v[j] < min) {
                    min = v[j];
                    pos = j;
                }
            }

            // cout << i << " " << pos << endl;
            
            int start = i, end = pos;
            while(start < end) {
                swap(v[start], v[end]);
                start++;
                end--;
            }
            
            // for(auto it: v) {
            //     cout << it << " ";
            // }
            // cout << endl;

            cost += pos - i + 1;
        }
        
        cout << "Case #" << lim-t << ": " << cost << endl;
    }
    return 0;
}