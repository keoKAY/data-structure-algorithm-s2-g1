#include<bits/stdc++.h> 
using  namespace std; 

class Worker{
    public: 
        int workerId; 
        string name; 
        string gender; 
        float salary; 

        Worker(int workerId, string name, string gender, float salary){
            this-> workerId = workerId; 
            this-> name = name; 
            this-> gender = gender; 
            this-> salary = salary; 

        }
        void outputInfo(){
            cout<<"ID: "<<workerId<<" Name: "<<name<<" Gender: "<<gender<<" Salary:"<<salary<<endl; 
        }
}; 

/**
 * Functions return the list of workers 
 */
vector<Worker> getAllWorkers(){
    vector<Worker> workers = {
        Worker(1001,"james","male",500), 
        Worker(1010, "Somrach","male",1000),
        Worker(1004,"bona","male",500), 
        Worker(1002,"Chimi","female",1060) 
    }; 

    return workers; 
}
void printAllWorkers(vector<Worker> &workers , string message){
    cout<<"--------- "<< message<<"--------------"<<endl; 
    for(auto& val:workers){
        val.outputInfo();
    }
}
/**
 * Function that takes workers vector and sort it
 */

 // because we want to sort by id 
 // sort ->ascending order , descending order in one function
void bubbleSort(vector<Worker>& workers, bool isAscending){
    for(int i =0; i<workers.size(); i++){
        for(int j = 0; j<workers.size()-i-1; j++){

            bool orderCondition = 
                isAscending==true?
                    (workers[j].workerId > workers[j+1].workerId) 
                    : 
                    (workers[j].workerId< workers[j+1].workerId); 

            if(orderCondition)
                swap(workers[j], workers[j+1]); 
        }
    }
}
// comparator concept for dynamic sort 
void bubbleSortComparator(vector<Worker>& workers, 
    function<bool (Worker& , Worker&)> comparator){
    for(int i = 0; i<workers.size(); i++){
        for(int j = 0; j<workers.size()-i-1; j++){
            if(comparator(workers[j], workers[j+1])){
                swap(workers[j], workers[j+1]); 
            }
        }
    }
} 
bool bySalarayAsc(Worker worker1 , Worker worker2 ){
    return  worker1.salary > worker2.salary ; 
}
bool bySalarayDes(Worker worker1 , Worker worker2 ){
    return  worker1.salary < worker2.salary ; 
}
int main(){
    system("clear"); 
    vector<Worker> allWorkers=getAllWorkers(); 
    // print before sort worker 
    printAllWorkers(allWorkers," Workers data before sorted "); 
    bubbleSort(allWorkers, true); 
    printAllWorkers(allWorkers," All worker after sorted (Ascending order ) ");
    bubbleSort(allWorkers,false); 
    printAllWorkers(allWorkers, " All worker after sorted ( Descending order )");  

    // using comparator styles 
    bubbleSortComparator(allWorkers,bySalarayAsc); 
    printAllWorkers(allWorkers, "Sorted by salary "); 
    return 0; 
} 