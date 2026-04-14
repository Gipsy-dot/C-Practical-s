#include <iostream>
#include <string>
using namespace std;

class Employee {

    public:

    int employeeID;
    string employeeName;
    int employeeRating;

    void input(){

        cout<<"Enter employee ID here: "<<endl;
        cin>>employeeID;

        cout<<"Enter employee Name here: "<<endl;
        cin>>employeeName;

        cout<<"Give Rating: "<<endl;
        cin>>employeeRating;
    }
};

int main(){

    Employee e[3];

    for(int i = 0 ; i<3 ; i++){
        e[i].input();
    }
    
    int  highestRating = 0;
    string highEmployee;

    for(int i = 0 ; i<3 ; i++){
        if(e[i].employeeRating > highestRating){
            highestRating=e[i].employeeRating;
            highEmployee=e[i].employeeName;
        }
        if(e[i].employeeRating < 50){
            cout<<e[i].employeeName<<" has below 50  rating"<<endl;
        }
    }
    cout<<highEmployee<<" has highest rating: "<<highestRating<<endl;

    int  sum = 0;
    for(int i = 0 ; i<3; i++){
        sum = sum + e[i].employeeRating;
    }
    int average = sum/3;

    cout<<"Average employee  rating is: "<<average<<endl;

    return 0;
}