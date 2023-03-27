#include <iostream> 
#include <vector> 

using namespace std;

class Solution {
  public: 
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> sol;
      for(auto i = 0; i < nums.size(); i++){
        for(auto j = 0; j < nums.size(); j++) {
          if(nums[i] + nums[j] == target) {
            sol.push_back(i);
            sol.push_back(j);
          }  
        }
      }
      return sol;
    }
}
