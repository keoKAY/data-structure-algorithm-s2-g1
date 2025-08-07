#include<iostream>
#include<array>
using namespace std; 
int main(){
    system("clear"); //cls
    array<int, 5> arr = {45,44,12,34,11}; 

    cout<<"Size of array is: "<<arr.size()<<endl; 
    cout<<" 1️⃣ First element : "<<arr[0]<<endl; 
    cout<<" 2️⃣ Second Element : "<<arr.at(1)<<endl; 

    // Using iterator to loop array
    // There are two opeators in points 
    // & Address-of 
    // * Dereference 
    cout<<"\n ➡️ Printing array using iterators "<<endl;  
    for(auto it=arr.begin(); it!=arr.end(); it++){
        cout<<" "<<(*it)<<" "; 
    }
    cout<<endl; 

    cout<<"\n 👍 Print using range-based : "<<endl; 
    for(const auto& val : arr ){
        cout<<" "<<val; 
    }
    cout<<endl; 

    return 0; 
}