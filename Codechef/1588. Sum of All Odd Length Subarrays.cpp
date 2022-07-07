// TC - O()
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        if(arr.size() == 1)
            return arr[0];
        
        if(arr.size() == 2)
            return arr[0] + arr[1];
        
        if(arr.size() == 3)
            return 2*(arr[0] + arr[1]+arr[2]);
        
        int sizE = arr.size() ;
        int prefixSum[sizE];
        
        prefixSum[0] = arr[0];
        for(int i = 1 ; i < arr.size() ;i++)
        {
            prefixSum[i] = arr[i] + prefixSum[i-1];
        }
        
        // for(auto x : prefixSum)
        // {
        //     cout << x  << " ";
        // }
        int sum = prefixSum[sizE - 1];
        
        //cout << sum ;
        int i = 2 , k = -1;
        while(i<sizE)
        {   
            int j = i;
            k = -1;
            while(j <arr.size())
            {
                if(k != -1)
                {   
                    // cout << sum << " ";
                    sum += (prefixSum[j] - prefixSum[k]);
                    
                }else{
                    // cout << sum << " YES ";
                    sum += prefixSum[j];
                }
                
                j++;
                k++;
            }
            
            i+= 2;
        }
        
        return sum;
    }
};