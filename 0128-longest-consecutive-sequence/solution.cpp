class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> counting ;
        int count = 1;
        int n = nums.size();
        if (nums.empty()){
            return 0 ;
        }
        for (int i = 0 ; i < n-1 ; i++) {

            if ( nums[i] == nums[i+1] - 1) {
                count++;
            }

            else if (nums[i]==nums[i+1]) {
                continue;
            }

            else {

                counting.push_back(count);
                count = 1;

            }
        }
        counting.push_back(count);
        int answer = *max_element(counting.begin(), counting.end());
        return answer;

    }
};
