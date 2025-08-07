#include<iostream>
#include<vector>
using namespace std; 

// Time Complexity : O(n^2)
// Space Complexity : O(1)
void printPairs(vector<int>& arr ){
    for(int i = 0; i<arr.size(); i++){
        for(int j =0; j<arr.size(); j++){
            cout<<" "<<arr[i]<<" "<<arr[j]<<endl; 
        }
        cout<<endl; 
    }
}
int main(){
    system("clear"); 
    vector<int> values = { 34,44,55 }; 
    printPairs(values); 
    return 0; 
}