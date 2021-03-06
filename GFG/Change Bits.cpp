// Difficulty - Easy
// Problem Statement :-
/*
Given a number N, complete the following tasks,
Task 1. Generate a new number from N by changing the zeroes in the binary representation of N to 1.
Task  2. Find the difference between N and the newly generated number.

 

Example 1:

Input: N = 8 
Output: 7 15
Explanation:
There are 3 zeroes in binary representation
of 8. Changing them to 1 will give 15.
Difference between these two is 7.


Example 2:

Input: N = 6 
Output: 1 7
Explanation:
There is 1 zero in binary representation
of 6. Changing it to 1 will give 7.
Difference between these two is 1.

 

Your Task:
You don't need to read input or print anything. Your task is to complete the function changeBits() which takes an integer N as input parameter and returns a list of two integers containing the difference and the generated number respectively.

 

Expected Time Complexity: O(log(N))
Expected Auxiliary Space: O(1)

 

Constraints:
0 <= N <= 108
*/
// TC - O(logN) SC - O(1) 
// Code:- 
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int n) {
        
        int res = n , i = 0 , N = n;
        
        while(N)
        {
            if(N%2==0)
            {
                res += pow(2,i);
            }
            
            i++;
            
            N >>= 1;
        }
        
        return {res-n,res};
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends