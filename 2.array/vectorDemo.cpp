#include<iostream> 
#include<vector>
using namespace std; 

int main(){
    system("clear"); 

    // declaration and initialization 
    vector<int> vec1; 
    vector<int> vec2(5); // 5 elements (0 values )
    vector<int> vec3(5,10); 
    vector<int> vec4 ={45,23,55,66,11}; 

 
    // All element 
    vec4.push_back(88); 
    vec4.push_back(99); 

    // For Delete 
    // vec4.erase(); 
    // For Clear 
    // vec4.clear(); 
    cout<<" ➡️ Ranged-based print: "<<endl; 
    for(const auto& val : vec4){
        cout<<" "<<val; 
    }
    cout<<endl; 
    return 0; 
}