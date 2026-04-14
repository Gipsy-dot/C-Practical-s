#include <iostream>
#include <string>
using namespace std;

class Rocket{

    private:

    int rocketID;
    int fuelLevel;
    string launchCode;
    bool isLaunched;

    public:

    Rocket(int id){
        rocketID=id;
        fuelLevel=50;
        isLaunched=false;
    }

    void refuel(int amount){
        if(fuelLevel+amount>100){
            cout<<"Fuel level exceeded!"<<endl;
            return;
        }
        fuelLevel+=amount;
    }
    void setlaunchcode(string code){
        launchCode=code;
    }
    void launch(string enteredCode){
        if(isLaunched){
            cout<<"Rocket already launch"<<endl;
            return;
        }
        if(enteredCode!=launchCode || fuelLevel<80){
            cout<<"Launch unsuccessful!"<<endl;
            return;
        }
        cout<<"---Rocket launch Successful---"<<endl;
        isLaunched=true;
    }


    void getstatus(){
        cout<<"Rocket ID: "<<rocketID<<endl;
        cout<<"Fuel Level: "<<fuelLevel<<endl;

        if(isLaunched==true){
            cout<<"||Status : Rocket already Launched||"<<endl;
        }
        else{
            cout<<"||Status : Not launch||"<<endl;
        }
    }
};

int main(){

    Rocket r(6067);

    r.refuel(40);
    r.setlaunchcode("thanos");
    r.launch("thanos");
    r.getstatus();

    return 0;
}
