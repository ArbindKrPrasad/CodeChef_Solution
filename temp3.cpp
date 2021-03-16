#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<bool> vec(n, false);
    int x;
    bool flag = true;

    while(cin>>x){
        vec[n-1] = true;
    }

    for(int i=0; i<vec.size(); i++){
        if(vec[i]==false){
            flag = false;
        }
    }
    
    if(flag){
        cout<<"yes";
    } else {
        cout<<"no";
    }
}