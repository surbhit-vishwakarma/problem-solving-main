// Difficulty - Easy
// Problem Statement :-
/*
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

    Starting with any positive integer, replace the number by the sum of the squares of its digits.
    Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
    Those numbers for which this process ends in 1 are happy.

Return true if n is a happy number, and false if not.

 

Example 1:

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

Example 2:

Input: n = 2
Output: false

 

Constraints:

    1 <= n <= 231 - 1


*/

// Code:-

class Solution {
public:
    int powerS(int x)
    {   
        int res = 0 , num = 0;
        while(x>0)
        {
            num = x%10;
            num *= num;
            res += num;
            x /= 10;
        }
        
        return res;
    }
    
    bool isHappy(int n) {
        unordered_set<int> mp;
        while(true){
            n = powerS(n);
            
            if(n == 1)
                return true;
       
            if(mp.find(n) != mp.end())
                return false;
        
            mp.insert(n);
        }
    }
    
};