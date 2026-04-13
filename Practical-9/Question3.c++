#include <iostream>
#include <string>
using namespace std;

class Log{

    protected:

    string ipAddress;
    int timeStamp;

    public:

    void input(){

        cout<<"Enter IP Address here: "<<endl;
        cin>>ipAddress;

        cout<<"Enter Time Stamp: "<<endl;
        cin>>timeStamp;
    }

    void display(){
        cout<<"Ip Address: "<<ipAddress<<endl;
        cout<<"Time Stamp: "<<timeStamp<<endl;
    }
};

class Network:public Log{

    protected:

    int loginAttempts;

    public: 

    void input(){

        Log::input();
        cout<<"Enter Login Attempts here: "<<endl;
        cin>>loginAttempts;
    }

    void display(){

        Log::display();
        cout<<"Login Attempts: "<<loginAttempts<<endl;
    }
};

class threatAnlyzer:public Network{

    protected:

    bool isBlocked=false;

    public:

    void checkThreat(){

        if(loginAttempts>=10){
            cout<<"|| Threat Level: High ||"<<endl;
            cout<<"|| IP : Blocked ||"<<endl;
            isBlocked=true;
        }
        else if(loginAttempts>=5){
            cout<<"|| Threat Level : Medium || "<<endl;
        }
        else{
            cout<<"|| Threat Level : Low ||"<<endl;
        }
    }

    void display(){

        Network::display();
        checkThreat();
    }
};

int main(){
    
    int n;

    cout<<"How many Entry: "<<endl;
    cin>>n;

    threatAnlyzer ta[n];

    for(int i=0 ; i<n ; i++){
        ta[i].input();
    }

    cout<<"----||Final Report||----"<<endl;
    for(int i=0 ; i<n ; i++){
        ta[i].display();
    }

    return 0;
}