#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int mod = 1e9 +7;
        vector<int> cnt(26);
        for(char c: s){
            cnt[c - 'a']++;
        }

        for(int i=0; i<t; i++){
            vector<int> nxt(26);
            nxt[0] = cnt[25] % mod;
            nxt[1] =(cnt[25] + cnt[0]) % mod;
            for(int j=2; j<26; j++){
                nxt[j] = cnt[j-1];
            }
            cnt = move(nxt);
        }
        int ans = 0;
        for(int num : cnt){
            ans = (ans + num) % mod;
        }
        return ans;
    }
};