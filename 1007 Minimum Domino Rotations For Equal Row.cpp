#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
            int A[7] = {0};
            int B[7] = {0};
            int same[7] ={0};
            int n= tops.size();
            for(int i=0; i<n; i++){
                A[tops[i]]++;
                B[bottoms[i]]++;
                if(tops[i] ==bottoms[i]){
                    same[tops[i]]++;
                }
            }
            int minSwaps =INT_MAX;
            for(int i=1; i<=6; i++){
                if(A[i] + B[i] - same[i] == n){
                    minSwaps = min(minSwaps, (min(A[i], B[i]) - same[i]));
                }
            }
            if(minSwaps == INT_MAX) return -1;
            return minSwaps;
        }
    };