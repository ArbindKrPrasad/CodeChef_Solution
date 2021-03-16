#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int noOfGroup = 0;
        bool isGroup = false;
        string str; cin>>str;
        for(int i=0; i<str.length(); i++){
            char ch = str[i];
            if(ch=='0'&& isGroup){
                isGroup = false;
            }
            if(ch=='1'&&isGroup==false){
                isGroup = true;
                noOfGroup++;
            }
        }
        cout<<noOfGroup<<endl;
    }
}