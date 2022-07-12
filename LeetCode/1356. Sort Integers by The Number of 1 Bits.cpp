class Solution {
public:
    void lookUpTable(vector<int> &res)
    {
        for(int i = 0 ; i < res.size() ; i++)
        {
            res[i] = (i & 1) + res[(i/2)];
        }
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n = *max_element(arr.begin(),arr.end());
        vector<int> res(n+1,0);
        
        lookUpTable(res);
        
        map<int,vector<int> > mp;
        
        for(int i = 0 ; i < arr.size() ;i++)
        {
            mp[res[arr[i]]].push_back(arr[i]);
        }
        
        vector<int> sol ;
        for(auto x : mp)
        {
            vector<int> a = x.second;
            sort(a.begin(),a.end());
            for(auto m : a)
            {
                sol.push_back(m);
            }
        }
        
        return sol;
    }
};