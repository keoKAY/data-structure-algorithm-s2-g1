#include<iostream>
#include<vector>
using namespace std; 
int binarySearch(vector<int>& arr , int target ){
    int low =0, high = arr.size()-1; 
    while(low<=high){
        int mid = low + (high-low)/2; 
       // cout<<"mid = "<<mid<<endl; 
       if(arr[mid]==target) return mid; 
       else if (arr[mid] > target) high = mid -1 ; 
       else low = mid + 1; 
    }
    return -1; // not found 
}
int main(){
    system("clear"); 
    vector<int> values ={45,66,77,88,99}; 
    int target =88;  
    int index = binarySearch(values, target); 
    if(index==-1) cout<<"Not found "<<endl; 
    else cout<<"found at index ="<<index<<" value = "<<target<<endl; 
    return 0 ; 
}