class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int maxCount=1;
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){

            if (nums[i]!=nums[i-1]){

                if(nums[i]==nums[i-1]+1){
                    count++;
                }
                else {
                    maxCount=max(maxCount,count);
                    count=1;

                }
            }
        }
        return max( maxCount,count);
        
    }
};

// method 2;
