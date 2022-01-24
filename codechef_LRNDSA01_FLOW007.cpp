#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int rev = 0;
        while(n > 0)
        {
            int temp = n % 10;
            rev = temp + (rev * 10);
            n = n / 10;
        }
        cout << rev << endl;
    }
    return 0;
}
