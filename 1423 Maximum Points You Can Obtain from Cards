#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int leftSum =0;
        int rightSum =0;
        int maxSum =0;
        int size = cardPoints.size();

        for(int i=0; i<k; i++){
            leftSum = leftSum + cardPoints[i];
            maxSum = leftSum;
        }

        for(int i = k -1 ; i>=0 ; i--){
            leftSum = leftSum - cardPoints[i];
            rightSum = rightSum + cardPoints[size + i -k];
            if(leftSum + rightSum > maxSum){
                maxSum = leftSum + rightSum;
            }
        }
        
        return maxSum;
    }
};