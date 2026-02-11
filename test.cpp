#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& array){
    int i=0,j=array.size()-1;
    while(i<j){
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> arr ={1,2,3,4,5,6,7};
    reverse(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}