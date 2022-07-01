// Difficulty - Medium
// Problem Statement :-
/*
You have given a list of q queries and for every query, you are given an integer N.  The task is to find how many numbers(less than or equal to N) have number of divisors exactly equal to 3.

Example 1:

Input:
q = 1
query[0] = 6
Output:
1
Explanation:
There is only one number 4 which has
exactly three divisors 1, 2 and 4 and
less than equal to 6.

Example 2:

Input:
q = 2
query[0] = 6
query[1] = 10
Output:
1
2
Explanation:
For query 1 it is covered in the
example 1.
query 2: There are two numbers 4 and 9
having exactly 3 divisors and less than
equal to 10.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function threeDivisors() which takes an integer q and a list of integer of size q as input parameter and returns the list containing the count of the numbers having exactly 3 divisors for each query.

Expected Time Complexity: O(NlogN), 
Expected Auxiliary Space: O(N), where N is min(10^6,N)

Constraints :
1 <= q <= 103
1 <= query[i] <= 1012
*/

// TC - O(NlogN) SC - O(N)
// Code:- 
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<int> res;
        long long int max_ele = INT_MIN;
        for(long long int i = 0 ; i < query.size() ; i++)
        {
            max_ele = max(query[i],max_ele);
        }
        
        vector<long long int> sieve(1000001,1); 
        vector<long long int> threeDivisors(1000001,0);
        
        
        sieve[0] = 0 , sieve[1] = 0;
        
        int k = 1;
        for(long long int i = 2 ; i*i <= max_ele ; i++)
        {   
            
        if(sieve[i])
            {   
                threeDivisors[i] = k;
                k++;
                for(long long int j = i*2 ; j*j <= max_ele ; j = j+i )
                {
                    sieve[j] = 0;
                }
            }else{
                threeDivisors[i] = k-1;
            }
        }
        
        for(int i = 0 ; i < query.size() ;i++)
        {
            long long int num = threeDivisors[int(sqrt(query[i]))];
            
            res.push_back(num);
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}  // } Driver Code Ends