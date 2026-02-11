#include<iostream>
using namespace std;

int revint(int num){
    
    int ans=0;
    while(num!=0){
        int rem;
        rem=num%10;
        ans=ans*10+rem;
        num/=10;
    }

    
    cout<<ans;
}
int main(){
    int n;
    cout<<"number: ";
    cin>>n;
    revint(n);
    return 0;
}

