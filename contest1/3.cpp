#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    cout<<a+b<<"\n";
    cout<<a-b<<"\n";
    cout<<1ll*a*b<<"\n";
    if(b==0){
        cout<<"INVALID\n";
    }
    else{
        cout<<fixed<<setprecision(4)<<(double)a/b;
    }
    return 0;
}