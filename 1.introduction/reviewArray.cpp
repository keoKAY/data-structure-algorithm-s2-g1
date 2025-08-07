#include<iostream> 
using namespace std; 

int main(){
    system("clear"); 

    int oneDArray[]={
            23,44,22,11,21
    };
    // for loop 
    // for  each
    cout<<"👍 Print 1D array: "<<endl; 
    for(auto val : oneDArray){
        cout<<" "<<val; 
    }
    cout<<endl;
    
    const int row =2; 
    const int col =3; 
    int table[row][col] ={
        {11,22,33},
        {45,67,88}
    };
     
    // normal for loop 
    cout<<"\n 👍 Print 2D Arrays: "<<endl; 
    for(int i = 0; i<row; i++){

        for(int j = 0; j<col; j++){
            cout<<table[i][j]<<" "; 
        }
        cout<<endl; 
    }
    // for each 
    cout<<"\n Print 2D Array with foreach : "<<endl;
    for(auto& r : table){
        for(auto val : r ){
            cout<<" "<<val; 
        }
        cout<<endl; 
    } 

    return 0 ; 
}