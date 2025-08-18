#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     
        int l =0;
        int r=0;
        int  maxLength =0;
        int len =0;
        int n = nums.size();

        while(r<n){
            if(nums[r] == 1){
                len = r-l+1;
                r++;
            }else{
                l=r+1;
                r++;
            }
            maxLength = max(maxLength,len);

        }
        return maxLength;
    }
};