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
        int sum =0;
        int cost1=0;

        int sub[k];
        int index=0;
        for(int i=start; i<=end; i++){
            sub[index] = arr[i];
            index++;
        }
        sort(sub, sub+k);
        // float mean = (float)sum/k;
        // int mn = round(mean);
        int mn = sub[k/2];
        for(int i=start; i<=end; i++){
            if(arr[i] > mn){
                cost1 += arr[i]-mn;
            }
            else{
                cost1 += mn-arr[i];
            }
        }
        int mn2 = sub[k/2 +1];
        int cost2=0;
        for(int i=start; i<=end; i++){
            if(arr[i] > mn2){
                cost2 += arr[i]-mn2;
            }
            else{
                cost2 += mn2-arr[i];
            }
        }
        int cost = min(cost1, cost2);
        cout <<cost <<" ";
        start++;
        end++;

    }
    cout <<endl;


    
}