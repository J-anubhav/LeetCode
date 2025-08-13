#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    bool isvalid(string s, int left, int right){
        int arr[256] = {0};
        for(int j=left; j <=right; j++){
            arr[s[j]]++;
        }
        for(int j =0; j< 256; j++){
            if(arr[j]>1){
                return false;
            }
            
        }
        return true;
    }

    int lengthOfLongestSubstring(string s) {
       int right =0;
       int left =0;
       int max_length = 0;
       int current_length =0;

       while(left < s.size() && right < s.size()){
        if(isvalid(s, left, right)){
            right++;
            current_length++; //1
        }else{
            left++;
            current_length = right - left;
        }
        if(current_length > max_length){
            max_length = current_length; //1
        }
       }
         return max_length;
       }
};