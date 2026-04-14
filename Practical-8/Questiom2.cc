#include <iostream>
#include <string>
using namespace std;

class ExamSession{

    private:

    int studentID;
    int score;
    bool isSubmitted;

    public: 
 
    ExamSession(int id){

        studentID=id;
        score=0;
        isSubmitted=false;
    }

    void startExam(){
        
        cout<<"Exam Started__Write for your Life!!"<<endl;
    }

    void submitExam(int m){
        if(isSubmitted){
            cout<<"Marks alredy submitted!"<<endl;
            return;
        }
        if(m>100){
            cout<<"Invaild Marks Jial!"<<endl;
            return;
        }
        score=m;
        isSubmitted=true;
    }

    void getResult(){
        if(isSubmitted){
            cout<<"Exam Completed You Survived"<<endl;
            cout<<"You Score "<<score<<" Marks!"<<endl;
        }
        else{
            cout<<"Exam going on Prey!"<<endl;
        }
    }
};

int main(){

    ExamSession  es(1234);

    es.startExam();
    es.submitExam(34);
    es.getResult();

    return 0;
}