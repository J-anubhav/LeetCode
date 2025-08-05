#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:

     int countPrimes(int n){

        if(n == 0) return n;
     
        vector<bool> prime(n,true);
        prime[0]=prime[1] = false;

        int count =0;
        
        for(int i=2; i<n ; i++){

          if(prime[i]){

            count++;

            for(int j =i; j< n ; j=j+i){
                prime[j]= false;
            }
          }
        }
        
        return count;
        
    }
};