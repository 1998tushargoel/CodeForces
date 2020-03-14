#include<bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin>>test;
    for(int itest=0 ; itest<test ; itest++){
        int n, m;
        cin>>n>>m;
        if(n<=5){
            cout<<"NO";
        }
        else{
            if(n%m==0){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        cout<<"\n";
    }

    return 0;
}