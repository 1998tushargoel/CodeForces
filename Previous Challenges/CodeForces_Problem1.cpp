#include<bits/stdc++.h>

using namespace std;

int main(){

    int test;
    cin>>test;
    for(int itest=0 ; itest< test ; itest++){
        int n; 
        long m, sum=0;
        cin>>n>>m;
        long ar[n];
        for(int i=0 ; i<n ; i++){
            cin>>ar[i];
            sum = sum + ar[i];
        }
        cout<<min(m, sum);
        cout<<"\n";
    }
    return 0;
}