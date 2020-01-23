/*
Input: nums = [1,2,3,4]
Output: [2,4,4,4]
Explanation: The first pair [1,2] means we have freq = 1 and val = 2 so we generate the array [2].
The second pair [3,4] means we have freq = 3 and val = 4 so we generate [4,4,4].
At the end the concatenation [2] + [4,4,4,4] is [2,4,4,4].
*/




class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int counter = 0;
        int multiplier;
        int value;
        vector<int> result;
    
        for (int i: nums) {
            if(counter % 2 == 0) {
                multiplier = i;
            } else {
                value = i;
                for(int j = 0; j < multiplier; j++) {
                    result.push_back(value);       
                }
            }
            counter++;
        }
    return result;
    }
    
};
