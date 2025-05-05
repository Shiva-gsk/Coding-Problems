#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin >>k;
    int n,m,l,r; 
    int l1, r1;
    for(int i=0; i<k; i++){
        cin >> n;
        cin >> m;
        cin >> l;
        cin >>r;
        if(m == n){
            //cout << "Here";
            cout << l <<" " <<r <<endl;
            
        }else{
            //cout << r <<" "<<n;
            if(r>m){
                l1=0;
                r1=m; 
                m=0;
                //cout << "Here";
            }
            else{
                //cout << "Here2";
                r1 = r;
                m-=r;
            }
    
            l1=-m;
    
            cout << l1 << " " <<r1 <<endl;

        }
        
    }
}