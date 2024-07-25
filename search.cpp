#include<bits/stdc++.h>
using namespace std;

int main(){
    //Linear Search
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 9;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == target){
            cout<<"The index of the target is :"<<i<<endl;
            break;
        }
    }
   

    return 0;

}