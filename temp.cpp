#include<bits/stdc++.h>
using namespace std;

void spaceArray(vector<int> arr, int n, int player){
    for(int k=0; k<n; k++){
        vector<int> newArr = arr; 
        newArr[k]++;
        sort(newArr.begin(), newArr.end());
        do{
            //cout<<newArr[0]<<newArr[1]<<newArr[2]<<newArr[3]<<endl;
            bool isCharMatch = true;
            for(int i=0; i<n; i++){
                if(arr[i]>newArr[i]){
                    //cout<<arr[i]<<" "<<newArr[i]<<endl;
                    isCharMatch = false;
                }
            }
            if(isCharMatch){
                //cout<<"CharMatch";
                spaceArray(newArr, n, player+1);
                return;
            }
        } while(next_permutation(newArr.begin(), newArr.end()));
    }

    if(player%2==0){
        cout<<"Second"<<endl;
        return;
    } else{
        cout<<"First";
        return;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            arr.push_back(x);
        }
        spaceArray(arr, n, 0);
    }
    return 0;
}