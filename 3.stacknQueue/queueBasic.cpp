#include<iostream> 
#include<queue>
using namespace std; 

void printQueue(queue<int> nums ){
    while(!nums.empty())
    {
        cout<<" "<<nums.front(); 
        nums.pop();
    }
}
int main(){
    system("clear"); 
    queue<int> queueNums; 
    for(int i = 1; i<=5; i++){
        queueNums.push(i*10); 
    }

    cout<<"Items in queue: "<<queueNums.size()<<endl; 
    cout<<"\n Printing all element of queue... "<<endl; 
    printQueue(queueNums); 

}