#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    int maxCount = 1, currentSpeed;
	    scanf("%d", &currentSpeed);
	    for(int i = 1; i < n; i++)
	    {
	        int car;
	        scanf("%d", &car);
	        
	        if(car <= currentSpeed)
	        {
	            maxCount++;
	            currentSpeed = car;
	        }
	    }
	    
	    printf("%d\n", maxCount);
	}
	return 0;
}
