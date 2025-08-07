#include<iostream>
#include<chrono> // working with time. 
using namespace std;
using namespace std::chrono; 
  
typedef long long ll ; 
// O(n) -> Time complexity 
ll sumV1(ll n ){
    // start time  
    auto startTime = high_resolution_clock::now(); 
    ll sum =0; 
    for(ll i = 0; i<=n; i++){
        //for(ll j=0; j<=n; j++)
        sum = sum + i; 
    }

    // endtime  
    auto endTime = high_resolution_clock::now(); 
    // endtime - starttime 
    auto duaration = duration_cast<microseconds>(endTime-startTime);
    // duration 
    cout<<" 🕥 Duration #1: "<<duaration.count()<<"microsecond"<<endl; 
    return sum; 
}

//O(1) -> Time Complexity  (Constant )
ll sumV2(ll n ){
    auto startTime = high_resolution_clock::now();  
    ll sum = ( n*(n+1))/2; 
    auto endTime = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds> (endTime-startTime); 
    cout<<" 🕥 Duration #2: "<<duration.count()<<" microseconds "<<endl;    
    return sum; 
}
int main(){

    system("clear");
    ll value=1000000000; 
    ll result1=sumV1(value); 
    ll result2=sumV2(value); 

    cout<<"Result of SUMV1 is : "<<result1<<endl; 
    cout<<"Result of SUMV2 is : "<<result2<<endl; 
    return 0; 
}