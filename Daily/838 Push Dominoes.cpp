#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        static string pushDominoes(string s){
            int n = s.length();
            vector<int> l(n, 0), r(n, 0);
            int count =0;
            int i=0;
            while(i<n){
                if(s[i] == 'R'){
                    count =1;
                    i++;
                }
                else if(s[i] == 'L'){
                    count =0;
                    i++;
                    
                }
                else{
                    if(count >0)
                    r[i] = count++;
                    i++;
                }
            }
            i=n-1;
            count =0;
            while(i>=0){
                if(s[i] == 'L'){
                    count =1;
                    i--;
                }
                else if(s[i] == 'R'){
                    count =0;
                    i--;
                }
                else{
                    if(count >0)
                    l[i] = count++;
                    i--;
                }
            }
            string ans = "";
        for(int i=0; i<n; i++){
            if(!l[i] && !r[i]) ans += s[i];
            else if(!l[i]) ans += 'R';
            else if(!r[i]) ans += 'L';
            else if(l[i] == r[i]) ans += '.';
            else if(l[i] > r[i]) ans += 'R';
            else ans += 'L';
        }
        // cout <<ans;
        return ans;
        }
};

int main(){
    string s;
    cout<< "Enter the string: ";
    cin>>s;

    Solution::pushDominoes(s);
}