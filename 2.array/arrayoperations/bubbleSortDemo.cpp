#include<iostream>
#include<vector>
using namespace std; 

void printArray(vector<int>& arr , string message){
    cout<<" ▶️  "<<message<<" ◀️"<<endl; 
    for(const auto& val : arr ){
        cout<<" "<<val; 
    }
    cout<<endl;
}

// TC=O(n^2)
// SC=O(1)
void bubbleSort(vector<int>& arr){
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr.size()-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int binarySearch(vector<int>& arr , int target){
    bubbleSort(arr); 
    int low =0, high=arr.size()-1; 
    while(low<=high){
        int mid = low + (high - low )/2; 
        if(arr[mid]==target) return mid; 
        else if (arr[mid] > target) high = mid -1;
        else  low = mid + 1; 
    }
    return -1; 
}
int main(){

    system("clear");
    vector<int> values = {45,11,22,46,9,8};
    int target = 22; 
    int index = binarySearch(values,target);
    printArray(values," Our values "); 
    if(index==-1) cout<<"Not found ! "; 
    else cout<< " ✅"<<target<<"  found at index = "<<index<<endl; 
    
    return 0; 
}