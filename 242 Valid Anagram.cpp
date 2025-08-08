#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        int ans[123] = {0};
        int point =0;
        for(int i=0; i <s.length(); i++){
            point = (int)s[i];
            ans[point]++;

        }
        point =0;
        for(int i=0; i <t.length(); i++){
            point = (int)t[i];
            ans[point]--;

        }
        int count =0;
        for(int i =0; i< 123; i++){
            if(ans[i] == 0){
                count++;
            }
        }
        if(count == 123){
            return true;
        }
        return false;
    }
};