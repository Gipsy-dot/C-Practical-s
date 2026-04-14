#include <iostream>
#include <string>
using namespace std;

class Customer{

    public:

    string customerName;
    int customerACno;
    int customerAmmount[5];

    void input(){

        cout<<"Enter Customer Name here: "<<endl;
        cin>>customerName;

        cout<<"Enter Customer Account no. here: "<<endl;
        cin>>customerACno;

        cout<<"Customer last 5 transaction amount: "<<endl;
        for(int i=0 ; i<5 ; i++){
            cin>>customerAmmount[i];
        }
    }
     int totalamount(){

            int sum =0;
            for(int i=0; i<5 ; i++){
                sum = sum + customerAmmount[i];
            }
            return sum;
        }
};
int main(){

    Customer c;

    c.input();
    cout<<"Total transaction is: "<<c.totalamount()<<endl;

    int highestAmount=0;

    for(int i=0 ; i<5 ; i++){
        if(c.customerAmmount[i] > highestAmount){
            highestAmount=c.customerAmmount[i];
        }
    }
    if(c.totalamount()>5000){
            cout<<"Suspicious transaction warning!!";
        }
    else{
        cout<<"No suspicious transaction!!";
    }    
    return 0;

}