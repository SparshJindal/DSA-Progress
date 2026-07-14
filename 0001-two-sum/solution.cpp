class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map <int,int> numbers ;

        for ( int i = 0 ; i < nums.size() ; i++) {

        int complement = target - nums[i];

        if(numbers.count(complement) == 1) {

            return {numbers[complement], i};

        }

        numbers[nums[i]] = i ;

        }

        return{};
    }

};
