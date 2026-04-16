#include <iostream>
#include <string>
using namespace std;

class Sensor{

    protected:

    int sensorID;

    public: 

    void input(){

        cout<<"Enter sensor Id: "<<endl;
        cin>>sensorID;
    }
};

class AirSensor:public Sensor{

    protected:

    int AQI;

    public:
     
    void input(){

        Sensor::input();
        cout<<"Enter AQI: "<<endl;
        cin>>AQI;
    }

    bool isAirPolluted(){
        if(AQI>100){
            return true;
        }
        else{
            return false;
        }
    }
};

class TrafficSensor: public Sensor{

    protected:

    int vehicleCount;

    public:

    void input(){

        cout<<"Enter Vehical count: "<<endl;
        cin>>vehicleCount;
    }

    bool isTrafficHigh()
    {
        if(vehicleCount>30){
            return true;
        }
        else{
            return false;
        }
    }
};

class PollutionAnalyzer:public AirSensor, public TrafficSensor{

    private:

    string pollutionLevel;

    public: 

    void input(){

        AirSensor::input();
        TrafficSensor::input();
    }

void analyzePollution() {
    if(isAirPolluted() && isTrafficHigh()) {
        pollutionLevel = "High";
        cout << "Action: Use Public Transport & Masks!" << endl;
    } 
    else if(isAirPolluted() || isTrafficHigh()) {
        pollutionLevel = "Medium";
        cout << "Action: Avoid heavy traffic areas." << endl;
    } 
    else {
        pollutionLevel = "Low";
        cout << "Action: Air is clean." << endl;
    }
}

    void display(){

        cout<<"Pollution Level: "<<pollutionLevel<<endl;
    }
};

int main(){

    PollutionAnalyzer pa;

    pa.input();
    pa.analyzePollution();
    pa.display();

    return 0;
}