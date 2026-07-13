class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> temp = arr ;
        sort (temp.begin() , temp.end());

        unordered_map<int , int> ranks ;
        int currentRank = 1 ; 

        for ( int i = 0 ; i < temp.size() ; i++) {

            if (ranks.find(temp[i]) == ranks.end()) {
                ranks[temp[i]] = currentRank ;
                currentRank++;
            }
        }

        vector<int> answer(arr.size());
        for (int j=0 ; j < arr.size() ; j++ ) {
            answer[j] = ranks[arr[j]] ;
        }
    return answer;
    }
};
