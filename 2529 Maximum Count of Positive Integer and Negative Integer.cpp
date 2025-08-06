#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int size= nums.size();
        int pos =0;
        int neg =0;
        for(int i =0; i<size; i++){
           
           if(nums[i]<0){
                neg++;
            }else if(nums[i]>0){
                pos++;
            }
            
             
        }
        int ans = max(pos,neg);
        return ans;
    }
};