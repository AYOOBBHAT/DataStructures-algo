//leetcode 2149

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans(n,0);
        int positiveIdx=0;
        int negativeIdx=1;
        for(int i=0;i<n;i++){
            if (nums[i]<0){
                ans[negativeIdx]=nums[i];
                negativeIdx+=2;

            }


             else {
                ans[positiveIdx]=nums[i];

                positiveIdx+=2;

            }
        }

        return ans;

    }
};

//soloutio 2



class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int>positive,negative,ans;
        int i=0;
        int j=0;

        for(int num:nums){
            if(num>0){
                positive.push_back(num);

            }
            if (num<0){
                negative.push_back(num);

            }
        }

        while (i<positive.size() && j<negative.size()){
            ans.push_back(positive[i++]);
            ans.push_back(negative[j++]);
        }

        return ans;

        
    }
};