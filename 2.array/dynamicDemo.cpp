#include<iostream> 
using namespace std; 

int main(){
    system("clear"); 
    int n ; 
    cout<<"Enter number of elmeent(n): "; 
    cin>>n; 

    // dynamically allocate the memory 
    // malloc , calloc of C 
    int* arr = new int(n); 
    // initial values for the newly created array 
    for(int i = 0; i<n; i++){
        arr[i]= i *2 ; 
    }
    // [0, 2 , 4, 6, 8 ] if n = 5 

    // printing 
    cout<<" ➡️ Printing using old-style : "<<endl; 
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i]; 
    }
    cout<<endl; 
    // manually deallocated 
    delete[] arr; 
    return 0 ; 
}