#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long a,b,c;
    cin >> a>>b >>c;
    if(a+b<c||a+c<b||b+c<a){
        cout<<"INVALID";
        return 0;
    }
    if (a==b&&a==c){
        cout <<"1";
        return 0;
    }
    if (a==b||a==c||b==c) cout<<"2";
    else if (a == sqrt(b*b+c*c)||b == sqrt(a*a+c*c)||c == sqrt(b*b+a*a)) cout<<"3";
    return 0;
}