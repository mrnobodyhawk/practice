#include <bits/stdc++.h>
using namespace std;

bool checkAscSorted(int arr[], int n){
    if(n==0 || n==1)    
        return true;
    int i=-1;
    while(++i < n-1) {
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;

    while(n--){
        int n, k;
        cin >> n >> k;

        int i=-1, arr[n];
        while(++i < n){
            cin>>arr[i];
        }
        if(k>1 || checkAscSorted(arr, n))
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}