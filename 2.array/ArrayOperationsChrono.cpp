
#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std ; 

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i]; 
    }
    cout<<endl; 
}

int linearSearch(int arr[], int size, int target){
    auto startTime = high_resolution_clock::now();
    // where is the space 
    for(int i = 0; i<size; i++){   
        if(arr[i]== target){
            auto endTime = high_resolution_clock::now(); 
            auto duration = duration_cast<nanoseconds>(endTime-startTime); 

            cout<<"=> 🕥 Linear Duration is : "
                <<duration.count()
                <<"nanoseconds"<<endl; 
            return i; 
        }
    }
    
    auto endTime = high_resolution_clock::now(); 
    auto duration = duration_cast<nanoseconds>(endTime-startTime); 

    cout<<"=> 🕥 Linear Duration is : "
        <<duration.count()
        <<"nanoseconds"<<endl; 
    return -1;
}

// Binary Search 
// Time Complexity = O(log n ) = Logarithmic Time
// Space Complexity = O(1)
int binarySearch(int arr[], int size, int target){
    auto startTime = high_resolution_clock::now();
    int low=0; 
    int high=size -1; 
    while(low<=high){
        // middle position
        int mid = low + (high - low )/2; 
       // cout<<"Mid value = "<<mid<<endl; 
        if(arr[mid]== target){
            auto endTime = high_resolution_clock::now(); 
            auto duration = duration_cast<nanoseconds>(endTime - startTime);
            cout<<"=> 🕥 Duration Binary = "<<duration.count()<<" nanoseconds"<<endl; 
            return mid; 

        }else if (target> arr[mid]){
            // move to the middle right 
            low = mid + 1; 
        }else {
            // move to the middle left 
            high = mid -1; 
        }
    }

    auto endTime = high_resolution_clock::now(); 
    auto duration = duration_cast<nanoseconds>(endTime - startTime);
    cout<<"=> 🕥 Duration Binary = "<<duration.count()<<" nanoseconds"<<endl;  
 return -1;    
}
int main(){
    system("clear"); 
    
    const int size = 1000000; 
    int arr[size]; 
    // initial values for array 
    for(int i = 0; i<size ; i++){
        arr[i]= i*2 ; 
    }
    // 0 , 2, 4 , 6 , ......., n
    cout<<"Total size of arr : "<<size<<endl; 
    
    // Traverse -> Loop on array -> Iterate 
    // cout<<" Print all element of arry : "<<endl; 
     //printArray(arr,size);
    
    // TC = O(n)=>Linear Search 
    cout<<"\n Linear Search Algorithm :"<<endl;
    int target = 1999886; 
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