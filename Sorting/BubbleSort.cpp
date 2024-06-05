#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n] = {0};
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=n-1; i>0; i--){
        int didSwap = 0; // Optimization
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap==0) break;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}