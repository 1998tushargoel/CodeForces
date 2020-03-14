#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int it=0 ; it<t ; it++){
        int n;
        cin>>n;
        int ar[n];
        int count[n], find[n], lind[n]; 
        for(int i=0 ; i<n ; i++){
            cin>>ar[i];
            count[i]=0;
            find[i]=-1;
            lind[i]=-1;
        }
        int index;
        for(int i=0 ; i<n ; i++){
            index = ar[i]-1;
            count[index]+=1;
            if(count[index]==1){
                find[index]=i;
            }
            else if(count[index]>1){
                lind[index]=i;
            }
        }
        int flag=0;
        for(int i=0 ; i<n ; i++){
            // cout<<i+1<<" "<<count[i]<<" "<<find[i]<<" "<<lind[i]<<"\n";
            if(count[i]>1){
                if(abs(lind[i]-find[i])>1){
                    flag=1;
                }
            }
        }
        if(flag==1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
    }
    return 0;
}