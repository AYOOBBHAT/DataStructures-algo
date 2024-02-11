class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> v;
        stack<int> st;
        
        for (int i = 2 * n - 1; i > 0; i--)
        {

            while (!st.empty() && st.top() <= nums[i % n])
            {
                st.pop();
            }
            if (!st.empty() && (i < n))
            {

                v[i] = st.top();
            }
            else
            {
                v[i] = -1;
            }

            st.push(v[i % n]);
        }
    }

    return v;
}

;