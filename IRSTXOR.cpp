//Partially Working

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int c; cin>>c;
        int d = log2(c)-1;
        while(pow(2, d)<=c){
            d++;
        }

        int p = pow(2, d);
        p = (p/2)-1;
        //cout<<d<<" "<<p<<" "<<(c^p)<<endl;
        cout<<p*(c^p)<<endl;
    }
}