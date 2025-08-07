// create a vector student object
// class student in order to create student object
// ( id , name , gender, classroom , grade )
// by using binarySearch algorithm, search the student data quickly
#include <iostream>
#include <vector>

using namespace std;

class Student
{
public:
    int id;
    string name;
    string gender;
    int score;
    string classroom;
    Student(int id, string name,
            string gender,
            int score,
            string classroom)
    {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->score = score;
        this->classroom = classroom;
    }
    void output(){
        cout<<"\n [\t Student info \t]"<<endl; 
        cout<<" ▶️  Student ID: "<<id<<endl; 
        cout<<" ▶️  Student name : "<<name <<endl; 
        cout<<" ▶️  Student gender : "<<gender <<endl; 
        cout<<" ▶️  Student score: "<<score<<endl; 
        cout<<" ▶️  Student classroom: "<<classroom<<endl; 
    }
};
int binarySearch(vector<Student>& students, int id ){
    int low =0, high=students.size()-1; 
    while(low <=high){
        int mid = low + (high-low)/2; 
        if(students[mid].id == id ) return mid; 
        else if (students[mid].id > id) high = mid -1 ; 
        else low= mid + 1; 
    }
    return -1; 
}
int main()
{
    system("clear");
    vector<Student> students ={
        Student(1001,"james smith","male",93,"frontend"),
        Student(1011,"john smith","male",73,"blockchain"),
        Student(1021,"koko ","female",50,"devops"),
        Student(1031,"dara kok","male",99,"frontend"),
        Student(1041,"bona kok","male",68,"data analytics ")
    }; 
    int target=1041; 
    int index = binarySearch(students,target); 
    if(index == -1 ) 
            cout<<" ❌ ID = "
            <<target<<" not found!!"<<endl; 
    else {
            cout<<" ✅ Student with ID = "
            <<target<<" found at index "
            <<index<<endl; 
            // show student detail when search found 
            students[index].output();
    }

    return 0;
}