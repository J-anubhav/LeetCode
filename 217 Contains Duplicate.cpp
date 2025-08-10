#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int size = nums.size();

        for(int i =1; i<size ; i++){

            if(  nums[i] == nums[i-1]){
                return 1;
            }
        }

        return 0;
    }
};