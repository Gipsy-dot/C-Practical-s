#include <iostream>
#include <string>
using namespace std;

class Subscription{

    private:

    int userID;
    int expiryDate;
    bool isActive;

    public: 

    Subscription(int id){

        userID=id;
        expiryDate=0;
        isActive=false;
    }

    void activePlan(int days){

        if(isActive){
            cout<<"Plan alreay active!"<<endl;
            return;
        }

        expiryDate=days;
        isActive=true;
    }

    void checkValid(){
        if(expiryDate>0){
            cout<<"Plan has days to over"<<endl;
            return;
        }
        if(expiryDate<0){
            cout<<"Plan expired!"<<endl;
            return;
        }
    }

    void getStatus(){

        cout<<"User ID: "<<userID<<endl;

        if(isActive){
            cout<<"Plan active!"<<endl;
        }
        else{
            cout<<"Plan expire"<<endl;
        }
        cout<<"No. of Days: "<<expiryDate<<" days"<<endl;
    }
};

int main(){

    Subscription s(1234);

    s.activePlan(-90);
    s.checkValid();
    s.getStatus();

    return 0;
}