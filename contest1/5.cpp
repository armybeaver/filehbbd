#include<iostream>

using namespace std;
#define OUT 0
#define IN 1


int main (){
    int n;
    int STATE=OUT;
    cout<<"nhap \n";
    cin>>n;

    if(n%2==0)cout<<"Yes\n";else cout<<"No\n";
    if(n%15==0)cout<<"Yes\n";else cout<<"No\n";
    if(n%3==0&&n%7==!0)cout<<"Yes\n";else cout<<"No\n";
    if(n%3==0||n%5==0)cout<<"Yes\n";else cout<<"No\n";
    if(n>=30&&n<=50)cout<<"Yes\n";else cout<<"No\n";
    if(n>=30&&(n%2==0||n%3==0||n%5==0))cout<<"Yes\n";else cout<<"No\n";
    for (int i = 2; i<= (n-(n/100)*100);i++){
        if((n-(n/100)*100)%i==0){
            STATE=IN;
            break;
        }
    }
    if (STATE==IN) cout<<"No\n";else cout<<"Yes\n";
    if(n<=100&&n%23==0)cout<<"Yes\n";else cout<<"No\n";
    if(n<10||n>20)cout<<"Yes\n";else cout<<"No\n";
    if((n-((n/10)*10))%3==0)cout<<"Yes\n";else cout<<"No\n";
    return 0;
}