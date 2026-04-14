#include <iostream>
#include <string>
using namespace std;

class Machine{

    private: 

    int machineID;
    int temperature;
    int maxTemperature;

    public:

    Machine(int id){

        machineID=id;
        temperature=50;
        maxTemperature=0;
    }

    void setmaxTemp(int maxTemperature){
        this->maxTemperature;
    }

    void increase(int add){
        if(temperature+add > maxTemperature){
            cout<<"Maximum limit is reached!"<<endl;
            cout<<"Unsafe Above Maximum!!"<<endl;
            return;
        }
        temperature+=add;
    }

    void decrease(int minus){
        if(temperature-minus<0){
            cout<<"Temperature can't go below 0!"<<endl;
            return;
        }
        temperature-=minus;
    }
    void gettemperature(){
        cout<<"Machine ID: "<<machineID<<endl;
        cout<<"Maximum Temperature: "<<maxTemperature<<" *"<<endl;
        cout<<"Current Temperature: "<<temperature<<" *"<<endl;
    }
};

int main(){

    Machine m(1234);

    m.setmaxTemp(100);
    m.increase(70);
    m.decrease(10);
    m.gettemperature();

    return 0;
}