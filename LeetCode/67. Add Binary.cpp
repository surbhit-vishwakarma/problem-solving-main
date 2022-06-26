// Difficulty - Easy
// Problem Statement :-
/*
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"

Example 2:

Input: a = "1010", b = "1011"
Output: "10101"

 

Constraints:

    1 <= a.length, b.length <= 104
    a and b consist only of '0' or '1' characters.
    Each string does not contain leading zeros except for the zero itself.


*/
// TC - O(a+b) SC - O(1)
// Code:- 
class Solution {
public:
    string addBinary(string a, string b) {
        char carry = '0';
        int m = a.length()-1 , n = b.length()-1 ;
        
        string res = "";
        while(m >= 0 and n>= 0)
        {
            if(a[m]=='1' and b[n] == '0' or a[m]=='0' and b[n] == '1')
            {
                if(carry=='0')
                {
                    res += '1';
                }else{
                    res += '0';
                }
            }
            else if(a[m]=='0' and b[n] == '0')
            {
                if(carry=='1')
                {
                    res += '1';
                    carry = '0';
                }else{
                    res +='0';
                }
            }else
            {
                if(carry=='0')
                {
                    res += '0';
                    carry ='1';
                }else
                {
                    res += '1';
                }
            }
            //cout << res << " ";
            m--;n--;
        }
        
        while(m>=0)
        {
            if(a[m]=='1')
            {
                if(carry=='0')
                    res += '1';
                else
                {
                    res += '0';
                }
            }else
            {
                if(carry=='0')
                    res += '0';
                else{
                    carry = '0';
                    res += '1';
                }
            }
            m--;
        }
        
        while(n>=0)
        {
            if(b[n]=='1')
            {
                if(carry=='0')
                    res += '1';
                else
                {
                    res += '0';
                }
            }else
            {
                if(carry=='0')
                    res += '0';
                else{
                    carry = '0';
                    res += '1';
                }
            }
            n--;
        }
        
        if(carry=='1')
        {
            res += '1';
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};