#include <iostream>
using namespace std;
int main() {
    int test;
    cin>>test;
    for(int itest=0 ; itest<test ; itest++){
        int n, k;
        cin>>n>>k;
        long long a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        int pow[65];
        for(int i=0 ; i<65 ; i++){
            pow[i]=0;
        }
        int flag=1;
        int count=0;
        long long num;
        for(int i=0 ; i<n ; i++){
            count=0;
            num= a[i];
            while(num>0){
                int r = num%k;
                if(r>1){
                    flag=0;
                    break;
                }
                if(r==1){
                    pow[count]+=1;
                }
                count++;
                num = num/k;
            }
        }
        for(int i=0 ; i<65 ; i++){
            if(pow[i]>1){
                flag=0;
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
