#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     
        int n = nums.size();
        int currentlength = 0;
        int maxLength = 0;

        for(int i =0; i<n;i++){
            
            if(nums[i] ==1){

                currentlength++;

            }else{
               
                currentlength =0;
            }
             maxLength = max(currentlength, maxLength);
        }
       return maxLength;
    }
};