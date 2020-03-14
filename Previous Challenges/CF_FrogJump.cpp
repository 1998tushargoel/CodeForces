#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int it=0 ; it<t ; it++){
        string s;
        cin>>s;
        int countl=0, countr=0, maxl=0;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='L'){
                countl++;
            }
            else{                
                countl=0;
            }
            if(maxl<countl){
                    maxl = countl;
                }
        }
        cout<<maxl+1<<"\n";
    }
    return 0;
}