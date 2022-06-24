// Difficulty - 
// Problem Statement :-
/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321

Example 2:

Input: x = -123
Output: -321

Example 3:

Input: x = 120
Output: 21

 

Constraints:

    -231 <= x <= 231 - 1


*/

// Code:- 
class Solution {
public:
    int reverse(int x) {
        long long int res = x%10;
        x /= 10;
        
        while(x != 0)
        {
            int mod = x%10;
            res = res*10 + mod;
            
            x /= 10;
        }
        
        if(res > INT_MAX or res <=INT_MIN)
                return 0;
       
        return res;
    }
};