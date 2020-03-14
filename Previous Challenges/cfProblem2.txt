#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    for(int itest=0 ; itest<test ; itest++){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0 ;i<n ; i++){
            cin>>ar[i];
        }
        if(n==1){
            if(ar[0]&1){
                cout<<"-1";
            }
            else{
                cout<<ar[0]<<"\n1";
            }
        }
        else if(n>1){
            if(ar[0]%2==0){
                cout<<"1\n1";
            }
            else if(ar[1]%2==0){
                cout<<"1\n2";
            }
            else{
                cout<<"2\n1 2";
            }
        }
        cout<<"\n";
    }
    return 0;
}