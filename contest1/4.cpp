#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<(a/b)*b<<"\n";
    if(a==b)cout<<a<<endl;
    else cout<<(a/b+1)*b<<"\n";
    return 0;
}