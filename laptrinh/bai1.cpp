#include <iostream>

using namespace std;

int main() {

    system("cls");
    long long n,sum=0;

    cout<<"Nhap so can kiem tra:\n";
    cin>>n;

    for(long long i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if((sum-n)==0){
        cout<<"Day la hoan hao.";
    }
    else{
        cout<<"Day khong phai la so hoan hao.";
    }
    return 0;
}
