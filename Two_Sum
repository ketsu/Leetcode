/*
Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, 
where index1 must be less than index2. 

Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
*/

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    int len = numbers.size();
    map<int, int> mp;
  	vector<int> result;
		//construct hashmap
		for (int i = 0; i < len; i++){
			mp[numbers[i]] = i;
		}
		//find the two indices
		for (int i = 0; i < len; i++){
			if (mp.find(target - numbers[i])!=mp.end()){
				int j = mp[target - numbers[i]];
				if(i>j) {
					result.push_back(j+1);
					result.push_back(i+1);
				} else {
					result.push_back(i+1);
					result.push_back(j+1);
				}
				return result;
			}
		}

    }
};
