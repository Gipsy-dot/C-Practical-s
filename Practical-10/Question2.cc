#include <iostream>
#include <string>
using namespace std;

class Patient{

    protected:

    int patientID;
    string name;

    public: 

    void input(){

        cout<<"Enter Patient ID: "<<endl;
        cin>>patientID;
        cout<<"Enter Patient name: "<<endl;
        cin>>name;
    }

    void display(){

        cout<<"Patient ID: "<<patientID<<endl;
        cout<<"Patient Name: "<<name<<endl;
    }
};

class CriticalPatient:public Patient{

    private:

    int oxygenLevel;

    public: 

    void input(){

        Patient::input();
        cout<<"Enter Oxygen Level: "<<endl;
        cin>>oxygenLevel;
    }

    void checkEmergency(){
        if(oxygenLevel<90){
            cout<<"Emergency!!"<<endl;
        }
    }

    void display(){

        Patient::display();
        cout<<"Oxygen Level: "<<oxygenLevel<<endl;
        checkEmergency();
    }
};

class RegularPatient : public Patient{

    private:

    int heartRate;

    public: 

    void input(){

        Patient::input();
        cout<<"Enter Patient Heart rate: "<<endl;
        cin>>heartRate;
    }

    void checkHealth(){
        if(heartRate<60 || heartRate > 100){
            cout<<"Abnormal Health!!"<<endl;
        }
        else{
            cout<<"Good Health!"<<endl;
        }
    }

    void display(){

        Patient::display();
        cout<<"Patient Heart rate: "<<heartRate<<endl;
        checkHealth();
    }
};

class RemotePatient : public Patient{

    private:

    int stepCount;

    public: 

    void input(){

        Patient::input();
        cout<<"Enter Patient step count: "<<endl;
        cin>>stepCount;
    }

    void analyzeActivity(){

        if(stepCount>=10000){

            cout<<"High Active!"<<endl;
        }
        else if(stepCount>=3000){
            cout<<"Moderate Activity"<<endl;
        }
        else{
            cout<<"Low Activity!"<<endl;
        }
    }

    void display(){

        Patient::display();
        cout<<"Patient Step count: "<<endl;
        analyzeActivity();
    }
};

int main(){

    CriticalPatient cr;
    cr.input();
    cr.checkEmergency();
    cout<<endl;
    cr.display();
    cout<<endl;

    RegularPatient rp;
    rp.input();
    rp.checkHealth();
    cout<<endl;
    rp.display();
    cout<<endl;

    RemotePatient rep;
    rep.input();
    rep.analyzeActivity();
    cout<<endl;
    rep.display();
    cout<<endl;


    return 0;
}