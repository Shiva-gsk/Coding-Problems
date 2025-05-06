#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    string a;
    string b;
    int len;
    for(int i=0; i<n; i++){
        cin >>len;

        cin >>a;
        cin >>b;
        int flag_a=1;
        int flag_b=1;
        int flaga[len] ={0};
        int flagb[len]= {0};
        for(int i=0; i<len; i++){
            if(a[i] != '0'){
                if(i==0){
                    flag_a = 0;
                    flaga[i] = 1;
                    //cout <<i <<endl;
                }
                if((i>0 && b[i-1] != '0')){
                    flaga[i] = 1;
                    flag_a = 0;
                    //cout <<i <<endl;
                }
            }
            if(b[i] != '0'){
                if(i==0){
                    flag_b = 0;
                    // if(i>0)
                    // flagb[i-1] = 1;
                    //cout <<i <<endl;
                }
                if((i>0 && a[i-1] != '0')){
                    flagb[i-1] = 1;
                    flag_b = 0;
                    //cout <<i <<endl;
                }
            }
            
            

        }
        int f=1;
        for(int i=0; i<len; i++){
            if(flaga[i] && flagb[i]){
                cout << "NO" <<endl;
                f=0;
                break;
            }
        }
        if(f)
        cout << "YES" <<endl;
        // if(flag_a || flag_b){
        //     cout << "YES" <<endl;
        // }
        // else{
        //     cout << "NO" <<endl;
        // }
    }
}