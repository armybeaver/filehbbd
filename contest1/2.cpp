#include<iostream>

using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long kq = 1ll*a*(b+c)+1ll*b*(a+c);
    cout<<kq;
    return 0;
}