#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int r,cv,dt;
    cin>>r;
    cv=2*r*3.14;
    dt=r*r*3.14;
    cout<<fixed<<setprecision(4)<<(double)cv<<"\t"<<(double)dt;
    return 0;
}