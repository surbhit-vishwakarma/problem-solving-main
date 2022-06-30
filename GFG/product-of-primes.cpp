// Difficulty - 
// Problem Statement :-
/*


Given two numbers L and R (inclusive) find the product of primes within this range. Print the product modulo 109+7. If there are no primes in that range you must print 1.

Example 1:

Input: L = 1, R = 10
Output: 210
Explaination: The prime numbers are 
2, 3, 5 and 7.

Example 2:

Input: L = 1, R = 20
Output: 9699690
Explaination: The primes are 2, 3, 
5, 7, 11, 13, 17 and 19.

Your Task:
You do not need to read input or print anything. Your task is to complete the function primeProduct() which takes L and R and returns the product of the primes within the range. If there are no primes in that range then return 1.

Expected Time Complexity: O((R-L)*(logR))
Expected Auxiliary Space: O(sqrt(R))

Constraints:
1 ≤ L ≤ R ≤ 109
0 ≤ L - R ≤ 106  
*/

// Code:- 
// TC - O((R-L)*sqrt(R))  SC - O(1) 
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
long long const m = 1e9+7;
class Solution{
public:
    bool prime(long long x)
    {
        if(x<=1)
            return false;
            
        for(long long i = 2 ; i*i <= x ;i++)
        {
            if(x%i==0)
                return false;
        }
        
        return true;
    }
    long long primeProduct(long long L, long long R){
        // code
        long long sum = 1;
       
        for(int i=L ; i<=R ;i++){
            if(prime(i))
                sum = (sum*i)%(m) ;
    }
        
        return sum ;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends