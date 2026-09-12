class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        int ans =0;
        for(auto it:mp){
            if(it.second.size()>=3){
                vector<int> v =it.second;
                int gap = v[1] -v[0];

                bool special =true;
                for(int i=2; i<v.size(); i++){
                    if(v[i]-v[i-1]!=gap){
                        special =false;
                        break;
                    }
                }
                if(special){
                    ans++;
                }
            }  
        }
        return ans;
        
    }
};