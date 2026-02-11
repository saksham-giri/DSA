#include<iostream>
using namespace std;

int subtractProductAndSum(int num) {
        int sum=0;
        int prod=1;
        while(num!=0) {
            int rem=num%10;
            num/=10;
            sum+=rem;
            prod*=rem;
        }
        return prod-sum;
}

int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<subtractProductAndSum(num);
}