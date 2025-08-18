#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int left =0;
        int right =0;
        int len =0;
        int maxlength =0;
        int zeros =0; 

        while(right<nums.size()){
            if(nums[right]== 0){
                zeros++;
            }
            while(zeros>k){
                if (nums[left] == 0) {
                    zeros--;
                }
                left++;
            }
            maxlength = max(maxlength, right - left + 1);
            right++;
        
        }
        return maxlength;
    }
};