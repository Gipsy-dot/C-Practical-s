#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Order{

    protected:

    int orderID;
    string customerName;

    public:

    void input(){

        cout<<"Enter order ID: "<<endl;
        cin>>orderID;
        cin.ignore();

        cout<<"Enter customer name: "<<endl;
        getline(cin , customerName);
    }

    void display(){

        cout<<"Order ID: "<<orderID<<endl;
        cout<<"Customer name: "<<customerName<<endl;
    }
};

class FoodOrder : public Order{

    private:

    int time=60;
    string category;

    public:

    void input(int t, string cat){

         time_t now = time_t(0);
         string orderTime = ctime(&now);
         cout<<"Order Time: "<<orderTime<<endl;
        category=cat;
    }

    void checkdelay(){

        if(time>60){
            cout<<"Order Delay!"<<endl;
        }
        if(time<=60){
            cout<<"On time delivery"<<endl;
        }
    }

    void display(){

        cout<<"----||Display Details||----"<<endl;
        Order::display();
        cout<<"Delivery Time: "<<time<<endl;
        cout<<"Order Category: "<<category<<endl;
        checkdelay();
    }
};

int main(){

    FoodOrder fo;

    fo.Order::input();
    fo.input(45,"Dessert");
    fo.checkdelay();
    fo.display();

    return 0;
}