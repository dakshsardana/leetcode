class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1;
        int end = -1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                start= i;
                break;
            }
        }
        for(int j=nums.size()-1;j>=0;j--){
            if (nums[j]==target){
                end =j;
                break;
            }    
        }
        return{start,end};       
    }
};
