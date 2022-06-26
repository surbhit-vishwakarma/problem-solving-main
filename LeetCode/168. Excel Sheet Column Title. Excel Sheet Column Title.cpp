// Difficulty - Easy
// Problem Statement :-
/*

Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...

 

Example 1:

Input: columnNumber = 1
Output: "A"

Example 2:

Input: columnNumber = 28
Output: "AB"

Example 3:

Input: columnNumber = 701
Output: "ZY"

 

Constraints:

    1 <= columnNumber <= 231 - 1

*/
// TC - O(LogN) SC - O(1)
// Code:- 
class Solution {
public:
    string convertToTitle(int x) {
        unordered_map<int,char> mp;        
        string res = "";
        x -= 1;
        
        if(x>=26){
            while(x>0)
            {   
                res += ('A' + (x%26));
                x /= 26; 
                x-=1;
            }
        }else
        {   
            res += ('A'+ x);
            return res;
        }
        
        if(x==0)
        res += ('A'+x);
        
        reverse(res.begin(),res.end());
        return res;
    }
};