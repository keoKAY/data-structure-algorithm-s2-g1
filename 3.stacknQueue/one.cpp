#include<iostream>
#include<stack>

using namespace std; 
/**
 * Used for printing all values of the stack
 */
void printStack(stack<int>& num){
    while(!num.empty()){
        cout<<" "<<num.top(); 
        num.pop();
    }
}
int main(){
    system("clear"); 
    stack<int> stackNum; 

    // stacking value 
    // init values from 10, 20 , 30 , .... 80 
    for(int i = 1; i<=8; i++)
        stackNum.push(i*10);
    
    stackNum.pop();
    cout<<" is stack empty(): "
        <<stackNum.empty()
        <<endl; 

    cout<<"Print the first top: "<<stackNum.top()<<endl; 
    cout<<"\n 🔥 Printing all values of stack "<<endl; 
    printStack(stackNum); 
    cout<<endl; 
    return 0; 
}
