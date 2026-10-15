class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> fwd;

        int prev = 1;
        for(int i =0; i < nums.size(); i++)
        {
            fwd.push_back(prev);
            prev *= nums[i];
        }

        prev = 1;
    
        for(int i = nums.size()-1; i >= 0; i--)
        {
            fwd[i] = prev * fwd[i];
            prev *= nums[i];
        }

        return fwd;
    }
};
