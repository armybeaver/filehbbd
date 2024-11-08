#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x;
    cin>>x;
    long long y = 1ll*x*x*x+1ll*3*x*x+x+1;
    cout<<y;
    return 0;
}