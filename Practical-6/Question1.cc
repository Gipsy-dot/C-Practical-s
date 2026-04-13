#include <iostream>
#include <string>
using namespace std;

class Attendance{

    private:

    string studentName;
    int totalClasses;
    int classAttended;
    float attendancePercentage;

    public: 

    Attendance(string name, int Tclasses, int Aclasses){

        studentName = name;
        totalClasses= Tclasses;
        classAttended = Aclasses;
    }

    void percentage(){

        attendancePercentage = ((float)classAttended/totalClasses)*100;
    }
    void display(){

        cout<< "Student Name: " << studentName <<endl;
        cout <<"Total Classes: "<< totalClasses << endl;
        cout <<"Attended Classes: " << classAttended << endl;
        cout <<"Attendace Percentage: " <<attendancePercentage <<endl;
    }
    float getattendancePercentage(){
        return attendancePercentage;
    }
};

void checkEligibility(Attendance Student){

    float per = Student.getattendancePercentage();

    if(per >= 75){
        cout << "You are Eligibile for Exam: " << per << endl;
    }
    else{
        cout <<"You are not Eligibile for Exam:  "<<per <<endl;
    }
}
int main(){

    Attendance Student1("Rishav" , 100 , 90);
    Attendance Student2("Vastavik" , 100 , 20);

    Student1.percentage();
    Student2.percentage();

    Student1.display();
    Student2.display();

    checkEligibility(Student1);
    checkEligibility(Student2);

    return 0;
}
