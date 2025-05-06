#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int len;
    cin>>len;
    int k;
    cin >>k;
    int arr[len];
    for(int j=0; j<len; j++){
        cin >>arr[j];
    }
    int start =0;
    int end = k-1;
    while(end<len){
        // int sum =0;
        // int cost1=0;

        int sub[k];
        int index=0;
        for(int i=start; i<=end; i++){
            sub[index] = arr[i];
            index++;
            // sum+=arr[i];
        }
        sort(sub, sub+k);
        int mn = sub[k / 2];
        int cost = 0;
        for (int i = start; i <= end; i++) {
            cost += abs(arr[i] - mn);
        }
        cout << cost << " ";

        start++;
        end++;

    }
    cout <<endl;
}