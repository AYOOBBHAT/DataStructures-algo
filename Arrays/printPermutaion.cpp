#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void permutation(vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans, vector<int>& freq) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!freq[i]) {
                ds.push_back(nums[i]);
                freq[i] = 1;
                permutation(nums, ds, ans, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

public:
    void nextPermutation(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(), 0);
        permutation(nums, ds, ans, freq);

        // Printing all permutations
        for (const auto& perm : ans) {
            for (int num : perm) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution sol;
    int p;
    cout << "Enter the number of elements in the array: ";
    cin >> p;

    vector<int> nums(p);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < p; i++) {
        cin >> nums[i];
    }

    sol.nextPermutation(nums);

    return 0;
}
