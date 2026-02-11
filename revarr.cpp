#include<iostream>
#include<vector>
using namespace std;
void revarr(vector<int> &nums){
    int i=0,j=nums.size()-1;
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}

int main(){
    vector<int> arr={
        1,2,3,4,5,6,7,8,9
    };

    revarr(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}