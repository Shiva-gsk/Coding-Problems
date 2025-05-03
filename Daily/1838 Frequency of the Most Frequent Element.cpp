#include <iostream>
// #include <math>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        static int maxFrequency(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());
            int left =0 ; long total =nums[0]; int maxFrequency =1; 
            for(int right =1; right < nums.size(); right++){
                total += nums[right];
            
                while((long)(right -left +1)*nums[right] - total > k){
                    total -= nums[left];
                    left++;
                }
                // if((right - left +1)> maxFrequency){
                //     maxFrequency = (right - left +1);
                // }
                maxFrequency=(max(maxFrequency, (right - left +1)));
            }
            return maxFrequency;
        }
};

int main(){
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    vector<int> arr;
    for(int i=0; i<n; i++){
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    int k;
    cout << "Enter value of k: ";
    cin >> k;

    int maxFreq= Solution::maxFrequency(arr, k);
    cout << maxFreq <<endl;
}
    

