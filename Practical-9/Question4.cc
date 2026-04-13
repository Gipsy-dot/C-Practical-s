#include <iostream>
#include <string>
using namespace std;

class Sensor{

    protected:

    int sensorID;
    string Location;

    public:

    void input(){

        cout<<"Enter Sensor ID: "<<endl;
        cin>>sensorID;
        cout<<"Enter Location: "<<endl;
        cin>>Location;

    }

    void display(){

        cout<<"Sensor ID: "<<sensorID<<endl;
        cout<<"Location: "<<Location<<endl;
    }
};

class WeatherSensor:public Sensor{

    protected:

    int rainfall;
    int humidity;

    public:

    void input(){

        Sensor::input();
        cout<<"Enter Rainfall: "<<endl;
        cin>>rainfall;

        if(rainfall<0 || rainfall >500){
            cout<<"Invalid input!"<<endl;
            rainfall=0;
        }

        cout<<"Enter Humidity: "<<endl;
        cin>>humidity;

        if(humidity<0 || humidity>100){
            cout<<"Invalid input!"<<endl;
            humidity=0;
        }
    }

    void display(){
        
        cout<<"||--Final Report--||"<<endl;
        Sensor::display();
        cout<<"Rainfall: "<<rainfall<<" mm"<<endl;
        cout<<"Humidity: "<<humidity<<"%"<<endl;
    }
};

class FloodSensor:public WeatherSensor{

    public:

    void analyzeRisk(){
        if(rainfall>100 && humidity>80){
            cout<<"|| Flood risk : High ||"<<endl;
            cout<<"Immediate evacuation required!"<<endl;
        }
        else if(rainfall>100 || humidity > 80){
            cout<<"|| Flood risk: Medium ||"<<endl;
        }
        else{
            cout<<"|| Flood risk: Low ||"<<endl;
        }
    }

    void finalReport(){
        WeatherSensor::display();
        analyzeRisk();
    }
};

int main(){

    FloodSensor fs;

    fs.input();
    fs.finalReport();

    return 0;
}