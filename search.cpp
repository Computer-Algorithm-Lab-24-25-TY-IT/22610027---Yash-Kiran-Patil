#include<bits/stdc++.h>
using namespace std;

int main(){
    //Binary Search
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 9;
    int l = 0, r = arr.size()-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid] == target){
            cout<<"The index of the target is :"<<mid<<endl;
            break;
        }
        else if(arr[mid] < target){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return 0;

}
