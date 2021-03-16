#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }

    int min = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            vector<int> vec;
            for(int k =i; k<=j; k++){
                vec.push_back(arr[k]);
            }
            int tempMin = *min_element(vec.begin(), vec.end());
            min +=tempMin;
        }
    }
    cout<<min<<endl;
}