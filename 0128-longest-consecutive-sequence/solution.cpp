class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    sort (nums.begin() , nums.end());
    int Maxcount = 1 ;
    int count = 1 ;
    if (nums.size() == 0) return 0;
    for (int i = 1 ; i < nums.size() ; i++) {

        if(nums[i-1]==nums[i]){
            continue;
        }
        else if (nums[i-1] + 1 == nums[i] ) {
        count++;
        }
        else{
            Maxcount = max(Maxcount, count);
            count = 1 ;
        }
    } 
    return max(count , Maxcount) ;   
    }
};
