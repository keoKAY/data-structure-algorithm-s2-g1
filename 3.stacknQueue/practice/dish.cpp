#include<bits/stdc++.h>
using namespace std; 

class Order{
    private: 
        stack<string> items; 
    public: 
        stack<string> getItems(){
            return items; 
        }
        void addItems(const string& item ){
            cout<<"\n 🥘 Adding : "<<item
                <<" to the order list "
                <<endl; 
            items.push(item);
        }

        void removeItem(){
            if(items.empty()){
                cout<<" ❌ Your list is already empty! "
                    <<endl; 
                return; 
            }
            cout<<"\n ♻️ Removing: "<<items.top()
                <<" from order list"<<endl; 
            items.pop(); 

        }
};

// Util function for printing all items. 
void printAllItems(stack<string> items ){
    int count=0; 
    while(!items.empty()){
        cout<<(++count)<<". Item= "<<items.top()<<endl ;
        items.pop();
    }
    
}
// todo: adding press enter to continue 
// todo: adding clear screen 
int main(){
    system("clear"); 
    int option; 
    // create order object 
    Order orders; 
    do{
        cout<<"[-------- <<iREST>> ----------]"<<endl; 
        cout<<"1. Add food to order "<<endl; 
        cout<<"2. Remove food from cart "<<endl; 
        cout<<"3. Show All foods from cart "<<endl; 
        cout<<"4. Exit "<<endl; 
        cout<<" 💊 Choose you option: "; 
        cin>>option; 
        cout<<endl; 
        switch(option){
            case 1: 
                {
                    string orderItem; 
                    cout<<"Enter your dish: "; 
                    cin.ignore();
                    getline(cin, orderItem); 
                    orders.addItems(orderItem); 

                }
                break; 
            case 2 : 
                orders.removeItem();
                 break; 
            case 3 : 
                cout<<"\n [      All food items       ]"<<endl; 
                printAllItems(orders.getItems()); 
                break; 
            case 4: 
                cout<<"Exit from the program...! "; 
                break; 
            default: 
                cout<<"Invalid option...! "<<endl; 
                break; 
        }
    }while(option!=4); 
    return 0 ; 
}