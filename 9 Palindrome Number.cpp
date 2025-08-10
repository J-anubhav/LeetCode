#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

if(x<0){
    return false;
}
        string y =to_string(x);
        int i =0;
        int j = y.length()-1;
        while(i<j){
            if(y[i] == y[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
  
      return true;
    }
};