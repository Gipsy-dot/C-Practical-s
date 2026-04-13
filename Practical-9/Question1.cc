#include <iostream>
#include <string>
using namespace std;

class Sensor{

    protected:

    int sensorID;
    string sensorLoc;

    public: 

    void input(){

        cout<<"Enter Sensor id: "<<endl;
        cin>>sensorID;

        cout<<"Enter Sensor location: "<<endl;
        cin>>sensorLoc;
    }

    void display(){

        cout<<"Sensor ID is: "<<sensorID<<endl;
        cout<<"Sensor Location is: "<<sensorLoc<<endl;

    }
};

class soil : public Sensor{

    private: 

    int mositureLevel=0;
    int soilFertility=0;

    public:

    void input(int level , int index){

        mositureLevel=level;
        soilFertility=index;
    }

    void checksoilibilty(){

        if(mositureLevel>40 && mositureLevel<70 && soilFertility>=50){
            cout<<"Soil is suitable!"<<endl;
        }

        if(mositureLevel<40 || mositureLevel>70 || soilFertility<50){

            if(mositureLevel<40){
                cout<<"Mositure Level is Low use Irrigation!"<<endl;
            }

            if(mositureLevel>70){
                cout<<"Mositure Level is high suggestion Darinage!"<<endl;
            }

            if(soilFertility<50){
                cout<<"Soil fertility is low Use Fertilizer's!"<<endl;
            }
        }
    }

    void display(){

        cout<<"----||Display Details||----"<<endl;
        Sensor::display();
        cout<<"Mositure Level in soil: "<<mositureLevel<<endl;
        cout<<"Soil fertility: "<<soilFertility<<endl;
        checksoilibilty();
    }
};

int main(){
    soil so;

    so.Sensor::input();
    so.input(34,35);
    so.checksoilibilty();
    so.display();

    return 0;
}
