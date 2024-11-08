#include<iostream>

using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(a<0||b<0||c<0) cout<<"no"; return 0;
    if(a+b<c||a+c<b||b+c<a) cout<<"khong phai tam giac"; else cout<<"tam giac";
    return 0;
}