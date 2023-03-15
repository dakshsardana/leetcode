class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0) return false;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
           if(mp.count(nums[i])){ 
               if(i-mp[nums[i]] <= k) return true;
           }
            mp[nums[i]]=i;
        }
        return false;
    }
};