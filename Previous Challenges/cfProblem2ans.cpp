#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    long k;
    cin>>n>>m>>k;
    int an[n], am[m];
    for(int i=0 ; i<n ; i++){
        cin>>an[i];
    }
    for(int i=0 ; i<m ; i++){
        cin>>am[i];
    }
    vector<int> len, bre;
    vector<int> peri;
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(an[i]==1){
            count++;
        }
        else{
            if(count>0){
                len.push_back(2*count);
                cout<<count<<" ";
            }
            count=0;
        }
        if(i==n-1 && count>0){
            len.push_back(2*count);
            // cout<<count<<" ";
        }
    }
    // cout<<"\n";
    count=0;
    for(int i=0 ; i<m ; i++){
        if(am[i]==1){
            count++;
        }
        else{
            if(count>0){
                bre.push_back(2*count);
                cout<<count<<" ";
            }
            count=0;
        }
        if(i==m-1 && count>0){
            bre.push_back(2*count);
            // cout<<count<<" ";
        }
    }
    // cout<<"\n";
    int p;
    for(int i=1 ; i*i<=k ; i++){
        if(k%i==0){
            p = 2*i + 2*(k/i);
            peri.push_back(p);
            // cout<<p<<" ";
        }
    }
    // cout<<"\n";
    vector<int> allPeri;
    for(int i=0 ; i<len.size() ; i++){
        for(int j=0 ; j<bre.size() ; j++){
            allPeri.push_back(len[i]+bre[j]);
            // cout<<len[i]+bre[j]<<" ";
        }
    }
    // cout<<"\n";
    long long ans=0;
    for(int i=0 ; i < allPeri.size() ; i++){
        for(int j=0 ; j<peri.size(); j++){
            if(allPeri[i]-peri[j]>0){
                ans += allPeri[i] - peri[j];
            }
        }
    }
    cout<<ans;
    return 0;
}