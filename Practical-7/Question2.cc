#include <iostream>
#include <string>
using namespace std;

class Student{

    public: 
    
    string studentName;
    float studentCGPA;

    void input(){

        cout <<"Enter Student name here: "<<endl;
        cin >>studentName;

        cout <<"Enter Student CGPA here: "<<endl;
        cin >>studentCGPA;
        
    }
};

int main(){


    Student s[5];

    for(int i = 0 ; i<5 ; i++){
        s[i].input();
    }

    float highestCGPA = 0;
    string highestStudent;
    int eligibleStudents = 0;

    for(int i=0 ; i<5 ; i++){
        if(s[i].studentCGPA>=8.0){
            cout<<s[i].studentName<<" is eligible for Scholarship!"<<endl;
            eligibleStudents++;
        }
    }

    for(int i=0 ; i<5 ; i++){
        if(s[i].studentCGPA > highestCGPA){
            highestCGPA = s[i].studentCGPA;
            highestStudent = s[i].studentName;
        }
    }
   cout<<"No. of Eligible student is: "<<eligibleStudents<<endl;
   cout <<highestStudent  << "\nGet's Highest CGPA: "<<highestCGPA<<endl;
}