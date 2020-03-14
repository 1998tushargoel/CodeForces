#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    for(int i=0 ; i<test ; i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0 ; j<n ; j++){
            cin>>a[j];
        }
        sort(a, a+n);
        for(int j=n-1 ; j>=0 ; j--){
            cout<<a[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}