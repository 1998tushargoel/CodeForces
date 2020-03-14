#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n, open=0, close=0;
    cin>>n;
    char ch[n];
    for(long int i=0 ; i<n ; i++){
        cin>>ch[i];
        if(ch[i]=='('){
            open++;
        }
        else{
            close++;
        }
    }
    stack<char> s;
    long int ans;
    if(open!=close){
        ans = -1;
    }
    else{
        long int cl=0, op=0;
        s.push(ch[0]);
        if(ch[0]==')'){
            cl++;
        }
        else{
            op++;
        }
        for(long int i=1 ; i<n ; i++){
            if(ch[i]==')' && s.top()=='(' && ((op-1)==cl)){
                s.pop();
            }
            else{
                s.push(ch[i]);
            }
            if(ch[i]==')'){
                cl++;
            }
            else{
                op++;
            }          
        }
        ans = s.size();
    }
    cout<<ans;
    return 0;
}