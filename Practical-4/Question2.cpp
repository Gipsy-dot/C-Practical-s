#include <iostream>
using namespace std;

class Cart{
    private: 

    float itemP;
    int Quan;

    public:
    
    void setitemdetail(float p, int q){
        itemP = p ;
        Quan = q ;
    }
    float calculatetotal(){
     return itemP * Quan ;
    }

    void displaybill(){
        cout<<" Item Price: "<<itemP<<endl;
        cout<<"Quantity : "<<Quan<<endl;
        cout<<"Total Bill: "<<calculatetotal()<<endl;
    };
};
int main(){
     Cart user;

     user.setitemdetail(500, 2);
     user.displaybill();

     return 0;
}
