#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (num_map.find(complement) != num_map.end()) {
            return {num_map[complement], i}; //Return indices of the two numbers
        }
        
        num_map[nums[i]] = i; //Store the index of the current number
    }
    
    return {}; 
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    
    return 0;
}
