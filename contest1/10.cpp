#include<iostream>

using namespace std;

int main (){
    int n,m,y;
    cin>>n;
    if(n>365){
        y=n/365;
        m=(n-(y*365))/7;
        n=n-m*7-y*365;
    }
    else {
        y=0;
        m=(n-(y*365))/7;
        n=n-m*7-y*365;
    }
    cout<<n<<" "<<m<<" "<<y;
    return 0;
}