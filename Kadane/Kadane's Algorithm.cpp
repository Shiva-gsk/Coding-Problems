#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        static void kadaneAlgo(vector<int> nums){
            int start =0;
            int end =0;
            int temp_start=0;
            int curr_sum =nums[0];
            int max_sum=nums[0];
            for(int i=0; i<nums.size(); i++){
                if(nums[i]> curr_sum + nums[i]){
                    curr_sum = nums[i];
                    temp_start = i;
                }
                else{
                    curr_sum += nums[i];
                }

                if(curr_sum > max_sum){
                    max_sum = curr_sum;
                    start = temp_start;
                    end = i;
                }
            }
        }
};

int main(){

}