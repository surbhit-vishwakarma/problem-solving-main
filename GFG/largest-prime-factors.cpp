// Difficulty - 
// Problem Statement :-
/*
Given a number N, the task is to find the largest prime factor of that number.
 

Example 1:

Input:
N = 5
Output:
5
Explanation:
5 has 1 prime factor 
i.e 5 only.

Example 2:

Input:
N = 24
Output:
3
Explanation:
24 has 2 prime factors 
3 and 2 in which 3 is 
greater


Your Task:
You don't need to read input or print anything. Your task is to complete the function largestPrimeFactor() which takes an integer N as input parameters and returns an integer, largest prime factor of N.
 

Expected Time Complexity: O(sqrt(N))
Expected Space Complexity: O(1)
*/

// Code:- 
// TC - O(N) SC - O(1)
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    bool isPrime(int n)
    {
        if(n<=1)
            return false;
        
        for(int i = 2 ; i*i <= n ; i++)
        {
            if(n%i==0)
                return false;
        }
        
        return true;
    }
    long long int largestPrimeFactor(int n){
        long long int sum = 0;
        if(isPrime(n)|| n == 1)
            return n;
        else{
            long long int i = 2;
            while(n!=1)
            {   
                if(isPrime(i))
                {   
                    sum = max(sum,i);
                    while(n%i==0)
                    {
                        n /= i;
                    }
                    
                    if(isPrime(n))
                        return n;
                }
                i++;
            }
            return sum;
        }
        
        return sum;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends