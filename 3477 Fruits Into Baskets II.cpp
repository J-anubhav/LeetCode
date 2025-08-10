#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        
        int lengthOfFruits= fruits.size();
        int lenghtOfBaskets = baskets.size();

        int count=0;

        for(int i =0; i<lengthOfFruits ; i++){

            for(int j =0; j<lenghtOfBaskets ; j++){

                if(baskets[j]<0){
                    continue;
                }
                if(baskets[j]>=fruits[i]){
                    count++;
                    baskets[j] = -(baskets[j]);
                    break;
                }
                
            }
        }
        int ans = lengthOfFruits - count;
        return ans;
    }
};