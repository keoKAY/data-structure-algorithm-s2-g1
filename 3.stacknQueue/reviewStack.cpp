// #include<bits/stdc++.h> 
#include<iostream>
#include<stack>
using namespace std; 

// print all items of stack 
void printStack(stack<int> num){
    while(!num.empty()){
        cout<<" "<<num.top(); 
        num.pop(); 
    }
    cout<<endl; 
}

int main(){
    system("clear"); 
    stack<int> stackNum; 
    // 10 , 20 , 30 , 40 , 50 
    for(int i = 1 ; i<=5; i++){
        stackNum.push(i*10); 
    }
    cout<<" 🔥 All items of stack: "<<endl; 
    printStack(stackNum); 
    // remove the current  top = 50 
    cout<<" 💥 Removing the current top=50 : "<<endl; 
    stackNum.pop(); // remove 50
    cout<<"Top element : "<<stackNum.top()<<endl; 
    return 0 ; 
}