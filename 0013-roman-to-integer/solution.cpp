class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char , int> roman = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        int answer=0;
        for ( int i = s.length() - 1 ; i >=0 ; i-- ) {

            if (i < s.length() - 1 && roman[s[i]]<roman[s[i+1]]) {
                answer = answer - roman[s[i]];
            }
            else {
                answer = answer + roman[s[i]];
            }
        } 
        return answer;
    }
};
