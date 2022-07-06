#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) 
   { 
        // Your code here
        int maxEle = INT_MIN;
        
        int res = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] > 0){
                res ^= arr[i];
                maxEle = max(maxEle,arr[i]);
            }
        }
        
        int xoR = maxEle%4;
        
        if(xoR == 0){
            xoR = maxEle;
        }else if(xoR == 1)
            xoR = 1;
        else if(xoR == 2)
            xoR = maxEle + 1;
        else {
            xoR = 0;
        }
        
        if((res^xoR) == 0)
            return maxEle + 1;
        else{
            return (res^xoR);
        }
   }
int main()
{
	int n ;
	cin >> n;

	int arr[n];
	for(int i =0 ; i < n ; i++)
	{
		cin >> arr[i];
	}

	cout << missingNumber(arr,n);
}