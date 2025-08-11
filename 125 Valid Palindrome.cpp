#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<char> validString(string s){
        vector<char> ans;
        for(int i =0; i<s.size(); i++){

        if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
           ans.push_back(s[i]);
        }
        }
        return ans;
    }
    string isLowerCase(string s){
        for(int i=0;i <s.size(); i++){
            if(s[i]>='A' && s[i] <= 'Z'){
                s[i] = s[i]-'A'+'a';

            }
            
        }
        
        
        return s;
    }
    bool isPalindrome(string s) {
        
      

        string a = isLowerCase(s);
        

        vector<char> valid =validString(a);
        
        int start=0;
        int end = valid.size()-1;
        
       while(start<end){
        if(valid[start] == valid[end]){
            end--;
            start++;
        }else{
            return false;
        }
       }
        
        return true;
    }
};