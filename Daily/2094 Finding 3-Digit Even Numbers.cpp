#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        int A[10] = {0};
        for(int n: digits){
            A[n]++;
        }

        for(int i=100; i<999; i+=2){
            int o = i/100;
            int t = i/10 %10;
            int h = i%10;
            A[h]--;
            A[t]--;
            A[o]--;
            if(A[h] >=0 && A[t]>=0 && A[o]>=0) ans.push_back(i);
                A[h]++;
                A[t]++;
                A[o]++;
            
        }
        return ans;
    }
};