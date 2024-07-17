class Solution {


    private:
    bool binary_search(vector<int>&matrix,int target){
        int low=0;
        int high =matrix.size()-1;

        while (low<=high){
            int mid=(high+low)/2;

            if(matrix[mid]==target)return true;
            else if (matrix[mid]<target)low=mid+1;
            else high=mid-1;

        }
        return false;

    }

   public:


    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n=matrix.size();
        for(int i=0;i<n;i++){
            bool flag= binary_search(matrix[i],target);
            if (flag)return true;
        }
        return false;
        

    }
};