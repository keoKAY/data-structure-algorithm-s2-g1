// User -> enter their name to win a promotion 
// select only those who register their name first. 

#include<iostream>
#include<queue>
#include<vector> 
using namespace std; 
class PeopleQueue{
    private: 
        queue<string> people; 
    public: 
        queue<string> getPeople(){ return people; }
        void enqueuePerson(const string& person){
            cout<<" ✅ Adding : "<<person<<" to queue...."<<endl; 
            people.push(person); 
        }
        void dequeuePerson(){
            if(people.empty()){
                cout<<" ❌ No people inside the queue..."<<endl; 
                return ; 
            }

            cout<<"Removing name="<<people.front()<<" from the queue..."<<endl; 
            people.pop(); 

        }
}; 
// Utils -> print all people 
void printAllPeople(queue<string> people){
    int counter = 0; 
    while(!people.empty()){
        cout<<"\t"<<(++counter)<< ". "<<people.front()<<endl; 
        people.pop();
    }
    cout<<endl ;
    cout<<"---------------------------"<<endl; 
}
// Utils -> print only the winners ( based on n input )

void printWinners(queue<string> people, int n ){
    int counter=0; 
    while(!people.empty() && counter<n){
        cout<<"\t"<<(++counter)<<". "
            <<people.front()<<endl; 
        people.pop();
    }
}
int main(){
    system("clear"); 
    PeopleQueue pQueue; 
    vector<string> mockUpData={
        "Bo Vibol",
        "Phann Monika",
        "Pich SreyPin ", 
        "Pring Sovannvatey ", 
        "Prum Sokheng "
    };
    cout<<" 🌟 Starting adding "
    <<mockUpData.size()
    <<" record "<<endl; 
    for(auto val: mockUpData){
        pQueue.enqueuePerson(val); 
    }

    int option; 
    while(true){
        cout<<"1. Register customer name  "<<endl; 
        cout<<"2. Remove customer name from queue "<<endl; 
        cout<<"3. Show all customers "<<endl; 
        cout<<"4. Show Top n selected customer "<<endl; 
        cout<<"5. Exit "<<endl; 

         cout<<"Choose your option: "; cin>>option; 
         switch(option){
            case 1: {
                    string name ; 
                    cout<<"Enter name: "; 
                    cin.ignore();
                    getline(cin,name); 
                    pQueue.enqueuePerson(name); 
                 }
                break; 
            case 2: 
                pQueue.dequeuePerson(); 
                break; 
            case 3: 
                if(!pQueue.getPeople().empty()){
                    cout<<"------------<< All Registered Customers >>------------"<<endl; 
                    printAllPeople(pQueue.getPeople());
                }else {
                    cout<<"No data to show here ..."<<endl; 
                }
                break; 
            case 4: 
              if(!pQueue.getPeople().empty()){
                    int n ; 
                    cout<<" Enter number of winner to choose : "; cin>>n; 
                    cout<<"------------<< All Winners >>------------"<<endl; 
                    printWinners(pQueue.getPeople(),n);
                }else {
                    cout<<"No data to show here ..."<<endl; 
                }
                break; 
                break;
            case 5: 
                 cout<<"Exit from the program...! "<<endl; 
            break; 
            default: 
                 cout<<"Invalid option! Choose again... "<<endl; 
                 break; 

         }
         if(option==5) break; 
        }

    return 0; 
}