#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int zeroes1 = 0;
        int zeroes2 = 0;
        long sum1 =0;
        long sum2 =0;
        for(long num : nums1){
            if(num == 0){
                zeroes1++;
            }
            sum1 += num;
        }

        for(long num : nums2){
            if(num ==0){
                zeroes2++;
            }
            sum2 += num;
        }
        sum1 += zeroes1;
        sum2 += zeroes2;
        if(sum1 == sum2) return sum1;
        if(zeroes1 == 0 && zeroes2 == 0){
            return (sum1 == sum2)? sum1: -1;
        }
        
        else if(zeroes1 == 0){
            return (sum1 > sum2) ? sum1 : -1;  
        }
        else if(zeroes2 == 0){
            return (sum2 > sum1) ? sum2 : -1;  
        }
        else{
            
            return max(sum1, sum2);
        }
    }
};