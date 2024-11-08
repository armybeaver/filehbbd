#include<iostream>

using namespace std;

int main (){
    int m,y;
    cin>>m>>y;
    if (m<0||m>13||y<0){
        cout<<"INVALID";
        return 0;
    }
    if (m==2){
        if (y%4==0) cout<<"29";
        else cout<<"28";
        return 0;
    }
    if ((m<=7&&m%2==1&&m==!2)||(m>=8&&m%2==0))cout<<"31";
    else cout<<"30";
    return 0;
}