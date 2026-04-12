#include <iostream>
using namespace std;

class Mobile{

    private: 
    int pin;

    public:
      void setpin(){
        cout<<"Enter pin here: "<<endl;
        cin>>pin;
      }
      void enteredpin(){
         int entered;
        cout<<"Enter PIN: ";
        cin>>entered;
        if(entered == pin){
            cout<<"Unlocked"<<endl;
        }
        else{
            cout<<"Wrong Pin"<<endl;
        }
     }
};
int main(){;

Mobile user;

user.setpin();
user.enteredpin();

return 0;
}
