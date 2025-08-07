#include<iostream>
using namespace std ; 

// Time Complexity : O(n) : Linear Time 
// Space Complexity: O(1)
// static array parameter , will decay to pointer
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i]; 
    }
    cout<<endl; 
}

// Linear Search 
// Time Complexity = O(n) Linear Time 
// Space Complexity = O(1) Constant 
int linearSearch(int arr[], int size, int target){
    // where is the space 
    for(int i = 0; i<size; i++){   
        if(arr[i]== target){
            return i; 
        }
    }
    return -1;
}

// Binary Search 
// Time Complexity = O(log n ) = Logarithmic Time
// Space Complexity = O(1)
int binarySearch(int arr[], int size, int target){
    int low=0; 
    int high=size -1; 
    while(low<=high){
        // middle position
        int mid = low + (high - low )/2; 
       // cout<<"Mid value = "<<mid<<endl; 
        if(arr[mid]== target){
            return mid; 
        }else if (target> arr[mid]){
            // move to the middle right 
            low = mid + 1; 
        }else {
            // move to the middle left 
            high = mid -1; 
        }
    }
 return -1;    
}
int main(){
    system("clear"); 
    
    int arr[]{45,67,88,99 ,110};
    int size = sizeof(arr )/sizeof(*arr); 
    cout<<"Total size of arr : "<<size<<endl; 
    
    // Traverse -> Loop on array -> Iterate 
    cout<<" Print all element of arry : "<<endl; 
    printArray(arr,size);
    
    // TC = O(n)=>Linear Search 
    cout<<"\n Linear Search Algorithm :"<<endl;
    int target = 110; 
    int linearIndex = linearSearch(arr,size,target); 
    if(linearIndex==-1){
        cout<<" ❌ Item = "<<target<<" not found!"<<endl; 
    }else {
        cout<<" ✅ Item "<<target<<" found at index ="
        <<linearIndex<<endl; 
    }

    // Binary Search Algorithm here ! 
    cout<<"\n Binary Search Algorithm: "<<endl; 
    int binaryIndex = binarySearch(arr,size,target); 
    if(binaryIndex == -1 ){
        cout<<" ❌ Item = "<<target
            <<" Not found ! ! "<<endl; 
    }else {
        cout<<" ✅ Item = "<<target
        <<" found at index = "
        <<binaryIndex<<endl; 
    }


    return 0; 
}